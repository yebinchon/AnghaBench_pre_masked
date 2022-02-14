
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_cu_per_sh; int max_shader_engines; int max_sh_per_se; } ;
struct amdgpu_cu_info {int** bitmap; int** ao_cu_bitmap; int number; int ao_cu_mask; int max_waves_per_simd; int max_scratch_slots_per_cu; int wave_front_size; int lds_size; int simd_per_cu; } ;
struct TYPE_4__ {TYPE_1__ config; struct amdgpu_cu_info cu_info; } ;
struct amdgpu_device {int flags; int grbm_idx_mutex; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int FUNC_3 (struct amdgpu_device*,unsigned int) ;
 int FUNC_4 (struct amdgpu_cu_info*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 struct amdgpu_cu_info *VAR_12 = &VAR_2->gfx.cu_info;
 unsigned VAR_13[4 * 2];
 u32 VAR_14;

 if (VAR_2->flags & VAR_0)
  VAR_14 = 2;
 else
  VAR_14 = VAR_2->gfx.config.max_cu_per_sh;

 FUNC_4(VAR_12, 0, sizeof(*VAR_12));

 FUNC_0(VAR_13, 4, 2);

 FUNC_5(&VAR_2->grbm_idx_mutex);
 for (VAR_3 = 0; VAR_3 < VAR_2->gfx.config.max_shader_engines; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_2->gfx.config.max_sh_per_se; VAR_4++) {
   VAR_8 = 1;
   VAR_10 = 0;
   VAR_6 = 0;
   FUNC_2(VAR_2, VAR_3, VAR_4, 0xffffffff);
   if (VAR_3 < 4 && VAR_4 < 2)
    FUNC_3(
     VAR_2, VAR_13[VAR_3 * 2 + VAR_4]);
   VAR_9 = FUNC_1(VAR_2);
   VAR_12->bitmap[VAR_3][VAR_4] = VAR_9;

   for (VAR_5 = 0; VAR_5 < VAR_2->gfx.config.max_cu_per_sh; VAR_5 ++) {
    if (VAR_9 & VAR_8) {
     if (VAR_6 < VAR_14)
      VAR_10 |= VAR_8;
     VAR_6 ++;
    }
    VAR_8 <<= 1;
   }
   VAR_7 += VAR_6;
   if (VAR_3 < 2 && VAR_4 < 2)
    VAR_11 |= (VAR_10 << (VAR_3 * 16 + VAR_4 * 8));
   VAR_12->ao_cu_bitmap[VAR_3][VAR_4] = VAR_10;
  }
 }
 FUNC_2(VAR_2, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_6(&VAR_2->grbm_idx_mutex);

 VAR_12->number = VAR_7;
 VAR_12->ao_cu_mask = VAR_11;
 VAR_12->simd_per_cu = VAR_1;
 VAR_12->max_waves_per_simd = 10;
 VAR_12->max_scratch_slots_per_cu = 32;
 VAR_12->wave_front_size = 64;
 VAR_12->lds_size = 64;
}
