
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdgpu_device {unsigned long long* df_perfmon_config_assign_mask; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0,
         uint64_t VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 >= 0)
  VAR_0->df_perfmon_config_assign_mask[VAR_2] = 0ULL;
}
