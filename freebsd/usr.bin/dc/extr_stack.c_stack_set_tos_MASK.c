
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int * array; } ;
struct stack {int sp; struct value* stack; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (struct value*) ;
 int FUNC_2 (struct stack*,struct value*) ;

void
FUNC_3(struct stack *VAR_0, struct value *VAR_1)
{

 if (VAR_0->sp == -1)
  FUNC_2(VAR_0, VAR_1);
 else {
  FUNC_1(&VAR_0->stack[VAR_0->sp]);
  VAR_0->stack[VAR_0->sp] = *VAR_1;
  VAR_0->stack[VAR_0->sp].array = VAR_1->array == ((void*)0) ?
      ((void*)0) : FUNC_0(VAR_1->array);
 }
}
