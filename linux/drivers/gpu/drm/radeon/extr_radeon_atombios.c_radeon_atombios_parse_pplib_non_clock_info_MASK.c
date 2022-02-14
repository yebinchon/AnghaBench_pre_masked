
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct TYPE_10__ {int default_power_state_index; TYPE_4__* power_state; void* default_vddci; void* default_vddc; int default_mclk; int default_sclk; } ;
struct TYPE_6__ {int default_sclk; int default_mclk; } ;
struct radeon_device {scalar_t__ family; int flags; TYPE_5__ pm; TYPE_1__ clock; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int usClassification; int ulCapsAndSettings; } ;
struct TYPE_9__ {int misc; int misc2; int pcie_lanes; TYPE_3__* clock_info; TYPE_3__* default_clock_mode; void* type; int flags; } ;
struct TYPE_7__ {void* vddci; void* voltage; } ;
struct TYPE_8__ {TYPE_2__ voltage; int sclk; int mclk; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,int ,void**) ;
 int FUNC_4 (struct radeon_device*,void**,void**,void**) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_14,
             int VAR_15, int VAR_16,
             struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_17)
{
 int VAR_18;
 u32 VAR_19 = FUNC_2(VAR_17->ulCapsAndSettings);
 u32 VAR_20 = FUNC_1(VAR_17->usClassification);
 u16 VAR_21, VAR_22, VAR_23;

 FUNC_4(VAR_14, &VAR_21, &VAR_22, &VAR_23);

 VAR_14->pm.power_state[VAR_15].misc = VAR_19;
 VAR_14->pm.power_state[VAR_15].misc2 = VAR_20;
 VAR_14->pm.power_state[VAR_15].pcie_lanes =
  ((VAR_19 & VAR_3) >>
   VAR_4) + 1;
 switch (VAR_20 & VAR_2) {
 case 130:
  VAR_14->pm.power_state[VAR_15].type =
   VAR_8;
  break;
 case 131:
  VAR_14->pm.power_state[VAR_15].type =
   VAR_7;
  break;
 case 128:
  VAR_14->pm.power_state[VAR_15].type =
   VAR_10;
  break;
 case 129:
  if (VAR_20 & VAR_0)
   VAR_14->pm.power_state[VAR_15].type =
    VAR_10;
  break;
 }
 VAR_14->pm.power_state[VAR_15].flags = 0;
 if (VAR_19 & VAR_5)
  VAR_14->pm.power_state[VAR_15].flags |=
   VAR_12;
 if (VAR_20 & VAR_1) {
  VAR_14->pm.power_state[VAR_15].type =
   VAR_9;
  VAR_14->pm.default_power_state_index = VAR_15;
  VAR_14->pm.power_state[VAR_15].default_clock_mode =
   &VAR_14->pm.power_state[VAR_15].clock_info[VAR_16 - 1];
  if ((VAR_14->family >= VAR_6) && !(VAR_14->flags & VAR_11)) {

   VAR_14->pm.default_sclk = VAR_14->pm.power_state[VAR_15].clock_info[0].sclk;
   VAR_14->pm.default_mclk = VAR_14->pm.power_state[VAR_15].clock_info[0].mclk;
   VAR_14->pm.default_vddc = VAR_14->pm.power_state[VAR_15].clock_info[0].voltage.voltage;
   VAR_14->pm.default_vddci = VAR_14->pm.power_state[VAR_15].clock_info[0].voltage.vddci;
  } else {
   u16 VAR_24 = 0;

   if (FUNC_0(VAR_14))
    FUNC_3(VAR_14,
           VAR_13,
           &VAR_24);

   for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
    VAR_14->pm.power_state[VAR_15].clock_info[VAR_18].mclk =
     VAR_14->clock.default_mclk;
    VAR_14->pm.power_state[VAR_15].clock_info[VAR_18].sclk =
     VAR_14->clock.default_sclk;
    if (VAR_21)
     VAR_14->pm.power_state[VAR_15].clock_info[VAR_18].voltage.voltage =
      VAR_21;
    if (VAR_24)
     VAR_14->pm.power_state[VAR_15].clock_info[VAR_18].voltage.vddci =
      VAR_24;
   }
  }
 }
}
