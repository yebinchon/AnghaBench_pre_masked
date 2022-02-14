
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_rings; int * ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 int VAR_1, VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_0;

 if (FUNC_2(VAR_3))
  VAR_1 = FUNC_3(VAR_3);
 else
  VAR_1 = FUNC_4(VAR_3);
 if (VAR_1)
  return VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_3->vce.num_rings; VAR_2++) {
  VAR_1 = FUNC_1(&VAR_3->vce.ring[VAR_2]);
  if (VAR_1)
   return VAR_1;
 }

 FUNC_0("VCE initialized successfully.\n");

 return 0;
}
