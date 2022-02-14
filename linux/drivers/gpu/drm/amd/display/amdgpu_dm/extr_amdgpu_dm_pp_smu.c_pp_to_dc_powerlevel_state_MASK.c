
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dm_pp_clocks_state { ____Placeholder_dm_pp_clocks_state } dm_pp_clocks_state ;
typedef enum PP_DAL_POWERLEVEL { ____Placeholder_PP_DAL_POWERLEVEL } PP_DAL_POWERLEVEL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;
__attribute__((used)) static enum dm_pp_clocks_state FUNC_1(
   enum PP_DAL_POWERLEVEL VAR_9)
{
 switch (VAR_9) {
 case 135:
  return VAR_0;
 case 134:
  return VAR_1;
 case 133:
  return VAR_2;
 case 132:
  return VAR_3;
 case 131:
  return VAR_4;
 case 130:
  return VAR_5;
 case 129:
  return VAR_6;
 case 128:
  return VAR_7;
 default:
  FUNC_0("DM_PPLIB: invalid powerlevel state: %d!\n",
    VAR_9);
  return VAR_8;
 }
}
