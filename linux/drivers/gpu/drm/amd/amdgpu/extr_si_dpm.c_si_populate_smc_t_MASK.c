
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct si_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct rv7xx_power_info {int bsp; int pbsp; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_7__ {TYPE_2__* levels; } ;
struct TYPE_6__ {void* aT; } ;
struct TYPE_5__ {int sclk; } ;
typedef TYPE_3__ SISLANDS_SMC_SWSTATE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int,int,int ,int ,int*,int*) ;
 struct rv7xx_power_info* FUNC_5 (struct amdgpu_device*) ;
 struct si_ps* FUNC_6 (struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_4,
        struct amdgpu_ps *VAR_5,
        SISLANDS_SMC_SWSTATE *VAR_6)
{
 struct rv7xx_power_info *VAR_7 = FUNC_5(VAR_4);
 struct si_ps *VAR_8 = FUNC_6(VAR_5);
 u32 VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14;

 if (VAR_8->performance_level_count >= 9)
  return -VAR_1;

 if (VAR_8->performance_level_count < 2) {
  VAR_9 = FUNC_1(0xffff) | FUNC_0(0);
  VAR_6->levels[0].aT = FUNC_3(VAR_9);
  return 0;
 }

 VAR_6->levels[0].aT = FUNC_3(0);

 for (VAR_13 = 0; VAR_13 <= VAR_8->performance_level_count - 2; VAR_13++) {
  VAR_14 = FUNC_4(
   (50 / VAR_3) * 100 * (VAR_13 + 1),
   100 * VAR_2,
   VAR_8->performance_levels[VAR_13 + 1].sclk,
   VAR_8->performance_levels[VAR_13].sclk,
   &VAR_10,
   &VAR_11);

  if (VAR_14) {
   VAR_11 = (VAR_13 + 1) * 1000 - 50 * VAR_2;
   VAR_10 = (VAR_13 + 1) * 1000 + 50 * VAR_2;
  }

  VAR_9 = FUNC_2(VAR_6->levels[VAR_13].aT) & ~VAR_0;
  VAR_9 |= FUNC_1(VAR_10 * VAR_7->bsp / 20000);
  VAR_6->levels[VAR_13].aT = FUNC_3(VAR_9);

  VAR_12 = (VAR_13 == VAR_8->performance_level_count - 2) ?
   VAR_7->pbsp : VAR_7->bsp;
  VAR_9 = FUNC_1(0xffff) | FUNC_0(VAR_11 * VAR_12 / 20000);
  VAR_6->levels[VAR_13 + 1].aT = FUNC_3(VAR_9);
 }

 return 0;
}
