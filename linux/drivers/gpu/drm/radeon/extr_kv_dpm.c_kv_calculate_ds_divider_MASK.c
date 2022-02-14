
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {scalar_t__ lowest_valid; scalar_t__ highest_valid; TYPE_1__* graphics_level; } ;
struct TYPE_2__ {int SclkFrequency; int DeepSleepDivId; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct kv_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ,size_t) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = 10000;
 u32 VAR_4;

 if (VAR_2->lowest_valid > VAR_2->highest_valid)
  return -VAR_0;

 for (VAR_4 = VAR_2->lowest_valid; VAR_4 <= VAR_2->highest_valid; VAR_4++) {
  VAR_2->graphics_level[VAR_4].DeepSleepDivId =
   FUNC_2(VAR_1,
          FUNC_0(VAR_2->graphics_level[VAR_4].SclkFrequency),
          VAR_3);
 }
 return 0;
}
