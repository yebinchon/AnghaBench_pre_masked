
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
typedef enum pp_smu_nv_clock_id { ____Placeholder_pp_smu_nv_clock_id } pp_smu_nv_clock_id ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct smu_context*,struct pp_display_clock_request*) ;

enum pp_smu_status FUNC_1(struct pp_smu *VAR_6,
  enum pp_smu_nv_clock_id VAR_7, int VAR_8)
{
 const struct dc_context *VAR_9 = VAR_6->dm;
 struct amdgpu_device *VAR_10 = VAR_9->driver_context;
 struct smu_context *VAR_11 = &VAR_10->smu;
 struct pp_display_clock_request VAR_12;

 if (!VAR_11->funcs)
  return VAR_2;

 switch (VAR_7) {
 case 130:
  VAR_12.clock_type = VAR_3;
  break;
 case 129:
  VAR_12.clock_type = VAR_4;
  break;
 case 128:
  VAR_12.clock_type = VAR_5;
  break;
 default:
  break;
 }
 VAR_12.clock_freq_in_khz = VAR_8 * 1000;




 if (FUNC_0(VAR_11, &VAR_12))
  return VAR_0;

 return VAR_1;
}
