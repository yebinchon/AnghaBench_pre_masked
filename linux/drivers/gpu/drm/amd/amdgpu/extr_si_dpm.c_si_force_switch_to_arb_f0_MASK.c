
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct si_power_info {int sram_end; int arb_table_start; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int,int) ;
 struct si_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_1)
{
 struct si_power_info *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2->arb_table_start,
         &VAR_3, VAR_2->sram_end);
 if (VAR_4)
  return VAR_4;

 VAR_3 = (VAR_3 >> 24) & 0xff;

 if (VAR_3 == VAR_0)
  return 0;

 return FUNC_1(VAR_1, VAR_3, VAR_0);
}
