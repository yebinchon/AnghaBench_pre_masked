
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union voltage_object_info {int v2; int v1; } ;
struct TYPE_12__ {int ucNumOfVoltageEntries; int * asVIDAdjustEntries; } ;
struct TYPE_10__ {TYPE_5__ asFormula; } ;
struct TYPE_13__ {int ucFlag; int ucNumOfVoltageEntries; int usVoltageStep; int usVoltageBaseLevel; } ;
struct TYPE_9__ {TYPE_6__ asFormula; } ;
union voltage_object {TYPE_3__ v2; TYPE_2__ v1; } ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {TYPE_7__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct TYPE_11__ {int usVoltageValue; } ;
typedef TYPE_4__ VOLTAGE_LUT_ENTRY ;
struct TYPE_14__ {int bios; } ;
typedef TYPE_5__ ATOM_VOLTAGE_FORMULA_V2 ;
typedef TYPE_6__ ATOM_VOLTAGE_FORMULA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int,int*,int*,int*,int*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct radeon_device *VAR_3,
    u8 VAR_4, u16 *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_0, VAR_2);
 u8 VAR_7, VAR_8;
 u16 VAR_9, VAR_10;
 union voltage_object_info *VAR_11;
 union voltage_object *VAR_12 = ((void*)0);

 if (FUNC_4(VAR_3->mode_info.atom_context, VAR_6, &VAR_10,
       &VAR_7, &VAR_8, &VAR_9)) {
  VAR_11 = (union voltage_object_info *)
   (VAR_3->mode_info.atom_context->bios + VAR_9);

  switch (VAR_8) {
  case 1:
   VAR_12 = (union voltage_object *)
    FUNC_2(&VAR_11->v1, VAR_4);
   if (VAR_12) {
    ATOM_VOLTAGE_FORMULA *VAR_13 =
     &VAR_12->v1.asFormula;
    if (VAR_13->ucFlag & 1)
     *VAR_5 =
      FUNC_5(VAR_13->usVoltageBaseLevel) +
      VAR_13->ucNumOfVoltageEntries / 2 *
      FUNC_5(VAR_13->usVoltageStep);
    else
     *VAR_5 =
      FUNC_5(VAR_13->usVoltageBaseLevel) +
      (VAR_13->ucNumOfVoltageEntries - 1) *
      FUNC_5(VAR_13->usVoltageStep);
    return 0;
   }
   break;
  case 2:
   VAR_12 = (union voltage_object *)
    FUNC_3(&VAR_11->v2, VAR_4);
   if (VAR_12) {
    ATOM_VOLTAGE_FORMULA_V2 *VAR_14 =
     &VAR_12->v2.asFormula;
    if (VAR_14->ucNumOfVoltageEntries) {
     VOLTAGE_LUT_ENTRY *VAR_15 = (VOLTAGE_LUT_ENTRY *)
      ((u8 *)&VAR_14->asVIDAdjustEntries[0] +
       (sizeof(VOLTAGE_LUT_ENTRY) * (VAR_14->ucNumOfVoltageEntries - 1)));
     *VAR_5 =
      FUNC_5(VAR_15->usVoltageValue);
     return 0;
    }
   }
   break;
  default:
   FUNC_0("unknown voltage object table\n");
   return -VAR_1;
  }

 }
 return -VAR_1;
}
