
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int vid_mapping_table; } ;
struct sumo_power_info {TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int *,int) ;
 struct sumo_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static u16 FUNC_2(struct radeon_device *VAR_0,
            u32 VAR_1)
{
 struct sumo_power_info *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = FUNC_0(VAR_0, &VAR_2->sys_info.vid_mapping_table, VAR_1);

 if (VAR_3 > 0x7C)
  return 0;

 return (15500 - VAR_3 * 125 + 5) / 10;
}
