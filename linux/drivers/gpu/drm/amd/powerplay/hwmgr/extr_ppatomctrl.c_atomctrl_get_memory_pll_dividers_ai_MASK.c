
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_8__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_10__ {int ulPostDiv; int ulClock; void* ulMclk_fcw_frac; void* ulMclk_fcw_int; } ;
typedef TYPE_4__ pp_atomctrl_memory_clock_param_ai ;
struct TYPE_9__ {int ucPostDiv; int ulClock; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_11__ {TYPE_3__ ulClock; int usMclk_fcw_frac; int usMclk_fcw_int; int member_2; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_5__ COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct pp_hwmgr *VAR_2,
     uint32_t VAR_3,
     pp_atomctrl_memory_clock_param_ai *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->adev;
 COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_3 VAR_6 = {{0}, 0, 0};
 int VAR_7;

 VAR_6.ulClock.ulClock = FUNC_2(VAR_3);

 VAR_7 = FUNC_1(VAR_5->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_1),
   (uint32_t *)&VAR_6);


 FUNC_5(10);

 if (!VAR_7) {
  VAR_4->ulMclk_fcw_int =
   FUNC_3(VAR_6.usMclk_fcw_int);
  VAR_4->ulMclk_fcw_frac =
   FUNC_3(VAR_6.usMclk_fcw_frac);
  VAR_4->ulClock =
   FUNC_4(VAR_6.ulClock.ulClock);
  VAR_4->ulPostDiv = VAR_6.ulClock.ucPostDiv;
 }

 return VAR_7;
}
