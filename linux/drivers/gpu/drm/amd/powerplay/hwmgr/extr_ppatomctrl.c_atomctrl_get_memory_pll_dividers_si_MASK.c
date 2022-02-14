
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_7__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_8__ {void* cl_kf; void* clk_frac; } ;
struct TYPE_10__ {void* bw_ctrl; void* dll_speed; void* half_rate; void* qdr; void* yclk_sel; void* vco_mode; void* mpll_post_divider; TYPE_2__ mpll_fb_divider; } ;
typedef TYPE_4__ pp_atomctrl_memory_clock_param ;
struct TYPE_9__ {int usFbDiv; int usFbDivFrac; } ;
struct TYPE_11__ {int ucPllCntlFlag; scalar_t__ ucBWCntl; scalar_t__ ucDllSpeed; scalar_t__ ucPostDiv; TYPE_3__ ulFbDiv; scalar_t__ ucInputFlag; int ulClock; } ;
typedef TYPE_5__ COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;

int FUNC_4(
  struct pp_hwmgr *VAR_6,
  uint32_t VAR_7,
  pp_atomctrl_memory_clock_param *VAR_8,
  bool VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_6->adev;
 COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_1 VAR_11;
 int VAR_12;

 VAR_11.ulClock = FUNC_2(VAR_7);
 VAR_11.ucInputFlag = (uint8_t)((VAR_9) ? 1 : 0);

 VAR_12 = FUNC_1(VAR_10->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_1),
  (uint32_t *)&VAR_11);

 if (0 == VAR_12) {
  VAR_8->mpll_fb_divider.clk_frac =
   FUNC_3(VAR_11.ulFbDiv.usFbDivFrac);
  VAR_8->mpll_fb_divider.cl_kf =
   FUNC_3(VAR_11.ulFbDiv.usFbDiv);
  VAR_8->mpll_post_divider =
   (uint32_t)VAR_11.ucPostDiv;
  VAR_8->vco_mode =
   (uint32_t)(VAR_11.ucPllCntlFlag &
     VAR_5);
  VAR_8->yclk_sel =
   (uint32_t)((VAR_11.ucPllCntlFlag &
      VAR_3) ? 1 : 0);
  VAR_8->qdr =
   (uint32_t)((VAR_11.ucPllCntlFlag &
      VAR_4) ? 1 : 0);
  VAR_8->half_rate =
   (uint32_t)((VAR_11.ucPllCntlFlag &
      VAR_2) ? 1 : 0);
  VAR_8->dll_speed =
   (uint32_t)(VAR_11.ucDllSpeed);
  VAR_8->bw_ctrl =
   (uint32_t)(VAR_11.ucBWCntl);
 }

 return VAR_12;
}
