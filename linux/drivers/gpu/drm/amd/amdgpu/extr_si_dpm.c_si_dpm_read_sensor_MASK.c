
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u32 ;
struct si_ps {size_t performance_level_count; TYPE_1__* performance_levels; } ;
struct amdgpu_ps {int dummy; } ;
struct evergreen_power_info {struct amdgpu_ps current_rps; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int mclk; int sclk; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int VAR_3 ;
 struct evergreen_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 struct si_ps* FUNC_3 (struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, int VAR_5,
         void *VAR_6, int *VAR_7)
{
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_4;
 struct evergreen_power_info *VAR_9 = FUNC_1(VAR_8);
 struct amdgpu_ps *VAR_10 = &VAR_9->current_rps;
 struct si_ps *VAR_11 = FUNC_3(VAR_10);
 uint32_t VAR_12, VAR_13;
 u32 VAR_14 =
  (FUNC_0(VAR_3) & VAR_0) >>
  VAR_1;


 if (*VAR_7 < 4)
  return -VAR_2;

 switch (VAR_5) {
 case 129:
  if (VAR_14 < VAR_11->performance_level_count) {
   VAR_12 = VAR_11->performance_levels[VAR_14].sclk;
   *((uint32_t *)VAR_6) = VAR_12;
   *VAR_7 = 4;
   return 0;
  }
  return -VAR_2;
 case 130:
  if (VAR_14 < VAR_11->performance_level_count) {
   VAR_13 = VAR_11->performance_levels[VAR_14].mclk;
   *((uint32_t *)VAR_6) = VAR_13;
   *VAR_7 = 4;
   return 0;
  }
  return -VAR_2;
 case 128:
  *((uint32_t *)VAR_6) = FUNC_2(VAR_8);
  *VAR_7 = 4;
  return 0;
 default:
  return -VAR_2;
 }
}
