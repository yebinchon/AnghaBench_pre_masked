
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {TYPE_1__* areasettings; int loaded; } ;
struct TYPE_3__ {int presencetype; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_1(vec3_t VAR_2)
{
 int VAR_3;

 if (!VAR_1.loaded) return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) return VAR_0;
 return VAR_1.areasettings[VAR_3].presencetype;
}
