
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_rings; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (FUNC_0(VAR_1))
  VAR_1->vce.num_rings = 1;
 else
  VAR_1->vce.num_rings = 3;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
