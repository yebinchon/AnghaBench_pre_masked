
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union voltage_object_info {int v3; } ;
struct TYPE_6__ {int ucSVDGpioId; int ucSVCGpioId; } ;
struct TYPE_7__ {TYPE_2__ asSVID2Obj; } ;
union voltage_object {TYPE_3__ v3; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {TYPE_4__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct TYPE_8__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,scalar_t__*,int*,int*,scalar_t__*) ;

int FUNC_4(struct radeon_device *VAR_4,
         u8 VAR_5,
         u8 *VAR_6, u8 *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_0, VAR_3);
 u8 VAR_9, VAR_10;
 u16 VAR_11, VAR_12;
 union voltage_object_info *VAR_13;
 union voltage_object *VAR_14 = ((void*)0);

 if (FUNC_3(VAR_4->mode_info.atom_context, VAR_8, &VAR_12,
       &VAR_9, &VAR_10, &VAR_11)) {
  VAR_13 = (union voltage_object_info *)
   (VAR_4->mode_info.atom_context->bios + VAR_11);

  switch (VAR_9) {
  case 3:
   switch (VAR_10) {
   case 1:
    VAR_14 = (union voltage_object *)
     FUNC_2(&VAR_13->v3,
              VAR_5,
              VAR_2);
    if (VAR_14) {
     *VAR_6 = VAR_14->v3.asSVID2Obj.ucSVDGpioId;
     *VAR_7 = VAR_14->v3.asSVID2Obj.ucSVCGpioId;
    } else {
     return -VAR_1;
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
 return 0;
}
