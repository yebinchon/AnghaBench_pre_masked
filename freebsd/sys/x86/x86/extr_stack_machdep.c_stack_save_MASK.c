
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int dummy; } ;
typedef int register_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct stack*,int ) ;

void
FUNC_1(struct stack *VAR_1)
{
 register_t VAR_2;




 __asm __volatile("movq %%rbp,%0" : "=g" (VAR_2));

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
