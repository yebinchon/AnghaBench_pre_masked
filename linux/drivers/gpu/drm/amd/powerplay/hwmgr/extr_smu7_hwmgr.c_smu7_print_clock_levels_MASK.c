
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
struct smu7_single_dpm_table {int count; TYPE_10__* dpm_levels; } ;
struct phm_odn_clock_levels {int num_of_pl; TYPE_1__* entries; } ;
struct smu7_odn_dpm_table {int min_vddc; int max_vddc; struct phm_odn_clock_levels odn_memory_clock_dpm_levels; struct phm_odn_clock_levels odn_core_clock_dpm_levels; } ;
struct TYPE_16__ {TYPE_4__* dpm_levels; } ;
struct TYPE_14__ {TYPE_2__* dpm_levels; } ;
struct TYPE_17__ {TYPE_5__ mclk_table; TYPE_3__ sclk_table; } ;
struct TYPE_20__ {struct smu7_single_dpm_table pcie_speed_table; struct smu7_single_dpm_table mclk_table; struct smu7_single_dpm_table sclk_table; } ;
struct smu7_hwmgr {struct smu7_odn_dpm_table odn_dpm_table; TYPE_6__ golden_dpm_table; TYPE_9__ dpm_table; } ;
struct TYPE_18__ {int engineClock; int memoryClock; } ;
struct TYPE_19__ {TYPE_7__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_8__ platform_descriptor; int od_enabled; int device; scalar_t__ backend; } ;
typedef enum pp_clock_type { ____Placeholder_pp_clock_type } pp_clock_type ;
struct TYPE_15__ {int value; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int clock; int vddc; } ;
struct TYPE_11__ {int value; } ;





 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_3,
  enum pp_clock_type VAR_4, char *VAR_5)
{
 struct smu7_hwmgr *VAR_6 = (struct smu7_hwmgr *)(VAR_3->backend);
 struct smu7_single_dpm_table *VAR_7 = &(VAR_6->dpm_table.sclk_table);
 struct smu7_single_dpm_table *VAR_8 = &(VAR_6->dpm_table.mclk_table);
 struct smu7_single_dpm_table *VAR_9 = &(VAR_6->dpm_table.pcie_speed_table);
 struct smu7_odn_dpm_table *VAR_10 = &(VAR_6->odn_dpm_table);
 struct phm_odn_clock_levels *VAR_11 = &(VAR_10->odn_core_clock_dpm_levels);
 struct phm_odn_clock_levels *VAR_12 = &(VAR_10->odn_memory_clock_dpm_levels);
 int VAR_13, VAR_14, VAR_15 = 0;
 uint32_t VAR_16, VAR_17;

 switch (VAR_4) {
 case 128:
  FUNC_2(VAR_3, VAR_1);
  VAR_16 = FUNC_0(VAR_3->device, VAR_2);

  for (VAR_13 = 0; VAR_13 < VAR_7->count; VAR_13++) {
   if (VAR_16 > VAR_7->dpm_levels[VAR_13].value)
    continue;
   break;
  }
  VAR_14 = VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_7->count; VAR_13++)
   VAR_15 += FUNC_3(VAR_5 + VAR_15, "%d: %uMhz %s\n",
     VAR_13, VAR_7->dpm_levels[VAR_13].value / 100,
     (VAR_13 == VAR_14) ? "*" : "");
  break;
 case 130:
  FUNC_2(VAR_3, VAR_0);
  VAR_16 = FUNC_0(VAR_3->device, VAR_2);

  for (VAR_13 = 0; VAR_13 < VAR_8->count; VAR_13++) {
   if (VAR_16 > VAR_8->dpm_levels[VAR_13].value)
    continue;
   break;
  }
  VAR_14 = VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_8->count; VAR_13++)
   VAR_15 += FUNC_3(VAR_5 + VAR_15, "%d: %uMhz %s\n",
     VAR_13, VAR_8->dpm_levels[VAR_13].value / 100,
     (VAR_13 == VAR_14) ? "*" : "");
  break;
 case 129:
  VAR_17 = FUNC_1(VAR_3);
  for (VAR_13 = 0; VAR_13 < VAR_9->count; VAR_13++) {
   if (VAR_17 != VAR_9->dpm_levels[VAR_13].value)
    continue;
   break;
  }
  VAR_14 = VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_9->count; VAR_13++)
   VAR_15 += FUNC_3(VAR_5 + VAR_15, "%d: %s %s\n", VAR_13,
     (VAR_9->dpm_levels[VAR_13].value == 0) ? "2.5GT/s, x8" :
     (VAR_9->dpm_levels[VAR_13].value == 1) ? "5.0GT/s, x16" :
     (VAR_9->dpm_levels[VAR_13].value == 2) ? "8.0GT/s, x16" : "",
     (VAR_13 == VAR_14) ? "*" : "");
  break;
 case 131:
  if (VAR_3->od_enabled) {
   VAR_15 = FUNC_3(VAR_5, "%s:\n", "OD_SCLK");
   for (VAR_13 = 0; VAR_13 < VAR_11->num_of_pl; VAR_13++)
    VAR_15 += FUNC_3(VAR_5 + VAR_15, "%d: %10uMHz %10umV\n",
     VAR_13, VAR_11->entries[VAR_13].clock/100,
     VAR_11->entries[VAR_13].vddc);
  }
  break;
 case 133:
  if (VAR_3->od_enabled) {
   VAR_15 = FUNC_3(VAR_5, "%s:\n", "OD_MCLK");
   for (VAR_13 = 0; VAR_13 < VAR_12->num_of_pl; VAR_13++)
    VAR_15 += FUNC_3(VAR_5 + VAR_15, "%d: %10uMHz %10umV\n",
     VAR_13, VAR_12->entries[VAR_13].clock/100,
     VAR_12->entries[VAR_13].vddc);
  }
  break;
 case 132:
  if (VAR_3->od_enabled) {
   VAR_15 = FUNC_3(VAR_5, "%s:\n", "OD_RANGE");
   VAR_15 += FUNC_3(VAR_5 + VAR_15, "SCLK: %7uMHz %10uMHz\n",
    VAR_6->golden_dpm_table.sclk_table.dpm_levels[0].value/100,
    VAR_3->platform_descriptor.overdriveLimit.engineClock/100);
   VAR_15 += FUNC_3(VAR_5 + VAR_15, "MCLK: %7uMHz %10uMHz\n",
    VAR_6->golden_dpm_table.mclk_table.dpm_levels[0].value/100,
    VAR_3->platform_descriptor.overdriveLimit.memoryClock/100);
   VAR_15 += FUNC_3(VAR_5 + VAR_15, "VDDC: %7umV %11umV\n",
    VAR_6->odn_dpm_table.min_vddc,
    VAR_6->odn_dpm_table.max_vddc);
  }
  break;
 default:
  break;
 }
 return VAR_15;
}
