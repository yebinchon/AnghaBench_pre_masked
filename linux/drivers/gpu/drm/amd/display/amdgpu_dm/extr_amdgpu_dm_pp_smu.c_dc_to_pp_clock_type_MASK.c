
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum amd_pp_clock_type FUNC_1(
  enum dm_pp_clock_type VAR_9)
{
 enum amd_pp_clock_type VAR_10 = 0;

 switch (VAR_9) {
 case 133:
  VAR_10 = VAR_2;
  break;
 case 131:
  VAR_10 = VAR_8;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 136:
  VAR_10 = VAR_0;
  break;
 case 135:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_7;
  break;
 case 130:
  VAR_10 = VAR_4;
  break;
 case 134:
  VAR_10 = VAR_6;
  break;
 case 132:
  VAR_10 = VAR_3;
  break;
 default:
  FUNC_0("DM_PPLIB: invalid clock type: %d!\n",
    VAR_9);
  break;
 }

 return VAR_10;
}
