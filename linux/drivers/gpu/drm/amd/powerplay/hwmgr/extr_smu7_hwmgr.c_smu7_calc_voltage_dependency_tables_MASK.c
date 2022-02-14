
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct smu7_hwmgr {scalar_t__ vdd_gfx_control; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_voltage_lookup_record {scalar_t__ us_vdd; scalar_t__ us_cac_high; scalar_t__ us_cac_mid; scalar_t__ us_cac_low; } ;
struct phm_ppt_v1_information {int vddgfx_lookup_table; int vddc_lookup_table; TYPE_2__* vdd_dep_on_mclk; TYPE_2__* vdd_dep_on_sclk; } ;
struct TYPE_4__ {size_t count; TYPE_1__* entries; } ;
typedef TYPE_2__ phm_ppt_v1_clock_voltage_dependency_table ;
struct TYPE_3__ {int vdd_offset; scalar_t__ vddgfx; scalar_t__ vddc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,struct phm_ppt_v1_voltage_lookup_record*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 uint8_t VAR_2;
 struct phm_ppt_v1_voltage_lookup_record VAR_3;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct phm_ppt_v1_information *VAR_5 = (struct phm_ppt_v1_information *)(VAR_1->pptable);

 phm_ppt_v1_clock_voltage_dependency_table *VAR_6 = VAR_5->vdd_dep_on_sclk;
 phm_ppt_v1_clock_voltage_dependency_table *VAR_7 = VAR_5->vdd_dep_on_mclk;

 if (VAR_4->vdd_gfx_control == VAR_0) {
  for (VAR_2 = 0; VAR_2 < VAR_6->count; ++VAR_2) {
   if (VAR_6->entries[VAR_2].vdd_offset & (1 << 15))
    VAR_3.us_vdd = VAR_6->entries[VAR_2].vddgfx +
     VAR_6->entries[VAR_2].vdd_offset - 0xFFFF;
   else
    VAR_3.us_vdd = VAR_6->entries[VAR_2].vddgfx +
     VAR_6->entries[VAR_2].vdd_offset;

   VAR_6->entries[VAR_2].vddc =
    VAR_3.us_cac_low = VAR_3.us_cac_mid =
    VAR_3.us_cac_high = VAR_3.us_vdd;

   FUNC_0(VAR_1, VAR_5->vddc_lookup_table, &VAR_3);
  }

  for (VAR_2 = 0; VAR_2 < VAR_7->count; ++VAR_2) {
   if (VAR_7->entries[VAR_2].vdd_offset & (1 << 15))
    VAR_3.us_vdd = VAR_7->entries[VAR_2].vddc +
     VAR_7->entries[VAR_2].vdd_offset - 0xFFFF;
   else
    VAR_3.us_vdd = VAR_7->entries[VAR_2].vddc +
     VAR_7->entries[VAR_2].vdd_offset;

   VAR_7->entries[VAR_2].vddgfx = VAR_3.us_cac_low =
    VAR_3.us_cac_mid = VAR_3.us_cac_high = VAR_3.us_vdd;
   FUNC_0(VAR_1, VAR_5->vddgfx_lookup_table, &VAR_3);
  }
 }
 return 0;
}
