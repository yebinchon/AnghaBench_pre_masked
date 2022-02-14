
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topo_walk_info {int indegree_queue; int indegree; } ;
struct rev_info {scalar_t__ first_parent_only; struct topo_walk_info* topo_walk_info; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; int generation; } ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*,int ) ;
 int* FUNC_1 (int *,struct commit*) ;
 scalar_t__ FUNC_2 (struct commit*,int) ;
 struct commit* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct commit*,int ) ;

__attribute__((used)) static void FUNC_5(struct rev_info *VAR_1)
{
 struct commit_list *VAR_2;
 struct topo_walk_info *VAR_3 = VAR_1->topo_walk_info;
 struct commit *VAR_4 = FUNC_3(&VAR_3->indegree_queue);

 if (!VAR_4)
  return;

 if (FUNC_2(VAR_4, 1) < 0)
  return;

 FUNC_0(VAR_1, VAR_4->generation);

 for (VAR_2 = VAR_4->parents; VAR_2; VAR_2 = VAR_2->next) {
  struct commit *VAR_5 = VAR_2->item;
  int *VAR_6 = FUNC_1(&VAR_3->indegree, VAR_5);

  if (*VAR_6)
   (*VAR_6)++;
  else
   *VAR_6 = 2;

  FUNC_4(&VAR_3->indegree_queue, VAR_5, VAR_0);

  if (VAR_1->first_parent_only)
   return;
 }
}
