
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {TYPE_1__* graphics_level; } ;
struct TYPE_2__ {int SclkFrequency; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int ) ;
 struct kv_power_info* FUNC_2 (struct radeon_device*) ;

u32 FUNC_3(struct radeon_device *VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 =
  (FUNC_0(VAR_3) & VAR_0) >>
  VAR_1;
 u32 VAR_7;

 if (VAR_6 >= VAR_2) {
  return 0;
 } else {
  VAR_7 = FUNC_1(VAR_5->graphics_level[VAR_6].SclkFrequency);
  return VAR_7;
 }
}
