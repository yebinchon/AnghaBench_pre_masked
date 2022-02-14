
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int fullScreen; } ;
typedef TYPE_1__ menuDef_t ;
typedef int itemDef_t ;


 int FUNC_0 (int,int*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( itemDef_t *VAR_2, int VAR_3 ) {
 menuDef_t *VAR_4 = (menuDef_t*)VAR_2;
 union
 {
  qboolean b;
  int i;
 } VAR_5;

 if (!FUNC_0(VAR_3, &VAR_5.i)) {
  return VAR_0;
 }
 VAR_4->fullScreen = VAR_5.b;
 return VAR_1;
}
