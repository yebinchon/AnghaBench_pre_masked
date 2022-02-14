
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega20_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct smu_context {int dummy; } ;
struct TYPE_2__ {int value; int enabled; } ;
typedef int PPCLK_e ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*,int*) ;
 int FUNC_2 (struct smu_context*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct smu_context *VAR_2,
       struct vega20_single_dpm_table *VAR_3,
       PPCLK_e VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6, VAR_7 = 0, VAR_8;

 VAR_5 = FUNC_2(VAR_2,
   VAR_1,
   (VAR_4 << 16 | 0xFF));
 if (VAR_5) {
  FUNC_0("[GetNumOfDpmLevel] failed to get dpm levels!");
  return VAR_5;
 }

 FUNC_1(VAR_2, &VAR_7);
 if (!VAR_7) {
  FUNC_0("[GetNumOfDpmLevel] number of clk levels is invalid!");
  return -VAR_0;
 }

 VAR_3->count = VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = FUNC_2(VAR_2,
    VAR_1,
    (VAR_4 << 16 | VAR_6));
  if (VAR_5) {
   FUNC_0("[GetDpmFreqByIndex] failed to get dpm freq by index!");
   return VAR_5;
  }
  FUNC_1(VAR_2, &VAR_8);
  if (!VAR_8) {
   FUNC_0("[GetDpmFreqByIndex] clk value is invalid!");
   return -VAR_0;
  }
  VAR_3->dpm_levels[VAR_6].value = VAR_8;
  VAR_3->dpm_levels[VAR_6].enabled = 1;
 }
 return 0;
}
