
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * csr_m3_arb_cntl_fs3d; int * csr_m3_arb_cntl_uvd; int * csr_m3_arb_cntl_default; } ;
struct sumo_power_info {TYPE_1__ sys_info; int enable_dynamic_m3_arbiter; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct sumo_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_2)
{
 struct sumo_power_info *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 if (!VAR_3->enable_dynamic_m3_arbiter)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_0 + (VAR_4 * 4),
      VAR_3->sys_info.csr_m3_arb_cntl_default[VAR_4]);

 for (; VAR_4 < VAR_1 * 2; VAR_4++)
  FUNC_0(VAR_0 + (VAR_4 * 4),
      VAR_3->sys_info.csr_m3_arb_cntl_uvd[VAR_4 % VAR_1]);

 for (; VAR_4 < VAR_1 * 3; VAR_4++)
  FUNC_0(VAR_0 + (VAR_4 * 4),
      VAR_3->sys_info.csr_m3_arb_cntl_fs3d[VAR_4 % VAR_1]);
}
