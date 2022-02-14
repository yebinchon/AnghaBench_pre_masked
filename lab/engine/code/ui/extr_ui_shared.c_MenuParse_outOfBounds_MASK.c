
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
typedef int itemDef_t ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0( itemDef_t *VAR_2, int VAR_3 ) {
 menuDef_t *VAR_4 = (menuDef_t*)VAR_2;

 VAR_4->window.flags |= VAR_0;
 return VAR_1;
}
