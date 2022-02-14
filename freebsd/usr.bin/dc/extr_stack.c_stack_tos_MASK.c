
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct stack {int sp; struct value* stack; } ;



struct value *
FUNC_0(const struct stack *VAR_0)
{

 if (VAR_0->sp == -1)
  return (((void*)0));
 return &VAR_0->stack[VAR_0->sp];
}
