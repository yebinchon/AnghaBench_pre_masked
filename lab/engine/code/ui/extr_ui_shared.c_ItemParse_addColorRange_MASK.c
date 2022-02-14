
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {size_t numColors; int * colorRanges; } ;
typedef TYPE_1__ itemDef_t ;
struct TYPE_6__ {int color; int high; int low; } ;
typedef TYPE_2__ colorRangeDef_t ;
typedef int color ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_3( itemDef_t *VAR_3, int VAR_4 ) {
 colorRangeDef_t VAR_5;

 if (FUNC_1(VAR_4, &VAR_5.low) &&
  FUNC_1(VAR_4, &VAR_5.high) &&
  FUNC_0(VAR_4, &VAR_5.color) ) {
  if (VAR_3->numColors < VAR_0) {
   FUNC_2(&VAR_3->colorRanges[VAR_3->numColors], &VAR_5, sizeof(VAR_5));
   VAR_3->numColors++;
  }
  return VAR_2;
 }
 return VAR_1;
}
