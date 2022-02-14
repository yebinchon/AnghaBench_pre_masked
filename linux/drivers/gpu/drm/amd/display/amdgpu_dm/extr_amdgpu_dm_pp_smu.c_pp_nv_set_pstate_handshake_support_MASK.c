
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
struct pp_smu {struct dc_context* dm; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct amdgpu_device {struct smu_context smu; } ;
typedef enum pp_smu_status { ____Placeholder_pp_smu_status } pp_smu_status ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smu_context*,int) ;

enum pp_smu_status FUNC_1(
 struct pp_smu *VAR_2, BOOLEAN VAR_3)
{
 const struct dc_context *VAR_4 = VAR_2->dm;
 struct amdgpu_device *VAR_5 = VAR_4->driver_context;
 struct smu_context *VAR_6 = &VAR_5->smu;

 if (FUNC_0(VAR_6, !VAR_3))
  return VAR_0;

 return VAR_1;
}
