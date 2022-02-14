
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pp_hwmgr {int adev; } ;
struct pp_atomfwctrl_gpio_parameters {int ucFwCtfPolarity; int ucFwCtfGpio; int ucVR1HotPolarity; int ucVR1HotGpio; int ucVR0HotPolarity; int ucVR0HotGpio; int ucAcDcPolarity; int ucAcDcGpio; } ;
struct atom_smu_info_v3_1 {int fw_ctf_polarity; int fw_ctf_gpio_bit; int vr1hot_polarity; int vr1hot_gpio_bit; int vr0hot_polarity; int vr0hot_gpio_bit; int ac_dc_polarity; int ac_dc_gpio_bit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *) ;
 int VAR_0 ;

int FUNC_3(struct pp_hwmgr *VAR_1,
  struct pp_atomfwctrl_gpio_parameters *VAR_2)
{
 struct atom_smu_info_v3_1 *VAR_3;
 uint16_t VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_3 = (struct atom_smu_info_v3_1 *)
  FUNC_2(VAR_1->adev,
    VAR_4, ((void*)0), ((void*)0), ((void*)0));

 if (!VAR_3) {
  FUNC_1("Error retrieving BIOS smu_info Table Address!");
  return -1;
 }

 VAR_2->ucAcDcGpio = VAR_3->ac_dc_gpio_bit;
 VAR_2->ucAcDcPolarity = VAR_3->ac_dc_polarity;
 VAR_2->ucVR0HotGpio = VAR_3->vr0hot_gpio_bit;
 VAR_2->ucVR0HotPolarity = VAR_3->vr0hot_polarity;
 VAR_2->ucVR1HotGpio = VAR_3->vr1hot_gpio_bit;
 VAR_2->ucVR1HotPolarity = VAR_3->vr1hot_polarity;
 VAR_2->ucFwCtfGpio = VAR_3->fw_ctf_gpio_bit;
 VAR_2->ucFwCtfPolarity = VAR_3->fw_ctf_polarity;

 return 0;
}
