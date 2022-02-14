
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ac_dc_switch_gpio_support; scalar_t__ regulator_hot_gpio_support; } ;
struct TYPE_6__ {scalar_t__ AcDcPolarity; scalar_t__ AcDcGpio; scalar_t__ VR1HotPolarity; scalar_t__ VR1HotGpio; scalar_t__ VR0HotPolarity; scalar_t__ VR0HotGpio; } ;
struct TYPE_4__ {TYPE_3__ pp_table; } ;
struct vega10_hwmgr {TYPE_2__ registry_data; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct pp_atomfwctrl_gpio_parameters {scalar_t__ ucAcDcPolarity; scalar_t__ ucAcDcGpio; scalar_t__ ucVR1HotPolarity; scalar_t__ ucVR1HotGpio; scalar_t__ ucVR0HotPolarity; scalar_t__ ucVR0HotGpio; int member_0; } ;
typedef TYPE_3__ PPTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_atomfwctrl_gpio_parameters*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);
 struct pp_atomfwctrl_gpio_parameters VAR_5 = {0};
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (!VAR_6) {
  if (FUNC_0(VAR_1) &&
      VAR_3->registry_data.regulator_hot_gpio_support) {
   VAR_4->VR0HotGpio = VAR_5.ucVR0HotGpio;
   VAR_4->VR0HotPolarity = VAR_5.ucVR0HotPolarity;
   VAR_4->VR1HotGpio = VAR_5.ucVR1HotGpio;
   VAR_4->VR1HotPolarity = VAR_5.ucVR1HotPolarity;
  } else {
   VAR_4->VR0HotGpio = 0;
   VAR_4->VR0HotPolarity = 0;
   VAR_4->VR1HotGpio = 0;
   VAR_4->VR1HotPolarity = 0;
  }

  if (FUNC_0(VAR_0) &&
      VAR_3->registry_data.ac_dc_switch_gpio_support) {
   VAR_4->AcDcGpio = VAR_5.ucAcDcGpio;
   VAR_4->AcDcPolarity = VAR_5.ucAcDcPolarity;
  } else {
   VAR_4->AcDcGpio = 0;
   VAR_4->AcDcPolarity = 0;
  }
 }

 return VAR_6;
}
