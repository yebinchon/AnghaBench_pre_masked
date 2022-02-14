
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode_config_initialized; int bios_hardcoded_edid; } ;
struct radeon_device {TYPE_1__ mode_info; int ddev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;

void FUNC_8(struct radeon_device *VAR_0)
{
 if (VAR_0->mode_info.mode_config_initialized) {
  FUNC_1(VAR_0->ddev);
  FUNC_6(VAR_0);
  FUNC_0(VAR_0->ddev);
  FUNC_5(VAR_0);
  FUNC_4(VAR_0);
  FUNC_2(VAR_0->ddev);
  VAR_0->mode_info.mode_config_initialized = 0;
 }

 FUNC_3(VAR_0->mode_info.bios_hardcoded_edid);


 FUNC_7(VAR_0);
}
