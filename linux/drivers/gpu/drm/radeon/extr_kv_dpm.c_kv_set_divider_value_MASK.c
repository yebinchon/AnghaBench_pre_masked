
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {TYPE_1__* graphics_level; } ;
struct atom_clock_dividers {scalar_t__ post_div; } ;
struct TYPE_2__ {int SclkFrequency; scalar_t__ SclkDid; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 struct kv_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ,size_t,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 struct kv_power_info *VAR_4 = FUNC_1(VAR_1);
 struct atom_clock_dividers VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_0,
          VAR_3, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->graphics_level[VAR_2].SclkDid = (u8)VAR_5.post_div;
 VAR_4->graphics_level[VAR_2].SclkFrequency = FUNC_0(VAR_3);

 return 0;
}
