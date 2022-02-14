
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct atom_firmware_info_v3_1 {int bios_scratch_reg_startaddr; } ;
struct TYPE_3__ {TYPE_2__* atom_context; } ;
struct amdgpu_device {int bios_scratch_reg_offset; TYPE_1__ mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int *,int *,int *,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct amdgpu_device *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0,
      VAR_1);
 uint16_t VAR_4;

 if (FUNC_0(VAR_2->mode_info.atom_context, VAR_3, ((void*)0),
       ((void*)0), ((void*)0), &VAR_4)) {
  struct atom_firmware_info_v3_1 *VAR_5 =
   (struct atom_firmware_info_v3_1 *)(VAR_2->mode_info.atom_context->bios +
          VAR_4);

  VAR_2->bios_scratch_reg_offset =
   FUNC_2(VAR_5->bios_scratch_reg_startaddr);
 }
}
