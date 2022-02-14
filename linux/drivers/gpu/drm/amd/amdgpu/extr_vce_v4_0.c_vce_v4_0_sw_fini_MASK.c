
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * saved_bo; } ;
struct TYPE_3__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_2__ vce; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;


 FUNC_2(VAR_3);

 if (VAR_3->firmware.load_type == VAR_0) {
  FUNC_3(VAR_3->vce.saved_bo);
  VAR_3->vce.saved_bo = ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_3);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_3);
}
