
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stack {size_t sp; TYPE_2__* stack; } ;
struct TYPE_3__ {char* string; } ;
struct TYPE_4__ {int * array; TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct stack*) ;

void
FUNC_1(struct stack *VAR_1, char *VAR_2)
{

 FUNC_0(VAR_1);
 VAR_1->stack[VAR_1->sp].type = VAR_0;
 VAR_1->stack[VAR_1->sp].u.string = VAR_2;
 VAR_1->stack[VAR_1->sp].array = ((void*)0);
}
