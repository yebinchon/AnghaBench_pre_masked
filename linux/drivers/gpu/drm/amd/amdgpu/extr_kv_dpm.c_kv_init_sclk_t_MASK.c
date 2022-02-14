
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_power_info {scalar_t__ low_sclk_interrupt_t; } ;
struct amdgpu_device {int dummy; } ;


 struct kv_power_info* FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 struct kv_power_info *VAR_1 = FUNC_0(VAR_0);

 VAR_1->low_sclk_interrupt_t = 0;
}
