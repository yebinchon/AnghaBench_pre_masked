
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rv7xx_power_info {scalar_t__ mclk_strobe_mode_threshold; } ;
struct TYPE_2__ {scalar_t__ vram_type; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct rv7xx_power_info* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static u8 FUNC_3(struct amdgpu_device *VAR_2, u32 VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_0(VAR_2);
 bool VAR_5 = 0;
 u8 VAR_6 = 0;

 if (VAR_3 <= VAR_4->mclk_strobe_mode_threshold)
  VAR_5 = 1;

 if (VAR_2->gmc.vram_type == VAR_0)
  VAR_6 = FUNC_2(VAR_3, VAR_5);
 else
  VAR_6 = FUNC_1(VAR_3);

 if (VAR_5)
  VAR_6 |= VAR_1;

 return VAR_6;
}
