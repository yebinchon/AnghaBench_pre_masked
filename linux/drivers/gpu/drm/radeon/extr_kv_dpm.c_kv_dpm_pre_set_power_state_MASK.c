
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {struct radeon_ps* requested_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct kv_power_info {int current_rps; int requested_rps; } ;


 int FUNC_0 (struct radeon_device*,int *,int *) ;
 struct kv_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;

int FUNC_3(struct radeon_device *VAR_0)
{
 struct kv_power_info *VAR_1 = FUNC_1(VAR_0);
 struct radeon_ps VAR_2 = *VAR_0->pm.dpm.requested_ps;
 struct radeon_ps *VAR_3 = &VAR_2;

 FUNC_2(VAR_0, VAR_3);

 FUNC_0(VAR_0,
        &VAR_1->requested_rps,
        &VAR_1->current_rps);

 return 0;
}
