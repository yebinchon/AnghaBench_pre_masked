
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_3,
           u32 VAR_4)
{
 PPSMC_Result VAR_5 =
  FUNC_0(VAR_3, VAR_1, VAR_4);
 if (VAR_5 != VAR_2)
  return -VAR_0;
 return 0;
}
