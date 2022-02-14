
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int LedPin0; int LedPin1; int LedPin2; } ;
struct TYPE_3__ {TYPE_2__ pp_table; } ;
struct vega10_hwmgr {TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct pp_atomfwctrl_voltage_table {int mask_low; } ;
typedef scalar_t__ int32_t ;
typedef TYPE_2__ PPTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pp_hwmgr*,int ,int ,struct pp_atomfwctrl_voltage_table*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);

 struct pp_atomfwctrl_voltage_table VAR_5;
 uint8_t VAR_6, VAR_7;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9;
 int32_t VAR_10 = 0;

 VAR_10 = FUNC_0(VAR_2, VAR_1,
      VAR_0, &VAR_5);

 if (!VAR_10) {
  VAR_9 = VAR_5.mask_low;
  for (VAR_6 = 0, VAR_7 = 0; VAR_6 < 32; VAR_6++) {
   if (VAR_9 & 1) {
    VAR_8 |= (uint32_t)(VAR_6 << (8 * VAR_7));
    if (++VAR_7 >= 3)
     break;
   }
   VAR_9 >>= 1;
  }
 }

 VAR_4->LedPin0 = (uint8_t)(VAR_8 & 0xff);
 VAR_4->LedPin1 = (uint8_t)((VAR_8 >> 8) & 0xff);
 VAR_4->LedPin2 = (uint8_t)((VAR_8 >> 16) & 0xff);
 return 0;
}
