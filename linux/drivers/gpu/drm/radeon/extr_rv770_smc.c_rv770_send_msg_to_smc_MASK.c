
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int usec_timeout; } ;
typedef scalar_t__ PPSMC_Result ;
typedef int PPSMC_Msg ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int) ;

PPSMC_Result FUNC_5(struct radeon_device *VAR_5, PPSMC_Msg VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 PPSMC_Result VAR_9;

 if (!FUNC_3(VAR_5))
  return VAR_3;

 FUNC_2(VAR_4, FUNC_0(VAR_6), ~VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_5->usec_timeout; VAR_8++) {
  VAR_7 = FUNC_1(VAR_4) & VAR_1;
  VAR_7 >>= VAR_2;
  if (VAR_7 != 0)
   break;
  FUNC_4(1);
 }

 VAR_7 = FUNC_1(VAR_4) & VAR_1;
 VAR_7 >>= VAR_2;

 VAR_9 = (PPSMC_Result)VAR_7;
 return VAR_9;
}
