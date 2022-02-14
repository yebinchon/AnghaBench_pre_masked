
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int font; } ;
typedef TYPE_2__ menuDef_t ;
typedef int itemDef_t ;
struct TYPE_4__ {scalar_t__ fontRegistered; int textFont; } ;
struct TYPE_6__ {TYPE_1__ Assets; int (* registerFont ) (int ,int,int *) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int *) ;

qboolean FUNC_2( itemDef_t *VAR_3, int VAR_4 ) {
 menuDef_t *VAR_5 = (menuDef_t*)VAR_3;
 if (!FUNC_0(VAR_4, &VAR_5->font)) {
  return VAR_1;
 }
 if (!VAR_0->Assets.fontRegistered) {
  VAR_0->registerFont(VAR_5->font, 48, &VAR_0->Assets.textFont);
  VAR_0->Assets.fontRegistered = VAR_2;
 }
 return VAR_2;
}
