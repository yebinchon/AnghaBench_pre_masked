
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ supported; } ;
struct evergreen_power_info {int bootup_arb_registers; TYPE_1__ ulv; } ;


 int FUNC_0 (struct radeon_device*,int *) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0)
{
 struct evergreen_power_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ulv.supported)
  FUNC_0(VAR_0, &VAR_1->bootup_arb_registers);
}
