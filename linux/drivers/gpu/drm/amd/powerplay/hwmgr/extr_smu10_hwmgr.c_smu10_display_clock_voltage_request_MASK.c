
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct smu10_hwmgr {void* dcf_actual_hard_min_freq; void* f_actual_hard_min_freq; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_display_clock_request {int clock_type; int clock_freq_in_khz; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
typedef int PPSMC_Msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_4,
  struct pp_display_clock_request *VAR_5)
{
 struct smu10_hwmgr *VAR_6 = (struct smu10_hwmgr *)(VAR_4->backend);
 enum amd_pp_clock_type VAR_7 = VAR_5->clock_type;
 uint32_t VAR_8 = VAR_5->clock_freq_in_khz / 1000;
 PPSMC_Msg VAR_9;

 switch (VAR_7) {
 case 130:
  if (VAR_8 == VAR_6->dcf_actual_hard_min_freq)
   return 0;
  VAR_9 = VAR_1;
  VAR_6->dcf_actual_hard_min_freq = VAR_8;
  break;
 case 128:
   VAR_9 = VAR_3;
  break;
 case 129:
  if (VAR_8 == VAR_6->f_actual_hard_min_freq)
   return 0;
  VAR_6->f_actual_hard_min_freq = VAR_8;
  VAR_9 = VAR_2;
  break;
 default:
  FUNC_0("[DisplayClockVoltageRequest]Invalid Clock Type!");
  return -VAR_0;
 }
 FUNC_1(VAR_4, VAR_9, VAR_8);

 return 0;
}
