
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct pp_atomfwctrl_clock_dividers_soc15 {int ucPll_ss_enable; int usPll_ss_slew_frac; void* ulPll_ss_fbsmult; void* ulPll_fb_mult; void* ulDid; void* ulClock; } ;
struct compute_gpu_clock_output_parameter_v1_8 {int pll_ss_enable; int pll_ss_slew_frac; int pll_ss_fbsmult; int pll_fb_mult; int dfs_did; int gpuclock_10khz; } ;
struct compute_gpu_clock_input_parameter_v1_8 {void* gpu_clock_type; void* gpuclock_10khz; } ;
struct TYPE_2__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*,void**) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

int FUNC_4(struct pp_hwmgr *VAR_2,
  uint32_t VAR_3, uint32_t VAR_4,
  struct pp_atomfwctrl_clock_dividers_soc15 *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_2->adev;
 struct compute_gpu_clock_input_parameter_v1_8 VAR_7;
 struct compute_gpu_clock_output_parameter_v1_8 *VAR_8;
 uint32_t VAR_9;

 VAR_7.gpuclock_10khz = (uint32_t)VAR_4;
 VAR_7.gpu_clock_type = VAR_3;

 VAR_9 = FUNC_0(VAR_1);

 if (FUNC_1(
  VAR_6->mode_info.atom_context, VAR_9, (uint32_t *)&VAR_7))
  return -VAR_0;

 VAR_8 = (struct compute_gpu_clock_output_parameter_v1_8 *)
   &VAR_7;
 VAR_5->ulClock = FUNC_3(VAR_8->gpuclock_10khz);
 VAR_5->ulDid = FUNC_3(VAR_8->dfs_did);
 VAR_5->ulPll_fb_mult = FUNC_3(VAR_8->pll_fb_mult);
 VAR_5->ulPll_ss_fbsmult = FUNC_3(VAR_8->pll_ss_fbsmult);
 VAR_5->usPll_ss_slew_frac = FUNC_2(VAR_8->pll_ss_slew_frac);
 VAR_5->ucPll_ss_enable = VAR_8->pll_ss_enable;

 return 0;
}
