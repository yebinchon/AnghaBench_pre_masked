
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int funcs; } ;
struct pp_smu {struct dc_context* dm; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct amdgpu_device {struct smu_context smu; } ;
typedef enum pp_smu_status { ____Placeholder_pp_smu_status } pp_smu_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct smu_context*,int) ;

enum pp_smu_status FUNC_1(struct pp_smu *VAR_3, int VAR_4)
{
 const struct dc_context *VAR_5 = VAR_3->dm;
 struct amdgpu_device *VAR_6 = VAR_5->driver_context;
 struct smu_context *VAR_7 = &VAR_6->smu;

 if (!VAR_7->funcs)
  return VAR_2;


 if (FUNC_0(VAR_7, VAR_4))
  return VAR_0;

 return VAR_1;
}
