
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int caps; } ;
struct amdgpu_device {TYPE_1__ virt; scalar_t__ is_atom_fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_2)
{
 if (FUNC_2(VAR_2)) {
  if (VAR_2->is_atom_fw) {
   if (FUNC_1(VAR_2))
    VAR_2->virt.caps |= VAR_1;
  } else {
   if (FUNC_0(VAR_2))
    VAR_2->virt.caps |= VAR_1;
  }

  if (!(VAR_2->virt.caps & VAR_1))
   FUNC_3(VAR_2, VAR_0, 0, 0);
 }
}
