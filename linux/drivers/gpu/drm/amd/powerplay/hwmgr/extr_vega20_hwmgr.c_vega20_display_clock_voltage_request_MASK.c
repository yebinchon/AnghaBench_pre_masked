
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega20_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_display_clock_request {int clock_type; int clock_freq_in_khz; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
struct TYPE_2__ {scalar_t__ enabled; } ;
typedef int PPCLK_e ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

int FUNC_2(struct pp_hwmgr *VAR_7,
  struct pp_display_clock_request *VAR_8)
{
 int VAR_9 = 0;
 struct vega20_hwmgr *VAR_10 = (struct vega20_hwmgr *)(VAR_7->backend);
 enum amd_pp_clock_type VAR_11 = VAR_8->clock_type;
 uint32_t VAR_12 = VAR_8->clock_freq_in_khz / 1000;
 PPCLK_e VAR_13 = 0;
 uint32_t VAR_14 = 0;

 if (VAR_10->smu_features[VAR_1].enabled) {
  switch (VAR_11) {
  case 131:
   VAR_13 = VAR_2;
   break;
  case 130:
   VAR_13 = VAR_3;
   break;
  case 128:
   VAR_13 = VAR_5;
   break;
  case 129:
   VAR_13 = VAR_4;
   break;
  default:
   FUNC_0("[DisplayClockVoltageRequest]Invalid Clock Type!");
   VAR_9 = -VAR_0;
   break;
  }

  if (!VAR_9) {
   VAR_14 = (VAR_13 << 16) | VAR_12;
   VAR_9 = FUNC_1(VAR_7,
     VAR_6,
     VAR_14);
  }
 }

 return VAR_9;
}
