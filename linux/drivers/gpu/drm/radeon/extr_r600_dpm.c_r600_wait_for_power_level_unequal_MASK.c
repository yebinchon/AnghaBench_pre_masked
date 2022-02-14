
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;
typedef enum r600_power_level { ____Placeholder_r600_power_level } r600_power_level ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_0,
           enum r600_power_level VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->usec_timeout; VAR_2++) {
  if (FUNC_1(VAR_0) != VAR_1)
   break;
  FUNC_2(1);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->usec_timeout; VAR_2++) {
  if (FUNC_0(VAR_0) != VAR_1)
   break;
  FUNC_2(1);
 }
}
