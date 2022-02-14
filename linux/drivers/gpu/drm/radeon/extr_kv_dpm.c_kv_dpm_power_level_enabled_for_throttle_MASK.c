
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {TYPE_1__* graphics_level; } ;
struct TYPE_2__ {int EnabledForThrottle; } ;


 struct kv_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
          u32 VAR_1, bool VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_0(VAR_0);

 VAR_3->graphics_level[VAR_1].EnabledForThrottle = VAR_2 ? 1 : 0;
}
