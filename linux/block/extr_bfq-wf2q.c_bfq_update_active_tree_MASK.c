
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;


 int FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static void FUNC_2(struct rb_node *VAR_0)
{
 struct rb_node *VAR_1;

up:
 FUNC_0(VAR_0);

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return;

 if (VAR_0 == VAR_1->rb_left && VAR_1->rb_right)
  FUNC_0(VAR_1->rb_right);
 else if (VAR_1->rb_left)
  FUNC_0(VAR_1->rb_left);

 VAR_0 = VAR_1;
 goto up;
}
