
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kv_power_info {int sram_end; int graphics_dpm_level_count; scalar_t__ dpm_table_start; int graphics_level; } ;
struct amdgpu_device {int dummy; } ;
typedef int SMU7_Fusion_GraphicsLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int *,int,int ) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4,
       VAR_5->dpm_table_start +
       FUNC_2(VAR_2, VAR_1),
       (u8 *)&VAR_5->graphics_level,
       sizeof(SMU7_Fusion_GraphicsLevel) * VAR_3,
       VAR_5->sram_end);

 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4,
       VAR_5->dpm_table_start +
       FUNC_2(VAR_2, VAR_0),
       &VAR_5->graphics_dpm_level_count,
       sizeof(u8), VAR_5->sram_end);

 return VAR_6;
}
