
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int orphan; struct clk_core* parent; int child_node; int children; struct clk_core* new_child; } ;


 int FUNC_0 (struct clk_core*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct clk_core *VAR_1, struct clk_core *VAR_2)
{
 bool VAR_3 = VAR_1->orphan;

 FUNC_2(&VAR_1->child_node);

 if (VAR_2) {
  bool VAR_4 = VAR_2->orphan;


  if (VAR_2->new_child == VAR_1)
   VAR_2->new_child = ((void*)0);

  FUNC_1(&VAR_1->child_node, &VAR_2->children);

  if (VAR_3 != VAR_4)
   FUNC_0(VAR_1, VAR_4);
 } else {
  FUNC_1(&VAR_1->child_node, &VAR_0);
  if (!VAR_3)
   FUNC_0(VAR_1, 1);
 }

 VAR_1->parent = VAR_2;
}
