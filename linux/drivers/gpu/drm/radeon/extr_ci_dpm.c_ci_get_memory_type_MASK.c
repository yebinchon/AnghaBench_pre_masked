
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {int mem_gddr5; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4)
{
 struct ci_power_info *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_0);

 if (((VAR_6 & VAR_1) >> VAR_2) ==
     VAR_3)
  VAR_5->mem_gddr5 = 1;
 else
  VAR_5->mem_gddr5 = 0;

}
