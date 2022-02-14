
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ sp; int * stack; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stack*) ;

void
FUNC_3(struct stack *VAR_0)
{

 while (VAR_0->sp >= 0)
  FUNC_1(&VAR_0->stack[VAR_0->sp--]);
 FUNC_0(VAR_0->stack);
 FUNC_2(VAR_0);
}
