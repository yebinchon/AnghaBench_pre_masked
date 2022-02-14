
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int vid_mapping_table; } ;
struct trinity_power_info {TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct radeon_device*,int *,scalar_t__) ;
 struct trinity_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static u16 FUNC_3(struct radeon_device *VAR_2,
        u32 VAR_3)
{
 struct trinity_power_info *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5 = FUNC_1(VAR_2, &VAR_4->sys_info.vid_mapping_table, VAR_3);
 u32 VAR_6 = (FUNC_0(VAR_0) & VAR_1) ? 1 : 0;
 u32 VAR_7 = (VAR_6 == 0) ? 1250 : 625;
 u32 VAR_8 = VAR_5 * VAR_7 + 50;

 if (VAR_8 > 155000)
  return 0;

 return (155000 - VAR_8) / 100;
}
