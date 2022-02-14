
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {int cac_weights; int cac_override; int lcac_config; } ;
struct ni_power_info {int enable_cac; int cac_configuration_required; } ;
struct amdgpu_device {int dummy; } ;


 struct ni_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0)
{
 struct ni_power_info *VAR_1 = FUNC_0(VAR_0);
 struct si_power_info *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if ((VAR_1->enable_cac == 0) ||
     (VAR_1->cac_configuration_required == 0))
  return 0;

 VAR_3 = FUNC_2(VAR_0, VAR_2->lcac_config);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_2->cac_override);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_2->cac_weights);
 if (VAR_3)
  return VAR_3;

 return 0;
}
