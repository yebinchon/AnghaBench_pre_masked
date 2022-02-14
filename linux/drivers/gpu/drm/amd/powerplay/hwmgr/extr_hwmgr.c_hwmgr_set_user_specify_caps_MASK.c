
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {int feature_mask; int od_enabled; TYPE_1__ platform_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_6)
{
 if (VAR_6->feature_mask & VAR_5)
  FUNC_0(VAR_6->platform_descriptor.platformCaps,
   VAR_2);
 else
  FUNC_1(VAR_6->platform_descriptor.platformCaps,
   VAR_2);

 if (VAR_6->feature_mask & VAR_4) {
  FUNC_0(VAR_6->platform_descriptor.platformCaps,
       VAR_1);
  FUNC_0(VAR_6->platform_descriptor.platformCaps,
   VAR_0);
 } else {
  FUNC_1(VAR_6->platform_descriptor.platformCaps,
       VAR_1);
  FUNC_1(VAR_6->platform_descriptor.platformCaps,
   VAR_0);
 }

 if (VAR_6->feature_mask & VAR_3)
  VAR_6->od_enabled = 1;

 return 0;
}
