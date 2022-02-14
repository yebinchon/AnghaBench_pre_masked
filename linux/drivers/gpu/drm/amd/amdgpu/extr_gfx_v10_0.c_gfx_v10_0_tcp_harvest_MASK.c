
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_cu_per_sh; int max_shader_engines; int max_sh_per_se; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {scalar_t__ asic_type; int grbm_idx_mutex; TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = VAR_6->gfx.config.max_cu_per_sh >> 1;
 u32 VAR_11, VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;





 u32 VAR_15 = FUNC_2(
  2 * VAR_10 +
  VAR_10 +
  4);





 u32 VAR_16 = FUNC_2(
  2 * VAR_10 +
  2 * VAR_10 +
  4 +
  1);

 if (VAR_6->asic_type == VAR_0 ||
     VAR_6->asic_type == VAR_2 ||
     VAR_6->asic_type == VAR_1) {
  FUNC_5(&VAR_6->grbm_idx_mutex);
  for (VAR_7 = 0; VAR_7 < VAR_6->gfx.config.max_shader_engines; VAR_7++) {
   for (VAR_8 = 0; VAR_8 < VAR_6->gfx.config.max_sh_per_se; VAR_8++) {
    FUNC_4(VAR_6, VAR_7, VAR_8, 0xffffffff);
    VAR_12 = FUNC_3(VAR_6);




    VAR_13 = 0;

    VAR_14 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
     if (!(VAR_12 & (1 << VAR_9))) {
      VAR_13 |= 3 << (2 * VAR_9);
      VAR_14 |= (3 << (2 * VAR_9)) |
       (3 << (2 * (VAR_10 + VAR_9)));
     }
    }

    VAR_11 = FUNC_0(VAR_3, 0, VAR_5);

    VAR_11 &= 0xffffffff << (4 * VAR_10);
    VAR_11 |= (VAR_14 & VAR_16);
    FUNC_1(VAR_3, 0, VAR_5, VAR_11);

    VAR_11 = FUNC_0(VAR_3, 0, VAR_4);

    VAR_11 &= 0xffffffff << (2 * VAR_10);
    VAR_11 |= (VAR_13 & VAR_15);
    FUNC_1(VAR_3, 0, VAR_4, VAR_11);
   }
  }

  FUNC_4(VAR_6, 0xffffffff, 0xffffffff, 0xffffffff);
  FUNC_6(&VAR_6->grbm_idx_mutex);
 }
}
