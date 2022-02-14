
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_3__ {int * CurrClock; } ;
typedef TYPE_1__ SmuMetrics_t ;


 int FUNC_0 (struct smu_context*,TYPE_1__*) ;
 int FUNC_1 (struct smu_context*,int) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_0,
           enum smu_clk_type VAR_1,
           uint32_t *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 SmuMetrics_t VAR_5;

 VAR_3 = FUNC_0(VAR_0, &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = VAR_5.CurrClock[VAR_4];

 return VAR_3;
}
