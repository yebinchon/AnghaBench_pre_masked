
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


union voltage_object_info {int v3; int v2; } ;
struct TYPE_17__ {int ucGpioEntryNum; int ucPhaseDelay; int ulGpioMaskVal; TYPE_5__* asVolGpioLut; } ;
struct TYPE_12__ {TYPE_8__ asGpioVoltageObj; } ;
struct TYPE_16__ {int ucNumOfVoltageEntries; TYPE_6__* asVIDAdjustEntries; } ;
struct TYPE_11__ {TYPE_7__ asFormula; } ;
union voltage_object {TYPE_3__ v3; TYPE_2__ v2; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {TYPE_9__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct atom_voltage_table {int count; int phase_delay; void* mask_low; TYPE_4__* entries; } ;
struct TYPE_14__ {int ulVoltageId; int usVoltageValue; } ;
typedef TYPE_5__ VOLTAGE_LUT_ENTRY_V2 ;
struct TYPE_15__ {int usVoltageValue; } ;
typedef TYPE_6__ VOLTAGE_LUT_ENTRY ;
struct TYPE_18__ {scalar_t__ bios; } ;
struct TYPE_13__ {void* smio_low; void* value; } ;
typedef TYPE_7__ ATOM_VOLTAGE_FORMULA_V2 ;
typedef TYPE_8__ ATOM_GPIO_VOLTAGE_OBJECT_V3 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (TYPE_9__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*,void*,int,void**,void**) ;

int FUNC_8(struct radeon_device *VAR_4,
      u8 VAR_5, u8 VAR_6,
      struct atom_voltage_table *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_0, VAR_3);
 u8 VAR_9, VAR_10;
 u16 VAR_11, VAR_12;
 int VAR_13, VAR_14;
 union voltage_object_info *VAR_15;
 union voltage_object *VAR_16 = ((void*)0);

 if (FUNC_4(VAR_4->mode_info.atom_context, VAR_8, &VAR_12,
       &VAR_9, &VAR_10, &VAR_11)) {
  VAR_15 = (union voltage_object_info *)
   (VAR_4->mode_info.atom_context->bios + VAR_11);

  switch (VAR_9) {
  case 1:
  case 2:
   switch (VAR_10) {
   case 1:
    FUNC_0("old table version %d, %d\n", VAR_9, VAR_10);
    return -VAR_1;
   case 2:
    VAR_16 = (union voltage_object *)
     FUNC_2(&VAR_15->v2, VAR_5);
    if (VAR_16) {
     ATOM_VOLTAGE_FORMULA_V2 *VAR_17 =
      &VAR_16->v2.asFormula;
     VOLTAGE_LUT_ENTRY *VAR_18;
     if (VAR_17->ucNumOfVoltageEntries > VAR_2)
      return -VAR_1;
     VAR_18 = &VAR_17->asVIDAdjustEntries[0];
     for (VAR_13 = 0; VAR_13 < VAR_17->ucNumOfVoltageEntries; VAR_13++) {
      VAR_7->entries[VAR_13].value =
       FUNC_5(VAR_18->usVoltageValue);
      VAR_14 = FUNC_7(VAR_4,
               VAR_7->entries[VAR_13].value,
               VAR_5,
               &VAR_7->entries[VAR_13].smio_low,
               &VAR_7->mask_low);
      if (VAR_14)
       return VAR_14;
      VAR_18 = (VOLTAGE_LUT_ENTRY *)
       ((u8 *)VAR_18 + sizeof(VOLTAGE_LUT_ENTRY));
     }
     VAR_7->count = VAR_17->ucNumOfVoltageEntries;
     return 0;
    }
    break;
   default:
    FUNC_0("unknown voltage object table\n");
    return -VAR_1;
   }
   break;
  case 3:
   switch (VAR_10) {
   case 1:
    VAR_16 = (union voltage_object *)
     FUNC_3(&VAR_15->v3,
              VAR_5, VAR_6);
    if (VAR_16) {
     ATOM_GPIO_VOLTAGE_OBJECT_V3 *VAR_19 =
      &VAR_16->v3.asGpioVoltageObj;
     VOLTAGE_LUT_ENTRY_V2 *VAR_20;
     if (VAR_19->ucGpioEntryNum > VAR_2)
      return -VAR_1;
     VAR_20 = &VAR_19->asVolGpioLut[0];
     for (VAR_13 = 0; VAR_13 < VAR_19->ucGpioEntryNum; VAR_13++) {
      VAR_7->entries[VAR_13].value =
       FUNC_5(VAR_20->usVoltageValue);
      VAR_7->entries[VAR_13].smio_low =
       FUNC_6(VAR_20->ulVoltageId);
      VAR_20 = (VOLTAGE_LUT_ENTRY_V2 *)
       ((u8 *)VAR_20 + sizeof(VOLTAGE_LUT_ENTRY_V2));
     }
     VAR_7->mask_low = FUNC_6(VAR_19->ulGpioMaskVal);
     VAR_7->count = VAR_19->ucGpioEntryNum;
     VAR_7->phase_delay = VAR_19->ucPhaseDelay;
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
