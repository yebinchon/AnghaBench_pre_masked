
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* FClocks; } ;
struct smu10_hwmgr {int gfx_min_freq_limit; int gfx_max_freq_limit; TYPE_2__ clock_table; } ;
struct pp_hwmgr {int smu_version; TYPE_3__* display_config; struct smu10_hwmgr* backend; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_6__ {int min_core_set_clock; int min_mem_set_clock; int num_display; } ;
struct TYPE_4__ {int Freq; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_16,
    enum amd_dpm_forced_level VAR_17)
{
 struct smu10_hwmgr *VAR_18 = VAR_16->backend;
 uint32_t VAR_19 = VAR_16->display_config->min_core_set_clock;
 uint32_t VAR_20 = VAR_16->display_config->min_mem_set_clock/100;

 if (VAR_16->smu_version < 0x1E3700) {
  FUNC_0("smu firmware version too old, can not set dpm level\n");
  return 0;
 }

 if (VAR_19 < VAR_18->gfx_min_freq_limit)
  VAR_19 = VAR_18->gfx_min_freq_limit;

 VAR_19 /= 100;
 if (VAR_20 < VAR_18->clock_table.FClocks[0].Freq)
  VAR_20 = VAR_18->clock_table.FClocks[0].Freq;

 switch (VAR_17) {
 case 135:
 case 129:
  FUNC_1(VAR_16,
      VAR_1,
      VAR_18->gfx_max_freq_limit/100);
  FUNC_1(VAR_16,
      VAR_0,
      VAR_12);
  FUNC_1(VAR_16,
      VAR_2,
      VAR_13);
  FUNC_1(VAR_16,
      VAR_3,
      VAR_15);

  FUNC_1(VAR_16,
      VAR_5,
      VAR_18->gfx_max_freq_limit/100);
  FUNC_1(VAR_16,
      VAR_4,
      VAR_12);
  FUNC_1(VAR_16,
      VAR_6,
      VAR_13);
  FUNC_1(VAR_16,
      VAR_7,
      VAR_15);
  break;
 case 130:
  FUNC_1(VAR_16,
      VAR_1,
      VAR_19);
  FUNC_1(VAR_16,
      VAR_5,
      VAR_19);
  break;
 case 131:
  FUNC_1(VAR_16,
      VAR_0,
      VAR_20);
  FUNC_1(VAR_16,
      VAR_4,
      VAR_20);
  break;
 case 128:
  FUNC_1(VAR_16,
      VAR_1,
      VAR_9);
  FUNC_1(VAR_16,
      VAR_0,
      VAR_8);
  FUNC_1(VAR_16,
      VAR_2,
      VAR_14);
  FUNC_1(VAR_16,
      VAR_3,
      VAR_15);

  FUNC_1(VAR_16,
      VAR_5,
      VAR_9);
  FUNC_1(VAR_16,
      VAR_4,
      VAR_8);
  FUNC_1(VAR_16,
      VAR_6,
      VAR_14);
  FUNC_1(VAR_16,
      VAR_7,
      VAR_15);
  break;
 case 136:
  FUNC_1(VAR_16,
      VAR_1,
      VAR_19);
  FUNC_1(VAR_16,
      VAR_0,
      VAR_16->display_config->num_display > 3 ?
      VAR_12 :
      VAR_20);

  FUNC_1(VAR_16,
      VAR_2,
      VAR_10);
  FUNC_1(VAR_16,
      VAR_3,
      VAR_11);

  FUNC_1(VAR_16,
      VAR_5,
      VAR_18->gfx_max_freq_limit/100);
  FUNC_1(VAR_16,
      VAR_4,
      VAR_12);
  FUNC_1(VAR_16,
      VAR_6,
      VAR_13);
  FUNC_1(VAR_16,
      VAR_7,
      VAR_15);
  break;
 case 134:
  FUNC_1(VAR_16,
      VAR_1,
      VAR_18->gfx_min_freq_limit/100);
  FUNC_1(VAR_16,
      VAR_5,
      VAR_18->gfx_min_freq_limit/100);
  FUNC_1(VAR_16,
      VAR_0,
      VAR_20);
  FUNC_1(VAR_16,
      VAR_4,
      VAR_20);
  break;
 case 133:
 case 132:
 default:
  break;
 }
 return 0;
}
