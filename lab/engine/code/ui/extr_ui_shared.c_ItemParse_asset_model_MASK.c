
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int angle; } ;
typedef TYPE_1__ modelDef_t ;
struct TYPE_7__ {int asset; scalar_t__ typeData; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_8__ {int (* registerModel ) (char const*) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;

qboolean FUNC_4( itemDef_t *VAR_3, int VAR_4 ) {
 const char *VAR_5;
 modelDef_t *VAR_6;
 FUNC_0(VAR_3);
 VAR_6 = (modelDef_t*)VAR_3->typeData;

 if (!FUNC_1(VAR_4, &VAR_5)) {
  return VAR_1;
 }
 VAR_3->asset = VAR_0->registerModel(VAR_5);
 VAR_6->angle = FUNC_2() % 360;
 return VAR_2;
}
