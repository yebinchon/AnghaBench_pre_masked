
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rv7xx_power_info {int sram_end; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; int * performance_levels; } ;
struct ni_power_info {scalar_t__ arb_table_start; } ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ SMC_NIslands_MCArbDramTimingRegisterSet ;


 int VAR_0 ;
 int VAR_1 ;
 struct ni_power_info* FUNC_0 (struct radeon_device*) ;
 struct ni_ps* FUNC_1 (struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct radeon_device*,int ,int *,int ,int ) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_2,
        struct radeon_ps *VAR_3,
        unsigned int VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_5(VAR_2);
 struct ni_power_info *VAR_6 = FUNC_0(VAR_2);
 struct ni_ps *VAR_7 = FUNC_1(VAR_3);
 SMC_NIslands_MCArbDramTimingRegisterSet VAR_8 = { 0 };
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_7->performance_level_count; VAR_9++) {
  VAR_10 = FUNC_2(VAR_2, &VAR_7->performance_levels[VAR_9], &VAR_8);
  if (VAR_10)
   break;

  VAR_10 = FUNC_4(VAR_2,
           (u16)(VAR_6->arb_table_start +
          FUNC_3(VAR_0, VAR_1) +
          sizeof(SMC_NIslands_MCArbDramTimingRegisterSet) * (VAR_4 + VAR_9)),
           (u8 *)&VAR_8,
           (u16)sizeof(SMC_NIslands_MCArbDramTimingRegisterSet),
           VAR_5->sram_end);
  if (VAR_10)
   break;
 }
 return VAR_10;
}
