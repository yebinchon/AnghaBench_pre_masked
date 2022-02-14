
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vid_mapping_table; } ;
struct trinity_power_info {TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct radeon_device*,int *,int) ;
 struct trinity_power_info* FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct trinity_power_info *VAR_7 = FUNC_5(VAR_4);
 u32 VAR_8 = FUNC_4(VAR_4, &VAR_7->sys_info.vid_mapping_table, VAR_6);
 u32 VAR_9;
 u32 VAR_10 = VAR_5 * VAR_2;

 VAR_9 = FUNC_1(VAR_1 + VAR_10);
 VAR_9 &= ~VAR_3;
 VAR_9 |= FUNC_2(VAR_8);
 FUNC_3(VAR_1 + VAR_10, VAR_9);

 VAR_9 = FUNC_1(VAR_1 + VAR_10);
 VAR_9 &= ~VAR_0;
 VAR_9 |= FUNC_0(0);
 FUNC_3(VAR_1 + VAR_10, VAR_9);
}
