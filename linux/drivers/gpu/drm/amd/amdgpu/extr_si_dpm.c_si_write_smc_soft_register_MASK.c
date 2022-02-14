
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct si_power_info {int sram_end; scalar_t__ soft_regs_start; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,scalar_t__,int ,int ) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
          u16 VAR_1, u32 VAR_2)
{
 struct si_power_info *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0,
           VAR_3->soft_regs_start + VAR_1,
           VAR_2, VAR_3->sram_end);
}
