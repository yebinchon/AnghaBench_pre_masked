
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ras_common_if {int dummy; } ;
struct ras_ih_if {struct ras_common_if head; } ;
struct TYPE_2__ {struct ras_common_if* mmhub_ras_if; struct ras_common_if* umc_ras_if; } ;
struct amdgpu_device {int stolen_vga_memory; TYPE_1__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_6 (struct amdgpu_device*,struct ras_common_if*,int ) ;
 int FUNC_7 (struct amdgpu_device*,struct ras_ih_if*) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*,int ) ;
 int FUNC_9 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 scalar_t__ FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct ras_common_if*) ;

__attribute__((used)) static int FUNC_13(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;
 void *VAR_4;

 if (FUNC_8(VAR_3, VAR_1) &&
   VAR_3->gmc.umc_ras_if) {
  struct ras_common_if *VAR_5 = VAR_3->gmc.umc_ras_if;
  struct ras_ih_if VAR_6 = {
   .head = *VAR_5,
  };


  FUNC_5(VAR_3, VAR_5);
  FUNC_9(VAR_3, VAR_5);

  FUNC_7(VAR_3, &VAR_6);
  FUNC_6(VAR_3, VAR_5, 0);
  FUNC_12(VAR_5);
 }

 if (FUNC_8(VAR_3, VAR_0) &&
   VAR_3->gmc.mmhub_ras_if) {
  struct ras_common_if *VAR_7 = VAR_3->gmc.mmhub_ras_if;


  FUNC_5(VAR_3, VAR_7);
  FUNC_9(VAR_3, VAR_7);
  FUNC_6(VAR_3, VAR_7, 0);
  FUNC_12(VAR_7);
 }

 FUNC_4(VAR_3);
 FUNC_10(VAR_3);

 if (FUNC_11(VAR_3))
  FUNC_1(&VAR_3->stolen_vga_memory, ((void*)0), &VAR_4);

 FUNC_3(VAR_3);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3);

 return 0;
}
