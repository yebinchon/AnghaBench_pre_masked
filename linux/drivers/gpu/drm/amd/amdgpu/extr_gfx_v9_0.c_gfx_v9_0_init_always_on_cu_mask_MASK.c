
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ max_shader_engines; scalar_t__ max_sh_per_se; scalar_t__ max_cu_per_sh; } ;
struct amdgpu_cu_info {scalar_t__** bitmap; scalar_t__** ao_cu_bitmap; } ;
struct TYPE_4__ {TYPE_1__ config; struct amdgpu_cu_info cu_info; } ;
struct amdgpu_device {int flags; scalar_t__ asic_type; int grbm_idx_mutex; TYPE_2__ gfx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_5)
{
 struct amdgpu_cu_info *VAR_6 = &VAR_5->gfx.cu_info;
 uint32_t VAR_7 = 2;
 uint32_t VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;

 if (VAR_5->flags & VAR_0)
  VAR_8 = 4;
 else if (VAR_5->asic_type == VAR_1)
  VAR_8 = 8;
 else
  VAR_8 = 12;

 FUNC_2(&VAR_5->grbm_idx_mutex);
 for (VAR_9 = 0; VAR_9 < VAR_5->gfx.config.max_shader_engines; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_5->gfx.config.max_sh_per_se; VAR_10++) {
   VAR_12 = 1;
   VAR_13 = 0;
   VAR_14 = 0;
   FUNC_1(VAR_5, VAR_9, VAR_10, 0xffffffff);

   for (VAR_11 = 0; VAR_11 < VAR_5->gfx.config.max_cu_per_sh; VAR_11 ++) {
    if (VAR_6->bitmap[VAR_9][VAR_10] & VAR_12) {
     if (VAR_14 == VAR_7)
      FUNC_0(VAR_2, 0, VAR_4, VAR_13);
     if (VAR_14 < VAR_8)
      VAR_13 |= VAR_12;
     else
      break;
     VAR_14++;
    }
    VAR_12 <<= 1;
   }

   FUNC_0(VAR_2, 0, VAR_3, VAR_13);
   VAR_6->ao_cu_bitmap[VAR_9][VAR_10] = VAR_13;
  }
 }
 FUNC_1(VAR_5, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_3(&VAR_5->grbm_idx_mutex);
}
