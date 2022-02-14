
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {scalar_t__ lowest_valid; scalar_t__ highest_valid; TYPE_1__* graphics_level; } ;
struct TYPE_2__ {int DisplayWatermark; } ;


 int VAR_0 ;
 struct kv_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 if (VAR_2->lowest_valid > VAR_2->highest_valid)
  return -VAR_0;

 for (VAR_3 = VAR_2->lowest_valid; VAR_3 <= VAR_2->highest_valid; VAR_3++)
  VAR_2->graphics_level[VAR_3].DisplayWatermark = (VAR_3 == VAR_2->highest_valid) ? 1 : 0;

 return 0;
}
