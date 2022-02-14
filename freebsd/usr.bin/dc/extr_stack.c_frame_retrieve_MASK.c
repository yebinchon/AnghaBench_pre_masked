
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct stack {int sp; TYPE_1__* stack; } ;
struct array {int dummy; } ;
struct TYPE_2__ {struct array* array; } ;


 struct array* FUNC_0 () ;
 struct value* FUNC_1 (struct array*,size_t) ;

struct value *
FUNC_2(const struct stack *VAR_0, size_t VAR_1)
{
 struct array *VAR_2;

 if (VAR_0->sp == -1)
  return (((void*)0));
 VAR_2 = VAR_0->stack[VAR_0->sp].array;
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0->stack[VAR_0->sp].array = FUNC_0();
 return FUNC_1(VAR_2, VAR_1);
}
