
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stack {size_t sp; TYPE_2__* stack; } ;
struct number {int dummy; } ;
struct TYPE_3__ {struct number* num; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ u; int * array; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct stack*) ;
 int FUNC_2 (char*) ;

struct number *
FUNC_3(struct stack *VAR_1)
{

 if (FUNC_1(VAR_1))
  return (((void*)0));
 FUNC_0(VAR_1->stack[VAR_1->sp].array);
 VAR_1->stack[VAR_1->sp].array = ((void*)0);
 if (VAR_1->stack[VAR_1->sp].type != VAR_0) {
  FUNC_2("not a number");
  return (((void*)0));
 }
 return VAR_1->stack[VAR_1->sp--].u.num;
}
