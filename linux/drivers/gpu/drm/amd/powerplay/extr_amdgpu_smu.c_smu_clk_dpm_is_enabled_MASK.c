
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
typedef enum smu_feature_mask { ____Placeholder_smu_feature_mask } smu_feature_mask ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct smu_context*,int) ;

bool FUNC_1(struct smu_context *VAR_3, enum smu_clk_type VAR_4)
{
 enum smu_feature_mask VAR_5 = 0;

 switch (VAR_4) {
 case 131:
 case 128:
  VAR_5 = VAR_2;
  break;
 case 132:
 case 130:
  VAR_5 = VAR_0;
  break;
 case 129:
  VAR_5 = VAR_1;
  break;
 default:
  return 1;
 }

 if(!FUNC_0(VAR_3, VAR_5)) {
  return 0;
 }

 return 1;
}
