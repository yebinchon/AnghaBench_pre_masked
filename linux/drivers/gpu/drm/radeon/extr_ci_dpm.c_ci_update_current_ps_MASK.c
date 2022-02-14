
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {struct ci_ps* ps_priv; } ;
struct radeon_device {int dummy; } ;
struct ci_ps {int dummy; } ;
struct ci_power_info {struct ci_ps current_ps; struct radeon_ps current_rps; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 struct ci_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
     struct radeon_ps *VAR_1)
{
 struct ci_ps *VAR_2 = FUNC_1(VAR_1);
 struct ci_power_info *VAR_3 = FUNC_0(VAR_0);

 VAR_3->current_rps = *VAR_1;
 VAR_3->current_ps = *VAR_2;
 VAR_3->current_rps.ps_priv = &VAR_3->current_ps;
}
