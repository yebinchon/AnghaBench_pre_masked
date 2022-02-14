
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; } ;
struct TYPE_9__ {int count; } ;
struct TYPE_8__ {TYPE_4__ pcie_speed_table; } ;
struct TYPE_7__ {int max; int min; } ;
struct TYPE_6__ {int max; int min; } ;
struct ci_power_info {TYPE_3__ dpm_table; TYPE_2__ pcie_lane_performance; TYPE_1__ pcie_gen_performance; TYPE_2__ pcie_lane_powersaving; TYPE_1__ pcie_gen_powersaving; scalar_t__ use_pcie_powersaving_levels; scalar_t__ use_pcie_performance_levels; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4->use_pcie_performance_levels && !VAR_4->use_pcie_powersaving_levels)
  return -VAR_1;

 if (VAR_4->use_pcie_performance_levels && !VAR_4->use_pcie_powersaving_levels) {
  VAR_4->pcie_gen_powersaving = VAR_4->pcie_gen_performance;
  VAR_4->pcie_lane_powersaving = VAR_4->pcie_lane_performance;
 } else if (!VAR_4->use_pcie_performance_levels && VAR_4->use_pcie_powersaving_levels) {
  VAR_4->pcie_gen_performance = VAR_4->pcie_gen_powersaving;
  VAR_4->pcie_lane_performance = VAR_4->pcie_lane_powersaving;
 }

 FUNC_1(VAR_3,
      &VAR_4->dpm_table.pcie_speed_table,
      VAR_2);

 if (VAR_3->family == VAR_0)
  FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 0,
       VAR_4->pcie_gen_powersaving.min,
       VAR_4->pcie_lane_powersaving.max);
 else
  FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 0,
       VAR_4->pcie_gen_powersaving.min,
       VAR_4->pcie_lane_powersaving.min);
 FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 1,
      VAR_4->pcie_gen_performance.min,
      VAR_4->pcie_lane_performance.min);
 FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 2,
      VAR_4->pcie_gen_powersaving.min,
      VAR_4->pcie_lane_powersaving.max);
 FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 3,
      VAR_4->pcie_gen_performance.min,
      VAR_4->pcie_lane_performance.max);
 FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 4,
      VAR_4->pcie_gen_powersaving.max,
      VAR_4->pcie_lane_powersaving.max);
 FUNC_2(&VAR_4->dpm_table.pcie_speed_table, 5,
      VAR_4->pcie_gen_performance.max,
      VAR_4->pcie_lane_performance.max);

 VAR_4->dpm_table.pcie_speed_table.count = 6;

 return 0;
}
