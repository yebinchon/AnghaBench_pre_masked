
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum r600_power_level { ____Placeholder_r600_power_level } r600_power_level ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;

void FUNC_2(struct radeon_device *VAR_2,
        enum r600_power_level VAR_3, u64 VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7 = 3 - (3 & VAR_3);

 FUNC_1(VAR_0 + (VAR_7 * 4), VAR_4 & 0xffffffff);

 VAR_6 = 7 << (3 * VAR_7);
 VAR_5 = FUNC_0(VAR_1);
 VAR_5 = (VAR_5 & ~VAR_6) | ((VAR_4 >> (32 - (3 * VAR_7))) & VAR_6);
 FUNC_1(VAR_1, VAR_5);
}
