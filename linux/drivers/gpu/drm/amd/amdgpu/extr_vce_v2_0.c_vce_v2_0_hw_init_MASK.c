
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_rings; int * ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*,int,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 int VAR_1, VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_0;

 FUNC_1(VAR_3, 10000, 10000);
 FUNC_3(VAR_3, 1, 0);

 for (VAR_2 = 0; VAR_2 < VAR_3->vce.num_rings; VAR_2++) {
  VAR_1 = FUNC_2(&VAR_3->vce.ring[VAR_2]);
  if (VAR_1)
   return VAR_1;
 }

 FUNC_0("VCE initialized successfully.\n");

 return 0;
}
