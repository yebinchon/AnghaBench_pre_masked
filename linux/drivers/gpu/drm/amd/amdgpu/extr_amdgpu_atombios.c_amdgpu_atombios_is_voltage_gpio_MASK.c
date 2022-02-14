
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union voltage_object_info {int v3; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {TYPE_2__* atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int FUNC_3 (int *,int,int) ;

bool
FUNC_4(struct amdgpu_device *VAR_2,
    u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = FUNC_1(VAR_0, VAR_1);
 u8 VAR_6, VAR_7;
 u16 VAR_8, VAR_9;
 union voltage_object_info *VAR_10;

 if (FUNC_2(VAR_2->mode_info.atom_context, VAR_5, &VAR_9,
       &VAR_6, &VAR_7, &VAR_8)) {
  VAR_10 = (union voltage_object_info *)
   (VAR_2->mode_info.atom_context->bios + VAR_8);

  switch (VAR_6) {
  case 3:
   switch (VAR_7) {
   case 1:
    if (FUNC_3(&VAR_10->v3,
          VAR_3, VAR_4))
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
