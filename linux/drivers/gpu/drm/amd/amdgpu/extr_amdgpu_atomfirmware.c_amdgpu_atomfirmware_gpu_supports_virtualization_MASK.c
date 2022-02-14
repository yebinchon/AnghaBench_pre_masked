
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct atom_firmware_info_v3_1 {int firmware_capability; } ;
struct TYPE_3__ {TYPE_2__* atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int *,int *,int *,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct amdgpu_device *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1,
      VAR_2);
 uint16_t VAR_5;

 if (FUNC_0(VAR_3->mode_info.atom_context, VAR_4, ((void*)0),
       ((void*)0), ((void*)0), &VAR_5)) {
  struct atom_firmware_info_v3_1 *VAR_6 =
   (struct atom_firmware_info_v3_1 *)(VAR_3->mode_info.atom_context->bios +
          VAR_5);

  if (FUNC_2(VAR_6->firmware_capability) &
      VAR_0)
   return 1;
 }
 return 0;
}
