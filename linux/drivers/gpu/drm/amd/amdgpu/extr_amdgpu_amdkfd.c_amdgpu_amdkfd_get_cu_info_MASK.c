
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kgd_dev {int dummy; } ;
struct kfd_cu_info {int lds_size; int max_scratch_slots_per_cu; int wave_front_size; int max_waves_per_simd; int simd_per_cu; int num_cu_per_sh; int num_shader_arrays_per_engine; int num_shader_engines; int * cu_bitmap; int cu_ao_mask; int cu_active_number; } ;
struct TYPE_3__ {int max_cu_per_sh; int max_sh_per_se; int max_shader_engines; } ;
struct amdgpu_cu_info {int lds_size; int max_scratch_slots_per_cu; int wave_front_size; int max_waves_per_simd; int simd_per_cu; int * bitmap; int ao_cu_mask; int number; } ;
struct TYPE_4__ {TYPE_1__ config; struct amdgpu_cu_info cu_info; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct kfd_cu_info*,int ,int) ;

void FUNC_2(struct kgd_dev *VAR_0, struct kfd_cu_info *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;
 struct amdgpu_cu_info VAR_3 = VAR_2->gfx.cu_info;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 if (sizeof(VAR_1->cu_bitmap) != sizeof(VAR_3.bitmap))
  return;

 VAR_1->cu_active_number = VAR_3.number;
 VAR_1->cu_ao_mask = VAR_3.ao_cu_mask;
 FUNC_0(&VAR_1->cu_bitmap[0], &VAR_3.bitmap[0],
        sizeof(VAR_3.bitmap));
 VAR_1->num_shader_engines = VAR_2->gfx.config.max_shader_engines;
 VAR_1->num_shader_arrays_per_engine = VAR_2->gfx.config.max_sh_per_se;
 VAR_1->num_cu_per_sh = VAR_2->gfx.config.max_cu_per_sh;
 VAR_1->simd_per_cu = VAR_3.simd_per_cu;
 VAR_1->max_waves_per_simd = VAR_3.max_waves_per_simd;
 VAR_1->wave_front_size = VAR_3.wave_front_size;
 VAR_1->max_scratch_slots_per_cu = VAR_3.max_scratch_slots_per_cu;
 VAR_1->lds_size = VAR_3.lds_size;
}
