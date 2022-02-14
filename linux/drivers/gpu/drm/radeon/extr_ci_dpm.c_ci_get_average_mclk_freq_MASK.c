
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,scalar_t__*) ;

__attribute__((used)) static u32 FUNC_1(struct radeon_device *VAR_2)
{
 u32 VAR_3;
 PPSMC_Result VAR_4 =
  FUNC_0(VAR_2,
          VAR_0,
          &VAR_3);
 if (VAR_4 != VAR_1)
  VAR_3 = 0;

 return VAR_3;
}
