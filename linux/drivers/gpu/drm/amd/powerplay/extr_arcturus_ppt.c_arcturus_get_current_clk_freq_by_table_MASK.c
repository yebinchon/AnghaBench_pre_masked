
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_3__ {int * CurrClock; int AverageSocclkFrequency; int AverageUclkFrequency; int AverageGfxclkFrequency; } ;
typedef TYPE_1__ SmuMetrics_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smu_context*,TYPE_1__*) ;
 int FUNC_1 (struct smu_context*,int) ;
 int FUNC_2 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_4,
           enum smu_clk_type VAR_5,
           uint32_t *VAR_6)
{
 static SmuMetrics_t VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 if (!VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4, VAR_5);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;

 switch (VAR_9) {
 case 130:






  if (FUNC_2(VAR_4, VAR_1))
   *VAR_6 = VAR_7.CurrClock[130];
  else
   *VAR_6 = VAR_7.AverageGfxclkFrequency;
  break;
 case 128:
  if (FUNC_2(VAR_4, VAR_3))
   *VAR_6 = VAR_7.CurrClock[128];
  else
   *VAR_6 = VAR_7.AverageUclkFrequency;
  break;
 case 129:
  if (FUNC_2(VAR_4, VAR_2))
   *VAR_6 = VAR_7.CurrClock[129];
  else
   *VAR_6 = VAR_7.AverageSocclkFrequency;
  break;
 default:
  *VAR_6 = VAR_7.CurrClock[VAR_9];
  break;
 }

 return VAR_8;
}
