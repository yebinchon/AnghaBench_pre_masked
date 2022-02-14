
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kv_reset_save_regs {int member_0; } ;
struct amdgpu_device {int flags; scalar_t__ usec_timeout; int has_hw_reset; int pdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct amdgpu_device*,struct kv_reset_save_regs*) ;
 int FUNC_4 (struct amdgpu_device*,struct kv_reset_save_regs*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_3)
{
 struct kv_reset_save_regs VAR_4 = { 0 };
 u32 VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_2(VAR_3->dev, "GPU pci config reset\n");

 if (VAR_3->flags & VAR_0)
  FUNC_4(VAR_3, &VAR_4);


 FUNC_5(VAR_3->pdev);

 FUNC_1(VAR_3);

 FUNC_7(100);


 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  if (FUNC_0(VAR_2) != 0xffffffff) {

   FUNC_6(VAR_3->pdev);
   VAR_3->has_hw_reset = 1;
   VAR_6 = 0;
   break;
  }
  FUNC_7(1);
 }


 if (VAR_3->flags & VAR_0)
  FUNC_3(VAR_3, &VAR_4);

 return VAR_6;
}
