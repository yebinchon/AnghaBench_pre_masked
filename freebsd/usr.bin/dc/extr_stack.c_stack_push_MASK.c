
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int string; int num; } ;
struct value {int type; int * array; TYPE_2__ u; } ;
struct stack {size_t sp; TYPE_1__* stack; } ;
struct TYPE_3__ {int type; int * array; } ;





 int * FUNC_0 (int *) ;
 int FUNC_1 (struct stack*) ;
 int FUNC_2 (struct stack*,int ) ;
 int FUNC_3 (struct stack*,int ) ;

void
FUNC_4(struct stack *VAR_0, struct value *VAR_1)
{

 switch (VAR_1->type) {
 case 130:
  FUNC_1(VAR_0);
  VAR_0->stack[VAR_0->sp].type = 130;
  break;
 case 129:
  FUNC_2(VAR_0, VAR_1->u.num);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_1->u.string);
  break;
 }
 VAR_0->stack[VAR_0->sp].array = VAR_1->array == ((void*)0) ?
     ((void*)0) : FUNC_0(VAR_1->array);
}
