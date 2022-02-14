
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_6__ {int real_clock; int pll_post_divider; } ;
typedef TYPE_2__ pp_atomctrl_clock_dividers_kong ;
struct TYPE_7__ {int ulClock; int ucPostDiv; } ;
typedef TYPE_3__ COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V4 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct pp_hwmgr *VAR_2,
       uint32_t VAR_3,
       pp_atomctrl_clock_dividers_kong *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->adev;
 COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V4 VAR_6;
 int VAR_7;

 VAR_6.ulClock = FUNC_2(VAR_3);

 VAR_7 = FUNC_1(VAR_5->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_1),
  (uint32_t *)&VAR_6);

 if (0 == VAR_7) {
  VAR_4->pll_post_divider = VAR_6.ucPostDiv;
  VAR_4->real_clock = FUNC_3(VAR_6.ulClock);
 }

 return VAR_7;
}
