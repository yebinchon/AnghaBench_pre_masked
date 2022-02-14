
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ) ;

void FUNC_3(struct radeon_device *VAR_8)
{
 PPSMC_Result VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_4);

 if (VAR_9 != VAR_5)
  FUNC_0("Could not force DPM to low.\n");

 FUNC_1(VAR_0, 0, ~VAR_1);

 FUNC_1(VAR_6, VAR_7, ~VAR_7);

 FUNC_1(VAR_2, VAR_3, ~VAR_3);
}
