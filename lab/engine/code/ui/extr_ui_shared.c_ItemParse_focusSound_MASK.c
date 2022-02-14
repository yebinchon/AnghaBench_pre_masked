
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int focusSound; } ;
typedef TYPE_1__ itemDef_t ;
struct TYPE_5__ {int (* registerSound ) (char const*,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ) ;

qboolean FUNC_2( itemDef_t *VAR_3, int VAR_4 ) {
 const char *VAR_5;
 if (!FUNC_0(VAR_4, &VAR_5)) {
  return VAR_1;
 }
 VAR_3->focusSound = VAR_0->registerSound(VAR_5, VAR_1);
 return VAR_2;
}
