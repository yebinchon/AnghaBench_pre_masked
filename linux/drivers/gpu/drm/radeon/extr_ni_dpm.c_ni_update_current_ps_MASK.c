
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {struct ni_ps* ps_priv; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int dummy; } ;
struct ni_power_info {struct ni_ps current_ps; } ;
struct evergreen_power_info {struct radeon_ps current_rps; } ;


 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 struct ni_power_info* FUNC_1 (struct radeon_device*) ;
 struct ni_ps* FUNC_2 (struct radeon_ps*) ;

void FUNC_3(struct radeon_device *VAR_0,
     struct radeon_ps *VAR_1)
{
 struct ni_ps *VAR_2 = FUNC_2(VAR_1);
 struct evergreen_power_info *VAR_3 = FUNC_0(VAR_0);
 struct ni_power_info *VAR_4 = FUNC_1(VAR_0);

 VAR_3->current_rps = *VAR_1;
 VAR_4->current_ps = *VAR_2;
 VAR_3->current_rps.ps_priv = &VAR_4->current_ps;
}
