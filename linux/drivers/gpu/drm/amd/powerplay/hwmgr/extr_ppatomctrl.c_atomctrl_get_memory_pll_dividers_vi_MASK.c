
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_7__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_8__ {scalar_t__ mpll_post_divider; } ;
typedef TYPE_3__ pp_atomctrl_memory_clock_param ;
struct TYPE_6__ {scalar_t__ ucPostDiv; int ulClock; } ;
struct TYPE_9__ {TYPE_1__ ulClock; } ;
typedef TYPE_4__ COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct pp_hwmgr *VAR_2,
  uint32_t VAR_3, pp_atomctrl_memory_clock_param *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->adev;
 COMPUTE_MEMORY_CLOCK_PARAM_PARAMETERS_V2_2 VAR_6;
 int VAR_7;

 VAR_6.ulClock.ulClock = FUNC_2(VAR_3);

 VAR_7 = FUNC_1(VAR_5->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_1),
   (uint32_t *)&VAR_6);

 if (!VAR_7)
  VAR_4->mpll_post_divider =
    (uint32_t)VAR_6.ulClock.ucPostDiv;

 return VAR_7;
}
