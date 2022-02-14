
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_2__* pdev; TYPE_1__ firmware; } ;
struct TYPE_4__ {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_2, 0);
  FUNC_3(VAR_2, 0);


  VAR_3 = FUNC_4(VAR_2);
  return VAR_3;
 }

 if (VAR_2->firmware.load_type == VAR_0) {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3)
   return VAR_3;


  if (VAR_1 == 1 && VAR_2->pdev->device == 0x4d)
   FUNC_1(1000);
 }


 FUNC_3(VAR_2, 1);

 FUNC_2(VAR_2, 1);


 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_6(VAR_2);

 return VAR_3;
}
