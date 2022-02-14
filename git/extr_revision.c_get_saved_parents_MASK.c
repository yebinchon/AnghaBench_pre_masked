
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int saved_parents_slab; } ;
struct commit_list {int dummy; } ;
struct commit {struct commit_list* parents; } ;


 struct commit_list* VAR_0 ;
 struct commit_list** FUNC_0 (int ,struct commit const*) ;

struct commit_list *FUNC_1(struct rev_info *VAR_1, const struct commit *VAR_2)
{
 struct commit_list *VAR_3;

 if (!VAR_1->saved_parents_slab)
  return VAR_2->parents;

 VAR_3 = *FUNC_0(VAR_1->saved_parents_slab, VAR_2);
 if (VAR_3 == VAR_0)
  return ((void*)0);
 return VAR_3;
}
