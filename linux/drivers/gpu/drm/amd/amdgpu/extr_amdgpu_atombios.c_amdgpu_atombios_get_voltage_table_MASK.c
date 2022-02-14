
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union voltage_object_info {int v3; } ;
struct TYPE_11__ {int ucGpioEntryNum; int ucPhaseDelay; int ulGpioMaskVal; TYPE_4__* asVolGpioLut; } ;
struct TYPE_8__ {TYPE_5__ asGpioVoltageObj; } ;
union voltage_object {TYPE_2__ v3; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct atom_voltage_table {int count; int phase_delay; void* mask_low; TYPE_3__* entries; } ;
struct TYPE_7__ {TYPE_6__* atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_10__ {int ulVoltageId; int usVoltageValue; } ;
typedef TYPE_4__ VOLTAGE_LUT_ENTRY_V2 ;
struct TYPE_12__ {scalar_t__ bios; } ;
struct TYPE_9__ {void* smio_low; int value; } ;
typedef TYPE_5__ ATOM_GPIO_VOLTAGE_OBJECT_V3 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

int FUNC_6(struct amdgpu_device *VAR_4,
          u8 VAR_5, u8 VAR_6,
          struct atom_voltage_table *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_0, VAR_3);
 u8 VAR_9, VAR_10;
 u16 VAR_11, VAR_12;
 int VAR_13;
 union voltage_object_info *VAR_14;
 union voltage_object *VAR_15 = ((void*)0);

 if (FUNC_2(VAR_4->mode_info.atom_context, VAR_8, &VAR_12,
       &VAR_9, &VAR_10, &VAR_11)) {
  VAR_14 = (union voltage_object_info *)
   (VAR_4->mode_info.atom_context->bios + VAR_11);

  switch (VAR_9) {
  case 3:
   switch (VAR_10) {
   case 1:
    VAR_15 = (union voltage_object *)
     FUNC_3(&VAR_14->v3,
              VAR_5, VAR_6);
    if (VAR_15) {
     ATOM_GPIO_VOLTAGE_OBJECT_V3 *VAR_16 =
      &VAR_15->v3.asGpioVoltageObj;
     VOLTAGE_LUT_ENTRY_V2 *VAR_17;
     if (VAR_16->ucGpioEntryNum > VAR_2)
      return -VAR_1;
     VAR_17 = &VAR_16->asVolGpioLut[0];
     for (VAR_13 = 0; VAR_13 < VAR_16->ucGpioEntryNum; VAR_13++) {
      VAR_7->entries[VAR_13].value =
       FUNC_4(VAR_17->usVoltageValue);
      VAR_7->entries[VAR_13].smio_low =
       FUNC_5(VAR_17->ulVoltageId);
      VAR_17 = (VOLTAGE_LUT_ENTRY_V2 *)
       ((u8 *)VAR_17 + sizeof(VOLTAGE_LUT_ENTRY_V2));
     }
     VAR_7->mask_low = FUNC_5(VAR_16->ulGpioMaskVal);
     VAR_7->count = VAR_16->ucGpioEntryNum;
     VAR_7->phase_delay = VAR_16->ucPhaseDelay;
     return 0;
    }
    break;
   default:
    FUNC_0("unknown voltage object table\n");
    return -VAR_1;
   }
   break;
  default:
   FUNC_0("unknown voltage object table\n");
   return -VAR_1;
  }
 }
 return -VAR_1;
}
