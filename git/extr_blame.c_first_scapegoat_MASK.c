
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int children; scalar_t__ first_parent_only; } ;
struct commit_list {int * next; } ;
struct commit {int object; struct commit_list* parents; } ;


 int FUNC_0 (int *) ;
 struct commit_list* FUNC_1 (int *,int *) ;

__attribute__((used)) static struct commit_list *FUNC_2(struct rev_info *VAR_0, struct commit *VAR_1,
     int VAR_2)
{
 if (!VAR_2) {
  if (VAR_0->first_parent_only &&
      VAR_1->parents &&
      VAR_1->parents->next) {
   FUNC_0(VAR_1->parents->next);
   VAR_1->parents->next = ((void*)0);
  }
  return VAR_1->parents;
 }
 return FUNC_1(&VAR_0->children, &VAR_1->object);
}
