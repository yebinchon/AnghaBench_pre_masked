
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdgpu_device {unsigned int* df_perfmon_config_assign_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_2,
       uint64_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 if (VAR_5 >= 0)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->df_perfmon_config_assign_mask[VAR_4] == 0U) {
   VAR_2->df_perfmon_config_assign_mask[VAR_4] =
       VAR_3 & 0x0FFFFFFUL;
   return 0;
  }
 }

 return -VAR_1;
}
