
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct stack {int sp; struct value* stack; } ;


 int FUNC_0 (char*) ;

void
FUNC_1(struct stack *VAR_0)
{
 struct value VAR_1;

 if (VAR_0->sp < 1) {
  FUNC_0("stack empty");
  return;
 }
 VAR_1 = VAR_0->stack[VAR_0->sp];
 VAR_0->stack[VAR_0->sp] = VAR_0->stack[VAR_0->sp-1];
 VAR_0->stack[VAR_0->sp-1] = VAR_1;
}
