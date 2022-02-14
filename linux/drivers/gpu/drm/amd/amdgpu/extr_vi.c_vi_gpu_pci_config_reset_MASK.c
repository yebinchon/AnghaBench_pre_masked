
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {scalar_t__ usec_timeout; int has_hw_reset; int pdev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_2)
{
 u32 VAR_3;

 FUNC_2(VAR_2->dev, "GPU pci config reset\n");


 FUNC_3(VAR_2->pdev);

 FUNC_1(VAR_2);

 FUNC_5(100);


 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {
  if (FUNC_0(VAR_1) != 0xffffffff) {

   FUNC_4(VAR_2->pdev);
   VAR_2->has_hw_reset = 1;
   return 0;
  }
  FUNC_5(1);
 }
 return -VAR_0;
}
