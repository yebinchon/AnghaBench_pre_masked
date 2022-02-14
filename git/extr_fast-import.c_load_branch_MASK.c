
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int active; struct branch* active_next_branch; int branch_tree; } ;


 struct branch* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct branch *VAR_3)
{
 FUNC_0(&VAR_3->branch_tree);
 if (!VAR_3->active) {
  VAR_3->active = 1;
  VAR_3->active_next_branch = VAR_0;
  VAR_0 = VAR_3;
  VAR_2++;
  VAR_1++;
 }
}
