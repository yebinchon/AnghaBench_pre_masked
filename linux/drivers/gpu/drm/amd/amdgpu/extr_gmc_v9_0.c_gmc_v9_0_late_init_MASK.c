
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vm_fault; } ;
struct amdgpu_device {int asic_type; TYPE_2__ gmc; TYPE_1__* df_funcs; } ;
struct TYPE_3__ {int (* enable_ecc_force_par_wr_rmw ) (struct amdgpu_device*,int) ;} ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int *,int ) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 bool VAR_2;

 if (!FUNC_8(VAR_1))
  FUNC_3(VAR_1);

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  return VAR_2;

 if (!FUNC_5(VAR_1)) {
  switch (VAR_1->asic_type) {
  case 129:
  case 128:
   VAR_2 = FUNC_1(VAR_1);
   if (!VAR_2) {
    FUNC_0("ECC is not present.\n");
    if (VAR_1->df_funcs->enable_ecc_force_par_wr_rmw)
     VAR_1->df_funcs->enable_ecc_force_par_wr_rmw(VAR_1, 0);
   } else {
    FUNC_0("ECC is active.\n");
   }

   VAR_2 = FUNC_2(VAR_1);
   if (!VAR_2) {
    FUNC_0("SRAM ECC is not present.\n");
   } else {
    FUNC_0("SRAM ECC is active.\n");
   }
   break;
  default:
   break;
  }
 }

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_4(VAR_1, &VAR_1->gmc.vm_fault, 0);
}
