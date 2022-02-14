
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_power_info {int mpll_ref_div; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 struct rv6xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2)
{
 struct rv6xx_power_info *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2, VAR_0 *
    VAR_3->mpll_ref_div);
 FUNC_1(VAR_2, VAR_1);
}
