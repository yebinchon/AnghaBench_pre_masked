
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int saved_bo; void* cpu_addr; int * vcpu_bo; } ;
struct TYPE_3__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_2__ vce; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,void*,unsigned int) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 int VAR_3;

 if (VAR_2->vce.vcpu_bo == ((void*)0))
  return 0;

 if (VAR_2->firmware.load_type == VAR_0) {
  unsigned VAR_4 = FUNC_0(VAR_2->vce.vcpu_bo);
  void *VAR_5 = VAR_2->vce.cpu_addr;

  FUNC_2(VAR_2->vce.saved_bo, VAR_5, VAR_4);
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2);
}
