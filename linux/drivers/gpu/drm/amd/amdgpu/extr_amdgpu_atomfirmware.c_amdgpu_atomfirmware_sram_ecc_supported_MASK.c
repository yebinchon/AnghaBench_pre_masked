
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int firmware_capability; } ;
union firmware_info {TYPE_1__ v31; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct amdgpu_mode_info {TYPE_2__* atom_context; } ;
struct amdgpu_device {struct amdgpu_mode_info mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct amdgpu_device *VAR_3)
{
 struct amdgpu_mode_info *VAR_4 = &VAR_3->mode_info;
 int VAR_5;
 u16 VAR_6, VAR_7;
 union firmware_info *VAR_8;
 u8 VAR_9, VAR_10;
 bool VAR_11 = 0;

 VAR_5 = FUNC_1(VAR_1,
   VAR_2);

 if (FUNC_0(VAR_3->mode_info.atom_context,
    VAR_5, &VAR_7, &VAR_9, &VAR_10, &VAR_6)) {

  if ((VAR_9 == 3 && VAR_10 >=1) || (VAR_9 > 3)) {
   VAR_8 = (union firmware_info *)
    (VAR_4->atom_context->bios + VAR_6);
   VAR_11 =
    (FUNC_2(VAR_8->v31.firmware_capability) &
     VAR_0) ? 1 : 0;
  }
 }

 return VAR_11;
}
