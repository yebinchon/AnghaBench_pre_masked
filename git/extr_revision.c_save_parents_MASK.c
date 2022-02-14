
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_parents {int dummy; } ;
struct rev_info {scalar_t__ saved_parents_slab; } ;
struct commit_list {int dummy; } ;
struct commit {scalar_t__ parents; } ;


 struct commit_list* VAR_0 ;
 struct commit_list* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct commit_list** FUNC_2 (scalar_t__,struct commit*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct commit_list **VAR_3;

 if (!VAR_1->saved_parents_slab) {
  VAR_1->saved_parents_slab = FUNC_3(sizeof(struct saved_parents));
  FUNC_1(VAR_1->saved_parents_slab);
 }

 VAR_3 = FUNC_2(VAR_1->saved_parents_slab, VAR_2);
 if (*VAR_3)
  return;
 if (VAR_2->parents)
  *VAR_3 = FUNC_0(VAR_2->parents);
 else
  *VAR_3 = VAR_0;
}
