
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int is_atom_fw; scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 scalar_t__ FUNC_6 (struct amdgpu_device*) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;

bool FUNC_8(struct amdgpu_device *VAR_1)
{
 if (FUNC_2(VAR_1))
  goto success;

 if (FUNC_1(VAR_1))
  goto success;

 if (FUNC_7(VAR_1))
  goto success;

 if (FUNC_3(VAR_1))
  goto success;

 if (FUNC_4(VAR_1))
  goto success;

 if (FUNC_5(VAR_1))
  goto success;

 if (FUNC_6(VAR_1))
  goto success;

 FUNC_0("Unable to locate a BIOS ROM\n");
 return 0;

success:
 VAR_1->is_atom_fw = (VAR_1->asic_type >= VAR_0) ? 1 : 0;
 return 1;
}
