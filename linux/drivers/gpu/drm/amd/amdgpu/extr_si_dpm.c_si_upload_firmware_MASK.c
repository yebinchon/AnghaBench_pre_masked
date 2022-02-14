
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {int sram_end; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 struct si_power_info* FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_0)
{
 struct si_power_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0);

 return FUNC_0(VAR_0, VAR_1->sram_end);
}
