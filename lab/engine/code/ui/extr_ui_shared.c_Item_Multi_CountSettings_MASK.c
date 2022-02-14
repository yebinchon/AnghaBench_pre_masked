
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ multiDef_t ;
struct TYPE_5__ {scalar_t__ typeData; } ;
typedef TYPE_2__ itemDef_t ;



int FUNC_0(itemDef_t *VAR_0) {
 multiDef_t *VAR_1 = (multiDef_t*)VAR_0->typeData;
 if (VAR_1 == ((void*)0)) {
  return 0;
 }
 return VAR_1->count;
}
