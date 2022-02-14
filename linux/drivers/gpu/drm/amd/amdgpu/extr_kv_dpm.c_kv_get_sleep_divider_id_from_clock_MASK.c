
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct kv_power_info {int caps_sclk_ds; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kv_power_info* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u8 FUNC_2(struct amdgpu_device *VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8 = FUNC_1(VAR_4, (u32)VAR_1);

 if (VAR_3 < VAR_8)
  return 0;

 if (!VAR_5->caps_sclk_ds)
  return 0;

 for (VAR_6 = VAR_0; VAR_6 > 0; VAR_6--) {
  VAR_7 = VAR_3 >> VAR_6;
  if (VAR_7 >= VAR_8)
   break;
 }

 return (u8)VAR_6;
}
