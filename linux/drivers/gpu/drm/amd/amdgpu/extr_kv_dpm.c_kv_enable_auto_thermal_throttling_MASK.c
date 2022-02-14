
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kv_power_info {int graphics_therm_throttle_enable; int sram_end; scalar_t__ dpm_table_start; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int*,int,int ) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_3->graphics_therm_throttle_enable = 1;

 VAR_4 = FUNC_0(VAR_2,
       VAR_3->dpm_table_start +
       FUNC_2(VAR_1, VAR_0),
       &VAR_3->graphics_therm_throttle_enable,
       sizeof(u8), VAR_3->sram_end);

 return VAR_4;
}
