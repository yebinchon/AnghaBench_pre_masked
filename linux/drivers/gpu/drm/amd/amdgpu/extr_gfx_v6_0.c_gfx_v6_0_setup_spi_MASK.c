
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_sh_per_se; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {int grbm_idx_mutex; TYPE_2__ gfx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int,int,int) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5, VAR_6;
 u32 VAR_7 = 0;

 FUNC_4(&VAR_1->grbm_idx_mutex);
 for (VAR_2 = 0; VAR_2 < VAR_1->gfx.config.max_shader_engines; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_1->gfx.config.max_sh_per_se; VAR_3++) {
   FUNC_3(VAR_1, VAR_2, VAR_3, 0xffffffff);
   VAR_5 = FUNC_0(VAR_0);
   VAR_7 = FUNC_2(VAR_1);

   VAR_6 = 1;
   for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
    VAR_6 <<= VAR_4;
    if (VAR_7 & VAR_6) {
     VAR_5 &= ~VAR_6;
     FUNC_1(VAR_0, VAR_5);
     break;
    }
   }
  }
 }
 FUNC_3(VAR_1, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_5(&VAR_1->grbm_idx_mutex);
}
