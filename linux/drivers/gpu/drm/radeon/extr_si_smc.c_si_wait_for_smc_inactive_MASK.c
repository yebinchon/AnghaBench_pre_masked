
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int usec_timeout; } ;
typedef int PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int) ;

PPSMC_Result FUNC_3(struct radeon_device *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_3))
  return VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  VAR_4 = FUNC_0(VAR_2);
  if ((VAR_4 & VAR_0) == 0)
   break;
  FUNC_2(1);
 }

 return VAR_1;
}
