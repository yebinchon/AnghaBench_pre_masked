
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; TYPE_1__* pdev; } ;
struct ci_power_info {int caps_power_containment; int caps_cac; int caps_sq_ramping; int caps_db_ramping; int caps_td_ramping; int caps_tcp_ramping; int enable_bapm_feature; int enable_tdc_limit_feature; int enable_pkg_pwr_tracking_feature; scalar_t__ dte_tj_offset; int * powertune_defaults; } ;
struct TYPE_2__ {int device; } ;


 scalar_t__ VAR_0 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_5->pdev->device) {
 case 0x6649:
 case 0x6650:
 case 0x6651:
 case 0x6658:
 case 0x665C:
 case 0x665D:
 default:
  VAR_6->powertune_defaults = &VAR_1;
  break;
 case 0x6640:
 case 0x6641:
 case 0x6646:
 case 0x6647:
  VAR_6->powertune_defaults = &VAR_4;
  break;
 case 0x67B8:
 case 0x67B0:
  VAR_6->powertune_defaults = &VAR_3;
  break;
 case 0x67BA:
 case 0x67B1:
  VAR_6->powertune_defaults = &VAR_2;
  break;
 case 0x67A0:
 case 0x67A1:
 case 0x67A2:
 case 0x67A8:
 case 0x67A9:
 case 0x67AA:
 case 0x67B9:
 case 0x67BE:
  VAR_6->powertune_defaults = &VAR_1;
  break;
 }

 VAR_6->dte_tj_offset = 0;

 VAR_6->caps_power_containment = 1;
 VAR_6->caps_cac = 0;
 VAR_6->caps_sq_ramping = 0;
 VAR_6->caps_db_ramping = 0;
 VAR_6->caps_td_ramping = 0;
 VAR_6->caps_tcp_ramping = 0;

 if (VAR_6->caps_power_containment) {
  VAR_6->caps_cac = 1;
  if (VAR_5->family == VAR_0)
   VAR_6->enable_bapm_feature = 0;
  else
   VAR_6->enable_bapm_feature = 1;
  VAR_6->enable_tdc_limit_feature = 1;
  VAR_6->enable_pkg_pwr_tracking_feature = 1;
 }
}
