
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int cvar; scalar_t__ typeData; } ;
typedef TYPE_1__ itemDef_t ;
struct TYPE_6__ {int maxVal; int minVal; int defVal; } ;
typedef TYPE_2__ editFieldDef_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_3( itemDef_t *VAR_2, int VAR_3 ) {
 editFieldDef_t *VAR_4;

 FUNC_0(VAR_2);
 if (!VAR_2->typeData)
  return VAR_0;
 VAR_4 = (editFieldDef_t*)VAR_2->typeData;
 if (FUNC_2(VAR_3, &VAR_2->cvar) &&
  FUNC_1(VAR_3, &VAR_4->defVal) &&
  FUNC_1(VAR_3, &VAR_4->minVal) &&
  FUNC_1(VAR_3, &VAR_4->maxVal)) {
  return VAR_1;
 }
 return VAR_0;
}
