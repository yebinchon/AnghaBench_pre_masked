
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trinity_power_info {int min_sclk_did; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3)
{
 struct trinity_power_info *VAR_4 = FUNC_1(VAR_3);

 VAR_4->min_sclk_did =
  (FUNC_0(VAR_0) & VAR_1) >> VAR_2;
}
