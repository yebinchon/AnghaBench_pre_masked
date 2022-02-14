
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numareas; TYPE_1__* areasettings; int loaded; } ;
struct TYPE_5__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_4__ {int presencetype; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(int VAR_3)
{
 if (!VAR_1.loaded) return 0;
 if (VAR_3 <= 0 || VAR_3 >= VAR_1.numareas)
 {
  VAR_2.Print(VAR_0, "AAS_AreaPresenceType: invalid area number\n");
  return 0;
 }
 return VAR_1.areasettings[VAR_3].presencetype;
}
