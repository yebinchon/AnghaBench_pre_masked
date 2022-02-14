
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; } ;
struct TYPE_4__ {TYPE_1__ rlc; int * funcs; int num_compute_rings; int num_gfx_rings; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;

 VAR_5->gfx.num_gfx_rings = VAR_1;
 VAR_5->gfx.num_compute_rings = VAR_0;
 VAR_5->gfx.funcs = &VAR_2;
 VAR_5->gfx.rlc.funcs = &VAR_3;
 FUNC_1(VAR_5);
 FUNC_0(VAR_5);

 return 0;
}
