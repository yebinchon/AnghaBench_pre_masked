
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
struct hashfile {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_5__* item; } ;
struct TYPE_9__ {int hash; } ;
struct TYPE_8__ {TYPE_4__ oid; } ;
struct commit {TYPE_3__ object; struct commit_list* parents; } ;
struct TYPE_7__ {TYPE_4__ oid; } ;
struct TYPE_10__ {TYPE_2__ object; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ,int*) ;
 int FUNC_3 (struct hashfile*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,struct commit**,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hashfile *VAR_2,
       struct write_commit_graph_context *VAR_3)
{
 struct commit **VAR_4 = VAR_3->commits.list;
 struct commit **VAR_5 = VAR_3->commits.list + VAR_3->commits.nr;
 struct commit_list *VAR_6;

 while (VAR_4 < VAR_5) {
  int VAR_7 = 0;

  FUNC_1(VAR_3->progress, ++VAR_3->progress_cnt);

  for (VAR_6 = (*VAR_4)->parents; VAR_7 < 3 && VAR_6;
       VAR_6 = VAR_6->next)
   VAR_7++;

  if (VAR_7 <= 2) {
   VAR_4++;
   continue;
  }


  for (VAR_6 = (*VAR_4)->parents->next; VAR_6; VAR_6 = VAR_6->next) {
   int VAR_8 = FUNC_5(VAR_6->item->object.oid.hash,
        VAR_3->commits.list,
        VAR_3->commits.nr,
        VAR_1);

   if (VAR_8 >= 0)
    VAR_8 += VAR_3->new_num_commits_in_base;
   else {
    uint32_t VAR_9;
    if (FUNC_2(VAR_6->item,
        VAR_3->new_base_graph,
        &VAR_9))
     VAR_8 = VAR_9;
   }

   if (VAR_8 < 0)
    FUNC_0("missing parent %s for commit %s",
        FUNC_4(&VAR_6->item->object.oid),
        FUNC_4(&(*VAR_4)->object.oid));
   else if (!VAR_6->next)
    VAR_8 |= VAR_0;

   FUNC_3(VAR_2, VAR_8);
  }

  VAR_4++;
 }
}
