
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
typedef size_t u16 ;
struct smu8_hwmgr {int vce_power_gated; int uvd_power_gated; } ;
struct TYPE_5__ {struct phm_uvd_clock_voltage_dependency_table* uvd_clock_voltage_dependency_table; struct phm_vce_clock_voltage_dependency_table* vce_clock_voltage_dependency_table; struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {int device; TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_vce_clock_voltage_dependency_table {TYPE_4__* entries; } ;
struct phm_uvd_clock_voltage_dependency_table {TYPE_3__* entries; } ;
struct phm_clock_voltage_dependency_table {TYPE_2__* entries; } ;
struct TYPE_8__ {size_t ecclk; } ;
struct TYPE_7__ {size_t vclk; size_t dclk; } ;
struct TYPE_6__ {size_t clk; } ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t FUNC_0 (size_t,int ,int ) ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct pp_hwmgr*,size_t) ;
 size_t FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_19, int VAR_20,
     void *VAR_21, int *VAR_22)
{
 struct smu8_hwmgr *VAR_23 = VAR_19->backend;

 struct phm_clock_voltage_dependency_table *VAR_24 =
    VAR_19->dyn_state.vddc_dependency_on_sclk;

 struct phm_vce_clock_voltage_dependency_table *VAR_25 =
  VAR_19->dyn_state.vce_clock_voltage_dependency_table;

 struct phm_uvd_clock_voltage_dependency_table *VAR_26 =
  VAR_19->dyn_state.uvd_clock_voltage_dependency_table;

 uint32_t VAR_27 = FUNC_0(FUNC_1(VAR_19->device, VAR_0, VAR_16),
     VAR_12, VAR_5);
 uint32_t VAR_28 = FUNC_0(FUNC_1(VAR_19->device, VAR_0, VAR_17),
     VAR_13, VAR_6);
 uint32_t VAR_29 = FUNC_0(FUNC_1(VAR_19->device, VAR_0, VAR_17),
     VAR_13, VAR_7);

 uint32_t VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 uint16_t VAR_36, VAR_37;
 int VAR_38;


 if (*VAR_22 < 4)
  return -VAR_8;
 *VAR_22 = 4;

 switch (VAR_20) {
 case 137:
  if (VAR_27 < VAR_9) {
   VAR_30 = VAR_24->entries[VAR_27].clk;
   *((uint32_t *)VAR_21) = VAR_30;
   return 0;
  }
  return -VAR_8;
 case 128:
  VAR_34 = (FUNC_1(VAR_19->device, VAR_0, VAR_15) &
   VAR_3) >> VAR_4;
  VAR_36 = FUNC_3(VAR_19, VAR_34) / 4;
  *((uint32_t *)VAR_21) = VAR_36;
  return 0;
 case 129:
  VAR_34 = (FUNC_1(VAR_19->device, VAR_0, VAR_14) &
   VAR_1) >> VAR_2;
  VAR_37 = FUNC_3(VAR_19, (u16)VAR_34) / 4;
  *((uint32_t *)VAR_21) = VAR_37;
  return 0;
 case 132:
  if (!VAR_23->uvd_power_gated) {
   if (VAR_28 >= VAR_11) {
    return -VAR_8;
   } else {
    VAR_31 = VAR_26->entries[VAR_28].vclk;
    *((uint32_t *)VAR_21) = VAR_31;
    return 0;
   }
  }
  *((uint32_t *)VAR_21) = 0;
  return 0;
 case 134:
  if (!VAR_23->uvd_power_gated) {
   if (VAR_28 >= VAR_11) {
    return -VAR_8;
   } else {
    VAR_32 = VAR_26->entries[VAR_28].dclk;
    *((uint32_t *)VAR_21) = VAR_32;
    return 0;
   }
  }
  *((uint32_t *)VAR_21) = 0;
  return 0;
 case 131:
  if (!VAR_23->vce_power_gated) {
   if (VAR_29 >= VAR_11) {
    return -VAR_8;
   } else {
    VAR_33 = VAR_25->entries[VAR_29].ecclk;
    *((uint32_t *)VAR_21) = VAR_33;
    return 0;
   }
  }
  *((uint32_t *)VAR_21) = 0;
  return 0;
 case 136:
  VAR_38 = FUNC_5(VAR_19, VAR_10);
  if (0 == VAR_38) {
   VAR_35 = FUNC_2(VAR_19->device, VAR_18);
   VAR_35 = VAR_35 > 100 ? 100 : VAR_35;
  } else {
   VAR_35 = 50;
  }
  *((uint32_t *)VAR_21) = VAR_35;
  return 0;
 case 133:
  *((uint32_t *)VAR_21) = VAR_23->uvd_power_gated ? 0 : 1;
  return 0;
 case 130:
  *((uint32_t *)VAR_21) = VAR_23->vce_power_gated ? 0 : 1;
  return 0;
 case 135:
  *((uint32_t *)VAR_21) = FUNC_4(VAR_19);
  return 0;
 default:
  return -VAR_8;
 }
}
