
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct smu_context*,int,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct smu_context*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_0,
       enum smu_clk_type VAR_1, uint32_t VAR_2)
{

 int VAR_3 = 0, VAR_4 = 0;
 uint32_t VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 VAR_5 = VAR_2 ? (FUNC_0(VAR_2) - 1) : 0;
 VAR_6 = VAR_2 ? (FUNC_1(VAR_2) - 1) : 0;

 switch (VAR_1) {
 case 132:
 case 130:
 case 129:
 case 131:
 case 128:
 case 134:
 case 133:
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_5, &VAR_7);
  if (VAR_3)
   return VAR_4;

  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_6, &VAR_8);
  if (VAR_3)
   return VAR_4;

  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_7, VAR_8);
  if (VAR_3)
   return VAR_4;
  break;
 default:
  break;
 }

 return VAR_4;
}
