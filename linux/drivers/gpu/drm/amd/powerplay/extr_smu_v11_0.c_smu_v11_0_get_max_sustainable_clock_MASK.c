
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_context {int pm_enabled; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*,int) ;
 scalar_t__ FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (struct smu_context*,scalar_t__*) ;
 int FUNC_4 (struct smu_context*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct smu_context *VAR_3, uint32_t *VAR_4,
        enum smu_clk_type VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 if (!VAR_3->pm_enabled)
  return VAR_6;

 if ((FUNC_2(VAR_3, VAR_1) < 0) ||
     (FUNC_2(VAR_3, VAR_2) < 0))
  return 0;

 VAR_7 = FUNC_1(VAR_3, VAR_5);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_3, VAR_1,
       VAR_7 << 16);
 if (VAR_6) {
  FUNC_0("[GetMaxSustainableClock] Failed to get max DC clock from SMC!");
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (*VAR_4 != 0)
  return 0;


 VAR_6 = FUNC_4(VAR_3, VAR_2,
       VAR_7 << 16);
 if (VAR_6) {
  FUNC_0("[GetMaxSustainableClock] failed to get max AC clock from SMC!");
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4);

 return VAR_6;
}
