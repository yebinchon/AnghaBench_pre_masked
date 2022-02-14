
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int umc_config; } ;
union umc_info {TYPE_1__ v31; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct amdgpu_mode_info {TYPE_2__* atom_context; } ;
struct amdgpu_device {struct amdgpu_mode_info mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,union umc_info*) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct amdgpu_device *VAR_2)
{
 struct amdgpu_mode_info *VAR_3 = &VAR_2->mode_info;
 int VAR_4;
 u16 VAR_5, VAR_6;
 union umc_info *VAR_7;
 u8 VAR_8, VAR_9;
 bool VAR_10 = 0;

 VAR_4 = FUNC_1(VAR_1,
   VAR_7);

 if (FUNC_0(VAR_3->atom_context,
    VAR_4, &VAR_6, &VAR_8, &VAR_9, &VAR_5)) {

  if ((VAR_8 == 3 && VAR_9 >= 1) || (VAR_8 > 3)) {
   VAR_7 = (union umc_info *)
    (VAR_3->atom_context->bios + VAR_5);
   VAR_10 =
    (FUNC_2(VAR_7->v31.umc_config) &
     VAR_0) ? 1 : 0;
  }
 }

 return VAR_10;
}
