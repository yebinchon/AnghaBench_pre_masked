
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {scalar_t__ chip_id; TYPE_1__ platform_descriptor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct pp_hwmgr *VAR_10)
{
 FUNC_0(VAR_10->platform_descriptor.platformCaps,
      VAR_4);
 FUNC_0(VAR_10->platform_descriptor.platformCaps,
      VAR_7);
 FUNC_0(VAR_10->platform_descriptor.platformCaps,
      VAR_5);

 FUNC_0(VAR_10->platform_descriptor.platformCaps,
     VAR_2);

 if (VAR_10->chip_id != VAR_0)
  FUNC_0(VAR_10->platform_descriptor.platformCaps,
     VAR_6);

 if (VAR_10->chip_id != VAR_1) {
  FUNC_0(VAR_10->platform_descriptor.platformCaps,
       VAR_3);
  FUNC_0(VAR_10->platform_descriptor.platformCaps,
       VAR_9);
  FUNC_0(VAR_10->platform_descriptor.platformCaps,
       VAR_8);
 }
 return 0;
}
