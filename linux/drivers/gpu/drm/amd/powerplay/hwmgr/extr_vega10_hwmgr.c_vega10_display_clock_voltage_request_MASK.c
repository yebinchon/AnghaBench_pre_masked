
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct pp_display_clock_request {int clock_type; int clock_freq_in_khz; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
typedef int DSPCLK_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

int FUNC_2(struct pp_hwmgr *VAR_5,
  struct pp_display_clock_request *VAR_6)
{
 int VAR_7 = 0;
 enum amd_pp_clock_type VAR_8 = VAR_6->clock_type;
 uint32_t VAR_9 = VAR_6->clock_freq_in_khz / 1000;
 DSPCLK_e VAR_10 = 0;
 uint32_t VAR_11 = 0;

 switch (VAR_8) {
 case 131:
  VAR_10 = VAR_0;
  break;
 case 130:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_2;
  break;
 default:
  FUNC_0("[DisplayClockVoltageRequest]Invalid Clock Type!");
  VAR_7 = -1;
  break;
 }

 if (!VAR_7) {
  VAR_11 = (VAR_9 << 16) | VAR_10;
  FUNC_1(VAR_5,
    VAR_4,
    VAR_11);
 }

 return VAR_7;
}
