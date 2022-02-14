
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_compute_rings; int num_gfx_rings; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;

 VAR_3->gfx.num_gfx_rings = VAR_1;
 VAR_3->gfx.num_compute_rings = VAR_0;

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);

 return 0;
}
