
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_backends_per_se; int max_sh_per_se; int max_shader_engines; int backend_enable_mask; int num_rbs; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; int grbm_idx_mutex; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2;
 u32 VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5 = VAR_0->gfx.config.max_backends_per_se /
     VAR_0->gfx.config.max_sh_per_se;

 FUNC_3(&VAR_0->grbm_idx_mutex);
 for (VAR_1 = 0; VAR_1 < VAR_0->gfx.config.max_shader_engines; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->gfx.config.max_sh_per_se; VAR_2++) {
   FUNC_1(VAR_0, VAR_1, VAR_2, 0xffffffff);
   VAR_3 = FUNC_0(VAR_0);
   VAR_4 |= VAR_3 << ((VAR_1 * VAR_0->gfx.config.max_sh_per_se + VAR_2) *
            VAR_5);
  }
 }
 FUNC_1(VAR_0, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_4(&VAR_0->grbm_idx_mutex);

 VAR_0->gfx.config.backend_enable_mask = VAR_4;
 VAR_0->gfx.config.num_rbs = FUNC_2(VAR_4);
}
