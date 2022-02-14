
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_8__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_10__ {void* ul_fb_div; void* ul_fb_div_frac; } ;
struct TYPE_12__ {int uc_pll_cntl_flag; int uc_pll_post_div; int uc_pll_ref_div; TYPE_3__ ul_fb_div; int real_clock; int pll_post_divider; } ;
typedef TYPE_5__ pp_atomctrl_clock_dividers_vi ;
struct TYPE_11__ {int usFbDiv; int usFbDivFrac; } ;
struct TYPE_9__ {int ulClock; int ucPostDiv; } ;
struct TYPE_13__ {int ucPllCntlFlag; int ucPllPostDiv; int ucPllRefDiv; TYPE_4__ ulFbDiv; TYPE_2__ ulClock; } ;
typedef TYPE_6__ COMPUTE_GPU_CLOCK_OUTPUT_PARAMETERS_V1_6 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(
  struct pp_hwmgr *VAR_3,
  uint32_t VAR_4,
  pp_atomctrl_clock_dividers_vi *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->adev;
 COMPUTE_GPU_CLOCK_OUTPUT_PARAMETERS_V1_6 VAR_7;
 int VAR_8;

 VAR_7.ulClock.ulClock = FUNC_2(VAR_4);
 VAR_7.ulClock.ucPostDiv =
  VAR_1;

 VAR_8 = FUNC_1(VAR_6->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_2),
  (uint32_t *)&VAR_7);

 if (0 == VAR_8) {
  VAR_5->pll_post_divider =
   VAR_7.ulClock.ucPostDiv;
  VAR_5->real_clock =
   FUNC_4(VAR_7.ulClock.ulClock);

  VAR_5->ul_fb_div.ul_fb_div_frac =
   FUNC_3(VAR_7.ulFbDiv.usFbDivFrac);
  VAR_5->ul_fb_div.ul_fb_div =
   FUNC_3(VAR_7.ulFbDiv.usFbDiv);

  VAR_5->uc_pll_ref_div =
   VAR_7.ucPllRefDiv;
  VAR_5->uc_pll_post_div =
   VAR_7.ucPllPostDiv;
  VAR_5->uc_pll_cntl_flag =
   VAR_7.ucPllCntlFlag;
 }

 return VAR_8;
}
