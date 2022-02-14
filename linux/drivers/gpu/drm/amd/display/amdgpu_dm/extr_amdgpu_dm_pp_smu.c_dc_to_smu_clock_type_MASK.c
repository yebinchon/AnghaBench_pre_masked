
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;







 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum smu_clk_type FUNC_1(
  enum dm_pp_clock_type VAR_6)
{
 enum smu_clk_type VAR_7 = VAR_0;

 switch (VAR_6) {
 case 131:
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_7 = VAR_3;
  break;
 case 129:
  VAR_7 = VAR_4;
  break;
 case 132:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_5;
  break;
 default:
  FUNC_0("DM_PPLIB: invalid clock type: %d!\n",
     VAR_6);
  break;
 }

 return VAR_7;
}
