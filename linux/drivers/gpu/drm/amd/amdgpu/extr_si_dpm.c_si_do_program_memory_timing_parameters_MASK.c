
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct si_ps {int performance_level_count; int * performance_levels; } ;
struct si_power_info {int sram_end; scalar_t__ arb_table_start; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ SMC_SIslands_MCArbDramTimingRegisterSet ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int *,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct si_power_info* FUNC_2 (struct amdgpu_device*) ;
 struct si_ps* FUNC_3 (struct amdgpu_ps*) ;
 int FUNC_4 (struct amdgpu_device*,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_2,
        struct amdgpu_ps *VAR_3,
        unsigned int VAR_4)
{
 struct si_power_info *VAR_5 = FUNC_2(VAR_2);
 struct si_ps *VAR_6 = FUNC_3(VAR_3);
 SMC_SIslands_MCArbDramTimingRegisterSet VAR_7 = { 0 };
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6->performance_level_count; VAR_8++) {
  VAR_9 = FUNC_4(VAR_2, &VAR_6->performance_levels[VAR_8], &VAR_7);
  if (VAR_9)
   break;
  VAR_9 = FUNC_0(VAR_2,
        VAR_5->arb_table_start +
        FUNC_1(VAR_0, VAR_1) +
        sizeof(SMC_SIslands_MCArbDramTimingRegisterSet) * (VAR_4 + VAR_8),
        (u8 *)&VAR_7,
        sizeof(SMC_SIslands_MCArbDramTimingRegisterSet),
        VAR_5->sram_end);
  if (VAR_9)
   break;
 }

 return VAR_9;
}
