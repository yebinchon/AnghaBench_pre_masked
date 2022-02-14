
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;
typedef int PPSMC_Msg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static PPSMC_Result FUNC_2(struct radeon_device *VAR_2,
       PPSMC_Msg VAR_3, u32 *VAR_4)
{
 PPSMC_Result VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 if ((VAR_5 == VAR_0) && VAR_4)
  *VAR_4 = FUNC_0(VAR_1);

 return VAR_5;
}
