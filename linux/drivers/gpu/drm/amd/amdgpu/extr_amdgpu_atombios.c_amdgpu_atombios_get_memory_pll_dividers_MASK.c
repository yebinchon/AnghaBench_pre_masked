
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int usFbDiv; int usFbDivFrac; } ;
struct atom_mpll_param {int vco_mode; int ucPllCntlFlag; int yclk_sel; int qdr; int half_rate; int ucBWCntl; int bwcntl; int ucDllSpeed; int dll_speed; int ucPostDiv; int post_div; TYPE_2__ ulFbDiv; void* clkf; void* clkfrac; int ucInputFlag; int ulClock; } ;
struct TYPE_3__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef int args ;
typedef struct atom_mpll_param COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int*,int*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct atom_mpll_param*,int ,int) ;

int FUNC_6(struct amdgpu_device *VAR_8,
         u32 VAR_9,
         bool VAR_10,
         struct atom_mpll_param *VAR_11)
{
 COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_1 VAR_12;
 int VAR_13 = FUNC_0(VAR_0, VAR_1);
 u8 VAR_14, VAR_15;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 FUNC_5(VAR_11, 0, sizeof(struct atom_mpll_param));

 if (!FUNC_2(VAR_8->mode_info.atom_context, VAR_13, &VAR_14, &VAR_15))
  return -VAR_2;

 switch (VAR_14) {
 case 2:
  switch (VAR_15) {
  case 1:

   VAR_12.ulClock = FUNC_3(VAR_9);
   VAR_12.ucInputFlag = 0;
   if (VAR_10)
    VAR_12.ucInputFlag |= VAR_7;

   FUNC_1(VAR_8->mode_info.atom_context, VAR_13, (uint32_t *)&VAR_12);

   VAR_11->clkfrac = FUNC_4(VAR_12.ulFbDiv.usFbDivFrac);
   VAR_11->clkf = FUNC_4(VAR_12.ulFbDiv.usFbDiv);
   VAR_11->post_div = VAR_12.ucPostDiv;
   VAR_11->dll_speed = VAR_12.ucDllSpeed;
   VAR_11->bwcntl = VAR_12.ucBWCntl;
   VAR_11->vco_mode =
    (VAR_12.ucPllCntlFlag & VAR_6);
   VAR_11->yclk_sel =
    (VAR_12.ucPllCntlFlag & VAR_4) ? 1 : 0;
   VAR_11->qdr =
    (VAR_12.ucPllCntlFlag & VAR_5) ? 1 : 0;
   VAR_11->half_rate =
    (VAR_12.ucPllCntlFlag & VAR_3) ? 1 : 0;
   break;
  default:
   return -VAR_2;
  }
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
