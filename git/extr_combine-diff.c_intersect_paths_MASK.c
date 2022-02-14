
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct diff_queue_struct {int nr; TYPE_3__** queue; } ;
struct combine_diff_path {char* path; struct combine_diff_path* next; TYPE_2__* parent; int mode; int oid; } ;
struct TYPE_8__ {char* path; int mode; int oid; } ;
struct TYPE_7__ {TYPE_1__* one; int status; TYPE_4__* two; } ;
struct TYPE_6__ {int path; int status; int mode; int oid; } ;
struct TYPE_5__ {int path; int mode; int oid; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct combine_diff_path*,TYPE_4__*) ;
 struct diff_queue_struct VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct combine_diff_path*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*) ;
 struct combine_diff_path* FUNC_12 (int ) ;

__attribute__((used)) static struct combine_diff_path *FUNC_13(
 struct combine_diff_path *VAR_1,
 int VAR_2,
 int VAR_3,
 int VAR_4)
{
 struct diff_queue_struct *VAR_5 = &VAR_0;
 struct combine_diff_path *VAR_6, **VAR_7 = &VAR_1;
 int VAR_8, VAR_9, VAR_10;

 if (!VAR_2) {
  for (VAR_8 = 0; VAR_8 < VAR_5->nr; VAR_8++) {
   int VAR_11;
   const char *VAR_12;
   if (FUNC_2(VAR_5->queue[VAR_8]))
    continue;
   VAR_12 = VAR_5->queue[VAR_8]->two->path;
   VAR_11 = FUNC_11(VAR_12);
   VAR_6 = FUNC_12(FUNC_0(VAR_3, VAR_11));
   VAR_6->path = (char *) &(VAR_6->parent[VAR_3]);
   FUNC_5(VAR_6->path, VAR_12, VAR_11);
   VAR_6->path[VAR_11] = 0;
   VAR_6->next = ((void*)0);
   FUNC_6(VAR_6->parent, 0,
          sizeof(VAR_6->parent[0]) * VAR_3);

   FUNC_7(&VAR_6->oid, &VAR_5->queue[VAR_8]->two->oid);
   VAR_6->mode = VAR_5->queue[VAR_8]->two->mode;
   FUNC_7(&VAR_6->parent[VAR_2].oid, &VAR_5->queue[VAR_8]->one->oid);
   VAR_6->parent[VAR_2].mode = VAR_5->queue[VAR_8]->one->mode;
   VAR_6->parent[VAR_2].status = VAR_5->queue[VAR_8]->status;

   if (VAR_4 &&
       FUNC_3(VAR_6->parent[VAR_2].status)) {
    FUNC_9(&VAR_6->parent[VAR_2].path, 0);
    FUNC_8(&VAR_6->parent[VAR_2].path,
           VAR_5->queue[VAR_8]->one->path);
   }
   *VAR_7 = VAR_6;
   VAR_7 = &VAR_6->next;
  }
  return VAR_1;
 }





 VAR_8 = 0;
 while ((VAR_6 = *VAR_7) != ((void*)0)) {
  VAR_10 = ((VAR_8 >= VAR_5->nr)
         ? -1 : FUNC_1(VAR_6, VAR_5->queue[VAR_8]->two));

  if (VAR_10 < 0) {

   *VAR_7 = VAR_6->next;
   for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    if (VAR_4 &&
        FUNC_3(VAR_6->parent[VAR_9].status))
     FUNC_10(&VAR_6->parent[VAR_9].path);
   FUNC_4(VAR_6);
   continue;
  }

  if (VAR_10 > 0) {

   VAR_8++;
   continue;
  }

  FUNC_7(&VAR_6->parent[VAR_2].oid, &VAR_5->queue[VAR_8]->one->oid);
  VAR_6->parent[VAR_2].mode = VAR_5->queue[VAR_8]->one->mode;
  VAR_6->parent[VAR_2].status = VAR_5->queue[VAR_8]->status;
  if (VAR_4 &&
      FUNC_3(VAR_6->parent[VAR_2].status))
   FUNC_8(&VAR_6->parent[VAR_2].path,
          VAR_5->queue[VAR_8]->one->path);

  VAR_7 = &VAR_6->next;
  VAR_8++;
 }
 return VAR_1;
}
