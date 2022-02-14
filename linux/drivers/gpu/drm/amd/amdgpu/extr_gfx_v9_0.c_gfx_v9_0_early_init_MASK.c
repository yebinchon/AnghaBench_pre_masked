
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_compute_rings; scalar_t__ num_gfx_rings; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ gfx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;

 if (VAR_4->asic_type == VAR_1)
  VAR_4->gfx.num_gfx_rings = 0;
 else
  VAR_4->gfx.num_gfx_rings = VAR_2;
 VAR_4->gfx.num_compute_rings = VAR_0;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_3(VAR_4);

 return 0;
}
