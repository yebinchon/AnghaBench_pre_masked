
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_9__ {int op; int size; } ;






 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

Type FUNC_1(Type VAR_3) {
 VAR_3 = FUNC_0(VAR_3);
 switch (VAR_3->op) {
 case 131:
  return VAR_1;
 case 129:
  if (VAR_3->size < VAR_1->size)
   return VAR_1;
  break;
 case 128:
  if (VAR_3->size < VAR_1->size)
   return VAR_1;
  if (VAR_3->size < VAR_2->size)
   return VAR_2;
  break;
 case 130:
  if (VAR_3->size < VAR_0->size)
   return VAR_0;
 }
 return VAR_3;
}
