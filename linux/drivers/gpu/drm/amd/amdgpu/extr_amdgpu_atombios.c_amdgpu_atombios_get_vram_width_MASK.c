
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucUMAChannelNumber; } ;
union igp_info {TYPE_1__ info_8; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct amdgpu_mode_info {TYPE_2__* atom_context; } ;
struct amdgpu_device {struct amdgpu_mode_info mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,scalar_t__*,int*,int*,scalar_t__*) ;

int FUNC_2(struct amdgpu_device *VAR_2)
{
 struct amdgpu_mode_info *VAR_3 = &VAR_2->mode_info;
 int VAR_4 = FUNC_0(VAR_0, VAR_1);
 u16 VAR_5, VAR_6;
 union igp_info *VAR_7;
 u8 VAR_8, VAR_9;


 if (FUNC_1(VAR_3->atom_context, VAR_4, &VAR_6,
       &VAR_8, &VAR_9, &VAR_5)) {
  VAR_7 = (union igp_info *)
   (VAR_3->atom_context->bios + VAR_5);
  switch (VAR_9) {
  case 8:
  case 9:
   return VAR_7->info_8.ucUMAChannelNumber * 64;
  default:
   return 0;
  }
 }

 return 0;
}
