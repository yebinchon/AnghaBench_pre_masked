
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int funcs; } ;
struct pp_smu {struct dc_context* dm; } ;
struct pp_display_clock_request {int clock_freq_in_khz; int clock_type; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct amdgpu_device {struct smu_context smu; } ;
typedef enum pp_smu_status { ____Placeholder_pp_smu_status } pp_smu_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct smu_context*,struct pp_display_clock_request*) ;

enum pp_smu_status FUNC_1(struct pp_smu *VAR_4, int VAR_5)
{
 const struct dc_context *VAR_6 = VAR_4->dm;
 struct amdgpu_device *VAR_7 = VAR_6->driver_context;
 struct smu_context *VAR_8 = &VAR_7->smu;
 struct pp_display_clock_request VAR_9;

 if (!VAR_8->funcs)
  return VAR_2;

 VAR_9.clock_type = VAR_3;
 VAR_9.clock_freq_in_khz = VAR_5 * 1000;




 if (FUNC_0(VAR_8, &VAR_9))
  return VAR_0;

 return VAR_1;
}
