
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct si_ulv_param {scalar_t__ one_pcie_lane_in_ulv; int pl; } ;
struct si_power_info {struct si_ulv_param ulv; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ sclk_deep_sleep; } ;
struct TYPE_5__ {int ACIndex; int vddc; int std_vddc; scalar_t__ arbRefreshState; int stateFlags; } ;
struct TYPE_4__ {int levelCount; int flags; TYPE_3__* levels; } ;
typedef TYPE_1__ SISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int *,TYPE_3__*) ;
 struct si_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_6,
     SISLANDS_SMC_SWSTATE *VAR_7)
{
 struct evergreen_power_info *VAR_8 = FUNC_0(VAR_6);
 struct si_power_info *VAR_9 = FUNC_2(VAR_6);
 struct si_ulv_param *VAR_10 = &VAR_9->ulv;
 u32 VAR_11 = 1350;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_6, &VAR_10->pl,
         &VAR_7->levels[0]);
 if (!VAR_12) {
  if (VAR_8->sclk_deep_sleep) {
   if (VAR_11 <= VAR_4)
    VAR_7->levels[0].stateFlags |= VAR_0;
   else
    VAR_7->levels[0].stateFlags |= VAR_1;
  }
  if (VAR_10->one_pcie_lane_in_ulv)
   VAR_7->flags |= VAR_3;
  VAR_7->levels[0].arbRefreshState = (u8)(VAR_5);
  VAR_7->levels[0].ACIndex = 1;
  VAR_7->levels[0].std_vddc = VAR_7->levels[0].vddc;
  VAR_7->levelCount = 1;

  VAR_7->flags |= VAR_2;
 }

 return VAR_12;
}
