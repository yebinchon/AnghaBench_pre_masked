
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int * git_vector_cmp ;
struct TYPE_12__ {int sorting; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_pqueue ;
struct TYPE_13__ {int in_degree; unsigned short out_degree; struct TYPE_13__** parents; } ;
typedef TYPE_2__ git_commit_list_node ;
struct TYPE_14__ {TYPE_2__* item; struct TYPE_14__* next; } ;
typedef TYPE_3__ git_commit_list ;
struct TYPE_15__ {TYPE_3__* next; } ;


 int VAR_0 ;
 TYPE_9__* FUNC_0 (TYPE_2__*,TYPE_3__**) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(git_commit_list **VAR_2, git_revwalk *VAR_3, git_commit_list *VAR_4)
{
 git_commit_list *VAR_5 = ((void*)0), *VAR_6, **VAR_7;
 git_commit_list_node *VAR_8;
 git_pqueue VAR_9;
 git_vector_cmp VAR_10 = ((void*)0);
 unsigned short VAR_11;
 int VAR_12;

 if (VAR_3->sorting & VAR_0)
  VAR_10 = VAR_1;

 if ((VAR_12 = FUNC_2(&VAR_9, 0, 8, VAR_10)))
  return VAR_12;







 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
  VAR_5->item->in_degree = 1;
 }






 for(VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
  for (VAR_11 = 0; VAR_11 < VAR_5->item->out_degree; ++VAR_11) {
   git_commit_list_node *VAR_13 = VAR_5->item->parents[VAR_11];
   if (VAR_13->in_degree)
    VAR_13->in_degree++;
  }
 }





 for(VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->item->in_degree == 1) {
   if ((VAR_12 = FUNC_3(&VAR_9, VAR_5->item)))
    goto cleanup;
  }
 }






 if ((VAR_3->sorting & VAR_0) == 0)
  FUNC_5(&VAR_9);


 VAR_7 = &VAR_6;
 VAR_6 = ((void*)0);
 while ((VAR_8 = FUNC_4(&VAR_9)) != ((void*)0)) {
  for (VAR_11 = 0; VAR_11 < VAR_8->out_degree; ++VAR_11) {
   git_commit_list_node *VAR_14 = VAR_8->parents[VAR_11];
   if (VAR_14->in_degree == 0)
    continue;

   if (--VAR_14->in_degree == 1) {
    if ((VAR_12 = FUNC_3(&VAR_9, VAR_14)))
     goto cleanup;
   }
  }


  VAR_8->in_degree = 0;

  VAR_7 = &FUNC_0(VAR_8, VAR_7)->next;
 }

 *VAR_2 = VAR_6;
 VAR_12 = 0;

cleanup:
 FUNC_1(&VAR_9);
 return VAR_12;
}
