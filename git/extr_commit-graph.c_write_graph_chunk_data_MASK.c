
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int nr; struct commit** list; } ;
struct write_commit_graph_context {int new_base_graph; scalar_t__ new_num_commits_in_base; TYPE_1__ commits; int progress_cnt; int progress; } ;
struct object_id {int* hash; } ;
struct hashfile {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_5__* item; } ;
struct TYPE_9__ {int hash; } ;
struct TYPE_8__ {TYPE_4__ oid; } ;
struct commit {int date; int generation; TYPE_3__ object; struct commit_list* parents; } ;
struct TYPE_7__ {TYPE_4__ oid; } ;
struct TYPE_10__ {TYPE_2__ object; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ,int*) ;
 struct object_id* FUNC_5 (struct commit*) ;
 int FUNC_6 (struct hashfile*,int*,int) ;
 int FUNC_7 (struct hashfile*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (struct commit*) ;
 int FUNC_11 (int ,struct commit**,int,int ) ;

__attribute__((used)) static void FUNC_12(struct hashfile *VAR_3, int VAR_4,
       struct write_commit_graph_context *VAR_5)
{
 struct commit **VAR_6 = VAR_5->commits.list;
 struct commit **VAR_7 = VAR_5->commits.list + VAR_5->commits.nr;
 uint32_t VAR_8 = 0;

 while (VAR_6 < VAR_7) {
  struct commit_list *VAR_9;
  struct object_id *VAR_10;
  int VAR_11;
  uint32_t VAR_12[2];
  FUNC_3(VAR_5->progress, ++VAR_5->progress_cnt);

  if (FUNC_10(*VAR_6))
   FUNC_2(FUNC_1("unable to parse commit %s"),
    FUNC_9(&(*VAR_6)->object.oid));
  VAR_10 = FUNC_5(*VAR_6);
  if (!VAR_10)
   FUNC_2(FUNC_1("unable to get tree for %s"),
    FUNC_9(&(*VAR_6)->object.oid));
  FUNC_6(VAR_3, VAR_10->hash, VAR_4);

  VAR_9 = (*VAR_6)->parents;

  if (!VAR_9)
   VAR_11 = VAR_1;
  else {
   VAR_11 = FUNC_11(VAR_9->item->object.oid.hash,
           VAR_5->commits.list,
           VAR_5->commits.nr,
           VAR_2);

   if (VAR_11 >= 0)
    VAR_11 += VAR_5->new_num_commits_in_base;
   else {
    uint32_t VAR_13;
    if (FUNC_4(VAR_9->item,
        VAR_5->new_base_graph,
        &VAR_13))
     VAR_11 = VAR_13;
   }

   if (VAR_11 < 0)
    FUNC_0("missing parent %s for commit %s",
        FUNC_9(&VAR_9->item->object.oid),
        FUNC_9(&(*VAR_6)->object.oid));
  }

  FUNC_7(VAR_3, VAR_11);

  if (VAR_9)
   VAR_9 = VAR_9->next;

  if (!VAR_9)
   VAR_11 = VAR_1;
  else if (VAR_9->next)
   VAR_11 = VAR_0 | VAR_8;
  else {
   VAR_11 = FUNC_11(VAR_9->item->object.oid.hash,
           VAR_5->commits.list,
           VAR_5->commits.nr,
           VAR_2);

   if (VAR_11 >= 0)
    VAR_11 += VAR_5->new_num_commits_in_base;
   else {
    uint32_t VAR_14;
    if (FUNC_4(VAR_9->item,
        VAR_5->new_base_graph,
        &VAR_14))
     VAR_11 = VAR_14;
   }

   if (VAR_11 < 0)
    FUNC_0("missing parent %s for commit %s",
        FUNC_9(&VAR_9->item->object.oid),
        FUNC_9(&(*VAR_6)->object.oid));
  }

  FUNC_7(VAR_3, VAR_11);

  if (VAR_11 & VAR_0) {
   do {
    VAR_8++;
    VAR_9 = VAR_9->next;
   } while (VAR_9);
  }

  if (sizeof((*VAR_6)->date) > 4)
   VAR_12[0] = FUNC_8(((*VAR_6)->date >> 32) & 0x3);
  else
   VAR_12[0] = 0;

  VAR_12[0] |= FUNC_8((*VAR_6)->generation << 2);

  VAR_12[1] = FUNC_8((*VAR_6)->date);
  FUNC_6(VAR_3, VAR_12, 8);

  VAR_6++;
 }
}
