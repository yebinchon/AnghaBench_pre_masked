
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum r600_power_level { ____Placeholder_r600_power_level } r600_power_level ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int) ;

void FUNC_1(struct radeon_device *VAR_2,
        enum r600_power_level VAR_3, bool VAR_4)
{
 u32 VAR_5 = 3 - (3 & VAR_3);
 u32 VAR_6 = 0;

 if (VAR_4)
  VAR_6 = VAR_0;
 FUNC_0(VAR_1 + (VAR_5 * 4), VAR_6, ~VAR_0);
}
