
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si_power_info {int dummy; } ;
struct TYPE_3__ {struct si_power_info* priv; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;



__attribute__((used)) static struct si_power_info *FUNC_0(struct amdgpu_device *VAR_0)
{
 struct si_power_info *VAR_1 = VAR_0->pm.dpm.priv;
 return VAR_1;
}
