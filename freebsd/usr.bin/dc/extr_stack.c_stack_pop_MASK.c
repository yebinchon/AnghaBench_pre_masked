
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct stack {int sp; struct value* stack; } ;


 scalar_t__ FUNC_0 (struct stack*) ;

struct value *
FUNC_1(struct stack *VAR_0)
{

 if (FUNC_0(VAR_0))
  return (((void*)0));
 return &VAR_0->stack[VAR_0->sp--];
}
