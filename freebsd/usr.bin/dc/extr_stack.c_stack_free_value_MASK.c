
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int string; int num; } ;
struct value {int type; int * array; TYPE_1__ u; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct value *VAR_0)
{

 switch (VAR_0->type) {
 case 130:
  break;
 case 129:
  FUNC_2(VAR_0->u.num);
  break;
 case 128:
  FUNC_1(VAR_0->u.string);
  break;
 }
 FUNC_0(VAR_0->array);
 VAR_0->array = ((void*)0);
}
