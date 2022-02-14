
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega12_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_display_clock_request {int clock_type; int clock_freq_in_khz; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
struct TYPE_2__ {scalar_t__ enabled; } ;
typedef int PPCLK_e ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

int FUNC_2(struct pp_hwmgr *VAR_6,
  struct pp_display_clock_request *VAR_7)
{
 int VAR_8 = 0;
 struct vega12_hwmgr *VAR_9 = (struct vega12_hwmgr *)(VAR_6->backend);
 enum amd_pp_clock_type VAR_10 = VAR_7->clock_type;
 uint32_t VAR_11 = VAR_7->clock_freq_in_khz / 1000;
 PPCLK_e VAR_12 = 0;
 uint32_t VAR_13 = 0;

 if (VAR_9->smu_features[VAR_0].enabled) {
  switch (VAR_10) {
  case 131:
   VAR_12 = VAR_1;
   break;
  case 130:
   VAR_12 = VAR_2;
   break;
  case 128:
   VAR_12 = VAR_4;
   break;
  case 129:
   VAR_12 = VAR_3;
   break;
  default:
   FUNC_0("[DisplayClockVoltageRequest]Invalid Clock Type!");
   VAR_8 = -1;
   break;
  }

  if (!VAR_8) {
   VAR_13 = (VAR_12 << 16) | VAR_11;
   VAR_8 = FUNC_1(VAR_6,
     VAR_5,
     VAR_13);
  }
 }

 return VAR_8;
}
