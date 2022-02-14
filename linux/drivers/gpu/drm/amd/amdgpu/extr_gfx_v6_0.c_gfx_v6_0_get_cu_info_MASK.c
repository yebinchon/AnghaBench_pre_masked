
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_cu_per_sh; int max_shader_engines; int max_sh_per_se; } ;
struct amdgpu_cu_info {int** bitmap; int** ao_cu_bitmap; int number; int ao_cu_mask; } ;
struct TYPE_4__ {TYPE_1__ config; struct amdgpu_cu_info cu_info; } ;
struct amdgpu_device {int flags; int grbm_idx_mutex; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int FUNC_3 (struct amdgpu_device*,unsigned int) ;
 int FUNC_4 (struct amdgpu_cu_info*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 = 0;
 u32 VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 struct amdgpu_cu_info *VAR_11 = &VAR_1->gfx.cu_info;
 unsigned VAR_12[4 * 2];
 u32 VAR_13;

 if (VAR_1->flags & VAR_0)
  VAR_13 = 2;
 else
  VAR_13 = VAR_1->gfx.config.max_cu_per_sh;

 FUNC_4(VAR_11, 0, sizeof(*VAR_11));

 FUNC_0(VAR_12, 4, 2);

 FUNC_5(&VAR_1->grbm_idx_mutex);
 for (VAR_2 = 0; VAR_2 < VAR_1->gfx.config.max_shader_engines; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_1->gfx.config.max_sh_per_se; VAR_3++) {
   VAR_7 = 1;
   VAR_9 = 0;
   VAR_5 = 0;
   FUNC_2(VAR_1, VAR_2, VAR_3, 0xffffffff);
   if (VAR_2 < 4 && VAR_3 < 2)
    FUNC_3(
     VAR_1, VAR_12[VAR_2 * 2 + VAR_3]);
   VAR_8 = FUNC_1(VAR_1);
   VAR_11->bitmap[VAR_2][VAR_3] = VAR_8;

   for (VAR_4 = 0; VAR_4 < VAR_1->gfx.config.max_cu_per_sh; VAR_4++) {
    if (VAR_8 & VAR_7) {
     if (VAR_5 < VAR_13)
      VAR_9 |= VAR_7;
     VAR_5 ++;
    }
    VAR_7 <<= 1;
   }
   VAR_6 += VAR_5;
   if (VAR_2 < 2 && VAR_3 < 2)
    VAR_10 |= (VAR_9 << (VAR_2 * 16 + VAR_3 * 8));
   VAR_11->ao_cu_bitmap[VAR_2][VAR_3] = VAR_9;
  }
 }

 FUNC_2(VAR_1, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_6(&VAR_1->grbm_idx_mutex);

 VAR_11->number = VAR_6;
 VAR_11->ao_cu_mask = VAR_10;
}
