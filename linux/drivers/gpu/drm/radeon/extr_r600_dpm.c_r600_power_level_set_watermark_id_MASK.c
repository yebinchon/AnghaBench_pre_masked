
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum r600_power_level { ____Placeholder_r600_power_level } r600_power_level ;
typedef enum r600_display_watermark { ____Placeholder_r600_display_watermark } r600_display_watermark ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int) ;

void FUNC_1(struct radeon_device *VAR_3,
           enum r600_power_level VAR_4,
           enum r600_display_watermark VAR_5)
{
 u32 VAR_6 = 3 - (3 & VAR_4);
 u32 VAR_7 = 0;

 if (VAR_5 == VAR_2)
  VAR_7 = VAR_0;
 FUNC_0(VAR_1 + (VAR_6 * 4), VAR_7, ~VAR_0);
}
