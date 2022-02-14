
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
typedef int PPSMC_Msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ) ;

int FUNC_1(struct radeon_device *VAR_4,
          bool VAR_5)
{
 PPSMC_Msg VAR_6 = VAR_5 ?
  (PPSMC_Msg)VAR_1 : (PPSMC_Msg)VAR_2;

 if (FUNC_0(VAR_4, VAR_6) != VAR_3)
  return -VAR_0;

 return 0;
}
