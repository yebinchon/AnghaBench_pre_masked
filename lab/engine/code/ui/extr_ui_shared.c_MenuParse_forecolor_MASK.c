
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {float* foreColor; int flags; } ;
struct TYPE_4__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
typedef int itemDef_t ;


 int FUNC_0 (int,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( itemDef_t *VAR_3, int VAR_4 ) {
 int VAR_5;
 float VAR_6;
 menuDef_t *VAR_7 = (menuDef_t*)VAR_3;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (!FUNC_0(VAR_4, &VAR_6)) {
   return VAR_1;
  }
  VAR_7->window.foreColor[VAR_5] = VAR_6;
  VAR_7->window.flags |= VAR_0;
 }
 return VAR_2;
}
