
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


union voltage_object_info {int v3; int v2; int v1; } ;
struct TYPE_10__ {int ucVoltageControlId; } ;
struct TYPE_11__ {TYPE_4__ asControl; } ;
struct TYPE_8__ {int ucVoltageControlId; } ;
struct TYPE_9__ {TYPE_2__ asControl; } ;
union voltage_object {TYPE_5__ v2; TYPE_3__ v1; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {TYPE_6__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct TYPE_12__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int,scalar_t__*,int*,int*,scalar_t__*) ;

bool
FUNC_6(struct radeon_device *VAR_3,
       u8 VAR_4, u8 VAR_5)
{
 int VAR_6 = FUNC_1(VAR_0, VAR_2);
 u8 VAR_7, VAR_8;
 u16 VAR_9, VAR_10;
 union voltage_object_info *VAR_11;
 union voltage_object *VAR_12 = ((void*)0);

 if (FUNC_5(VAR_3->mode_info.atom_context, VAR_6, &VAR_10,
       &VAR_7, &VAR_8, &VAR_9)) {
  VAR_11 = (union voltage_object_info *)
   (VAR_3->mode_info.atom_context->bios + VAR_9);

  switch (VAR_7) {
  case 1:
  case 2:
   switch (VAR_8) {
   case 1:
    VAR_12 = (union voltage_object *)
     FUNC_2(&VAR_11->v1, VAR_4);
    if (VAR_12 &&
        (VAR_12->v1.asControl.ucVoltageControlId == VAR_1))
     return 1;
    break;
   case 2:
    VAR_12 = (union voltage_object *)
     FUNC_3(&VAR_11->v2, VAR_4);
    if (VAR_12 &&
        (VAR_12->v2.asControl.ucVoltageControlId == VAR_1))
     return 1;
    break;
   default:
    FUNC_0("unknown voltage object table\n");
    return 0;
   }
   break;
  case 3:
   switch (VAR_8) {
   case 1:
    if (FUNC_4(&VAR_11->v3,
          VAR_4, VAR_5))
     return 1;
    break;
   default:
    FUNC_0("unknown voltage object table\n");
    return 0;
   }
   break;
  default:
   FUNC_0("unknown voltage object table\n");
   return 0;
  }

 }
 return 0;
}
