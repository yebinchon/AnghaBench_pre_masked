
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {TYPE_2__* fw; } ;
struct amdgpu_device {scalar_t__ asic_type; int has_hw_reset; TYPE_1__ pm; int dev; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (TYPE_2__**,char*,int ) ;

bool FUNC_5(struct amdgpu_device *VAR_2)
{
 uint32_t VAR_3;

 if (FUNC_3(VAR_2))
  return 0;

 if (FUNC_2(VAR_2)) {





  if (VAR_2->asic_type == VAR_1) {
   int VAR_4;
   uint32_t VAR_5;
   VAR_4 = FUNC_4(&VAR_2->pm.fw, "amdgpu/fiji_smc.bin", VAR_2->dev);

   if (VAR_4)
    return 1;

   VAR_5 = *((uint32_t *)VAR_2->pm.fw->data + 69);
   if (VAR_5 < 0x00160e00)
    return 1;
  }
 }

 if (VAR_2->has_hw_reset) {
  VAR_2->has_hw_reset = 0;
  return 1;
 }


 if (VAR_2->asic_type >= VAR_0)
  return FUNC_1(VAR_2);


 VAR_3 = FUNC_0(VAR_2);

 if ((VAR_3 != 0) && (VAR_3 != 0xffffffff))
  return 0;

 return 1;
}
