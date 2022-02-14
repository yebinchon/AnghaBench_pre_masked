
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int usec_timeout; } ;
typedef int PPSMC_Result ;
typedef int PPSMC_Msg ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static PPSMC_Result FUNC_4(struct radeon_device *VAR_3, PPSMC_Msg VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_3))
  return VAR_0;

 FUNC_1(VAR_1, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_3->usec_timeout; VAR_6++) {
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5 != 0)
   break;
  FUNC_3(1);
 }
 VAR_5 = FUNC_0(VAR_2);

 return (PPSMC_Result)VAR_5;
}
