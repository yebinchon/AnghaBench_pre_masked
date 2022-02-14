
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {float* disableColor; } ;
typedef TYPE_1__ menuDef_t ;
typedef int itemDef_t ;


 int FUNC_0 (int,float*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( itemDef_t *VAR_2, int VAR_3 ) {
 int VAR_4;
 float VAR_5;
 menuDef_t *VAR_6 = (menuDef_t*)VAR_2;
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (!FUNC_0(VAR_3, &VAR_5)) {
   return VAR_0;
  }
  VAR_6->disableColor[VAR_4] = VAR_5;
 }
 return VAR_1;
}
