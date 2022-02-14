
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_sh_per_se; int max_cu_per_sh; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {int grbm_idx_mutex; TYPE_2__ gfx; } ;
struct amdgpu_cu_info {int** bitmap; int** ao_cu_bitmap; int number; int ao_cu_mask; int simd_per_cu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int FUNC_3 (struct amdgpu_device*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_2,
     struct amdgpu_cu_info *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 u32 VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 unsigned VAR_13[4 * 2];

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 FUNC_0(VAR_13, 4, 2);

 FUNC_4(&VAR_2->grbm_idx_mutex);
 for (VAR_4 = 0; VAR_4 < VAR_2->gfx.config.max_shader_engines; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2->gfx.config.max_sh_per_se; VAR_5++) {
   VAR_9 = 1;
   VAR_11 = 0;
   VAR_7 = 0;
   FUNC_2(VAR_2, VAR_4, VAR_5, 0xffffffff);
   if (VAR_4 < 4 && VAR_5 < 2)
    FUNC_3(
     VAR_2, VAR_13[VAR_4 * 2 + VAR_5]);
   VAR_10 = FUNC_1(VAR_2);
   VAR_3->bitmap[VAR_4][VAR_5] = VAR_10;

   for (VAR_6 = 0; VAR_6 < VAR_2->gfx.config.max_cu_per_sh; VAR_6++) {
    if (VAR_10 & VAR_9) {
     if (VAR_7 < VAR_2->gfx.config.max_cu_per_sh)
      VAR_11 |= VAR_9;
     VAR_7++;
    }
    VAR_9 <<= 1;
   }
   VAR_8 += VAR_7;
   if (VAR_4 < 2 && VAR_5 < 2)
    VAR_12 |= (VAR_11 << (VAR_4 * 16 + VAR_5 * 8));
   VAR_3->ao_cu_bitmap[VAR_4][VAR_5] = VAR_11;
  }
 }
 FUNC_2(VAR_2, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_5(&VAR_2->grbm_idx_mutex);

 VAR_3->number = VAR_8;
 VAR_3->ao_cu_mask = VAR_12;
 VAR_3->simd_per_cu = VAR_1;

 return 0;
}
