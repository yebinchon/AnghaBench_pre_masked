
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {TYPE_1__* ppt_funcs; } ;
struct pp_smu {struct dc_context* dm; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct amdgpu_device {struct smu_context smu; } ;
typedef enum pp_smu_status { ____Placeholder_pp_smu_status } pp_smu_status ;
struct TYPE_2__ {int (* get_uclk_dpm_states ) (struct smu_context*,unsigned int*,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,unsigned int*,unsigned int*) ;

enum pp_smu_status FUNC_1(struct pp_smu *VAR_3,
  unsigned int *VAR_4, unsigned int *VAR_5)
{
 const struct dc_context *VAR_6 = VAR_3->dm;
 struct amdgpu_device *VAR_7 = VAR_6->driver_context;
 struct smu_context *VAR_8 = &VAR_7->smu;

 if (!VAR_8->ppt_funcs)
  return VAR_2;

 if (!VAR_8->ppt_funcs->get_uclk_dpm_states)
  return VAR_2;

 if (!VAR_8->ppt_funcs->get_uclk_dpm_states(VAR_8,
   VAR_4, VAR_5))
  return VAR_1;

 return VAR_0;
}
