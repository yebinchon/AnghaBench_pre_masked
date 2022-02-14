
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct vega10_single_dpm_table {int count; TYPE_12__* dpm_levels; } ;
struct vega10_pcie_table {int count; int* pcie_gen; } ;
struct vega10_odn_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct TYPE_24__ {int min_vddc; int max_vddc; struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_mclk; struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_sclk; } ;
struct TYPE_20__ {TYPE_4__* dpm_levels; } ;
struct TYPE_18__ {TYPE_2__* dpm_levels; } ;
struct TYPE_21__ {TYPE_5__ mem_table; TYPE_3__ gfx_table; } ;
struct TYPE_14__ {int dcefclk_dpm_key_disabled; int socclk_dpm_key_disabled; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
struct TYPE_13__ {struct vega10_pcie_table pcie_table; struct vega10_single_dpm_table dcef_table; struct vega10_single_dpm_table soc_table; struct vega10_single_dpm_table mem_table; struct vega10_single_dpm_table gfx_table; } ;
struct vega10_hwmgr {TYPE_9__ odn_dpm_table; TYPE_6__ golden_dpm_table; TYPE_11__ registry_data; TYPE_10__ dpm_table; } ;
struct TYPE_22__ {int engineClock; int memoryClock; } ;
struct TYPE_23__ {TYPE_7__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_8__ platform_descriptor; int od_enabled; struct vega10_hwmgr* backend; } ;
typedef enum pp_clock_type { ____Placeholder_pp_clock_type } pp_clock_type ;
struct TYPE_19__ {int value; } ;
struct TYPE_17__ {int value; } ;
struct TYPE_16__ {int clk; int vddc; } ;
struct TYPE_15__ {int value; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_6,
  enum pp_clock_type VAR_7, char *VAR_8)
{
 struct vega10_hwmgr *VAR_9 = VAR_6->backend;
 struct vega10_single_dpm_table *VAR_10 = &(VAR_9->dpm_table.gfx_table);
 struct vega10_single_dpm_table *VAR_11 = &(VAR_9->dpm_table.mem_table);
 struct vega10_single_dpm_table *VAR_12 = &(VAR_9->dpm_table.soc_table);
 struct vega10_single_dpm_table *VAR_13 = &(VAR_9->dpm_table.dcef_table);
 struct vega10_pcie_table *VAR_14 = &(VAR_9->dpm_table.pcie_table);
 struct vega10_odn_clock_voltage_dependency_table *VAR_15 = ((void*)0);

 int VAR_16, VAR_17, VAR_18 = 0;

 switch (VAR_7) {
 case 129:
  if (VAR_9->registry_data.sclk_dpm_key_disabled)
   break;

  FUNC_1(VAR_6, VAR_2);
  VAR_17 = FUNC_0(VAR_6);

  for (VAR_16 = 0; VAR_16 < VAR_10->count; VAR_16++)
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %uMhz %s\n",
     VAR_16, VAR_10->dpm_levels[VAR_16].value / 100,
     (VAR_16 == VAR_17) ? "*" : "");
  break;
 case 131:
  if (VAR_9->registry_data.mclk_dpm_key_disabled)
   break;

  FUNC_1(VAR_6, VAR_5);
  VAR_17 = FUNC_0(VAR_6);

  for (VAR_16 = 0; VAR_16 < VAR_11->count; VAR_16++)
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %uMhz %s\n",
     VAR_16, VAR_11->dpm_levels[VAR_16].value / 100,
     (VAR_16 == VAR_17) ? "*" : "");
  break;
 case 128:
  if (VAR_9->registry_data.socclk_dpm_key_disabled)
   break;

  FUNC_1(VAR_6, VAR_4);
  VAR_17 = FUNC_0(VAR_6);

  for (VAR_16 = 0; VAR_16 < VAR_12->count; VAR_16++)
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %uMhz %s\n",
     VAR_16, VAR_12->dpm_levels[VAR_16].value / 100,
     (VAR_16 == VAR_17) ? "*" : "");
  break;
 case 132:
  if (VAR_9->registry_data.dcefclk_dpm_key_disabled)
   break;

  FUNC_2(VAR_6,
    VAR_1, VAR_0);
  VAR_17 = FUNC_0(VAR_6);

  for (VAR_16 = 0; VAR_16 < VAR_13->count; VAR_16++)
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %uMhz %s\n",
     VAR_16, VAR_13->dpm_levels[VAR_16].value / 100,
     (VAR_13->dpm_levels[VAR_16].value / 100 == VAR_17) ?
     "*" : "");
  break;
 case 130:
  FUNC_1(VAR_6, VAR_3);
  VAR_17 = FUNC_0(VAR_6);

  for (VAR_16 = 0; VAR_16 < VAR_14->count; VAR_16++)
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %s %s\n", VAR_16,
     (VAR_14->pcie_gen[VAR_16] == 0) ? "2.5GT/s, x1" :
     (VAR_14->pcie_gen[VAR_16] == 1) ? "5.0GT/s, x16" :
     (VAR_14->pcie_gen[VAR_16] == 2) ? "8.0GT/s, x16" : "",
     (VAR_16 == VAR_17) ? "*" : "");
  break;
 case 133:
  if (VAR_6->od_enabled) {
   VAR_18 = FUNC_3(VAR_8, "%s:\n", "OD_SCLK");
   VAR_15 = &VAR_9->odn_dpm_table.vdd_dep_on_sclk;
   for (VAR_16 = 0; VAR_16 < VAR_15->count; VAR_16++)
    VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %10uMhz %10umV\n",
     VAR_16, VAR_15->entries[VAR_16].clk / 100,
      VAR_15->entries[VAR_16].vddc);
  }
  break;
 case 135:
  if (VAR_6->od_enabled) {
   VAR_18 = FUNC_3(VAR_8, "%s:\n", "OD_MCLK");
   VAR_15 = &VAR_9->odn_dpm_table.vdd_dep_on_mclk;
   for (VAR_16 = 0; VAR_16 < VAR_15->count; VAR_16++)
    VAR_18 += FUNC_3(VAR_8 + VAR_18, "%d: %10uMhz %10umV\n",
     VAR_16, VAR_15->entries[VAR_16].clk/100,
      VAR_15->entries[VAR_16].vddc);
  }
  break;
 case 134:
  if (VAR_6->od_enabled) {
   VAR_18 = FUNC_3(VAR_8, "%s:\n", "OD_RANGE");
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "SCLK: %7uMHz %10uMHz\n",
    VAR_9->golden_dpm_table.gfx_table.dpm_levels[0].value/100,
    VAR_6->platform_descriptor.overdriveLimit.engineClock/100);
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "MCLK: %7uMHz %10uMHz\n",
    VAR_9->golden_dpm_table.mem_table.dpm_levels[0].value/100,
    VAR_6->platform_descriptor.overdriveLimit.memoryClock/100);
   VAR_18 += FUNC_3(VAR_8 + VAR_18, "VDDC: %7umV %11umV\n",
    VAR_9->odn_dpm_table.min_vddc,
    VAR_9->odn_dpm_table.max_vddc);
  }
  break;
 default:
  break;
 }
 return VAR_18;
}
