
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ pp_funcs; } ;
struct TYPE_3__ {int default_sclk; } ;
struct amdgpu_device {TYPE_2__ powerplay; TYPE_1__ clock; } ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;

uint32_t FUNC_2(struct kgd_dev *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;


 if (FUNC_1(VAR_1))
  return VAR_1->clock.default_sclk / 100;
 else if (VAR_1->powerplay.pp_funcs)
  return FUNC_0(VAR_1, 0) / 100;
 else
  return 100;
}
