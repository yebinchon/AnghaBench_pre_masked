
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int * array; int type; } ;
struct stack {int sp; TYPE_1__* stack; } ;
struct array {int dummy; } ;
struct TYPE_2__ {struct array* array; } ;


 int VAR_0 ;
 int FUNC_0 (struct array*,size_t,struct value const*) ;
 struct array* FUNC_1 () ;
 int FUNC_2 (struct stack*,struct value*) ;

void
FUNC_3(struct stack *VAR_1, size_t VAR_2, const struct value *VAR_3)
{
 struct array *VAR_4;
 struct value VAR_5;

 if (VAR_1->sp == -1) {
  VAR_5.type = VAR_0;
  VAR_5.array = ((void*)0);
  FUNC_2(VAR_1, &VAR_5);
 }

 VAR_4 = VAR_1->stack[VAR_1->sp].array;
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_1->stack[VAR_1->sp].array = FUNC_1();
 FUNC_0(VAR_4, VAR_2, VAR_3);
}
