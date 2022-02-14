
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum r600_power_level { ____Placeholder_r600_power_level } r600_power_level ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum r600_power_level FUNC_1(struct radeon_device *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0) & VAR_1;
 VAR_4 >>= VAR_2;
 return VAR_4;
}
