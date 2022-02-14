
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_filepair {TYPE_2__* two; TYPE_1__* one; scalar_t__ broken_pair; } ;
struct TYPE_4__ {int path; } ;
struct TYPE_3__ {int path; } ;


 int FUNC_0 (struct diff_queue_struct*) ;
 int FUNC_1 (struct diff_queue_struct*,struct diff_filepair*) ;
 struct diff_queue_struct VAR_0 ;
 int FUNC_2 (struct diff_filepair**) ;
 int FUNC_3 (struct diff_filepair*,struct diff_filepair*,struct diff_queue_struct*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(void)
{
 struct diff_queue_struct *VAR_1 = &VAR_0;
 struct diff_queue_struct VAR_2;
 int VAR_3, VAR_4;

 FUNC_0(&VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  struct diff_filepair *VAR_5 = VAR_1->queue[VAR_3];
  if (!VAR_5)

   continue;
  else if (VAR_5->broken_pair &&
    !FUNC_4(VAR_5->one->path, VAR_5->two->path)) {



   for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_1->nr; VAR_4++) {
    struct diff_filepair *VAR_6 = VAR_1->queue[VAR_4];
    if (VAR_6->broken_pair &&
        !FUNC_4(VAR_6->one->path, VAR_6->two->path) &&
        !FUNC_4(VAR_5->one->path, VAR_6->two->path)) {

     FUNC_3(VAR_5, VAR_6, &VAR_2);
     VAR_1->queue[VAR_4] = ((void*)0);
     goto next;
    }
   }



   FUNC_1(&VAR_2, VAR_5);
  }
  else
   FUNC_1(&VAR_2, VAR_5);
next:;
 }
 FUNC_2(VAR_1->queue);
 *VAR_1 = VAR_2;

 return;
}
