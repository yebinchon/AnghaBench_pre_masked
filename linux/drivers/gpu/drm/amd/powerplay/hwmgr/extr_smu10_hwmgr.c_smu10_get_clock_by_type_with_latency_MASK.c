
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct smu10_voltage_dependency_table {scalar_t__ count; TYPE_2__* entries; } ;
struct smu10_clock_voltage_information {struct smu10_voltage_dependency_table* vdd_dep_on_dppclk; struct smu10_voltage_dependency_table* vdd_dep_on_phyclk; struct smu10_voltage_dependency_table* vdd_dep_on_dispclk; struct smu10_voltage_dependency_table* vdd_dep_on_dcefclk; struct smu10_voltage_dependency_table* vdd_dep_on_fclk; struct smu10_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct smu10_hwmgr {struct smu10_clock_voltage_information clock_vol_info; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_clock_levels_with_latency {scalar_t__ num_levels; TYPE_1__* data; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
struct TYPE_4__ {int clk; } ;
struct TYPE_3__ {int clocks_in_khz; int latency_in_us; } ;


 int VAR_0 ;






 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1,
  enum amd_pp_clock_type VAR_2,
  struct pp_clock_levels_with_latency *VAR_3)
{
 uint32_t VAR_4;
 struct smu10_hwmgr *VAR_5 = (struct smu10_hwmgr *)(VAR_1->backend);
 struct smu10_clock_voltage_information *VAR_6 = &(VAR_5->clock_vol_info);
 struct smu10_voltage_dependency_table *VAR_7;
 bool VAR_8 = 0;

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 switch (VAR_2) {
 case 129:
  VAR_7 = VAR_6->vdd_dep_on_mclk;
  VAR_8 = 1;
  break;
 case 130:
  VAR_7 = VAR_6->vdd_dep_on_fclk;
  VAR_8 = 1;
  break;
 case 133:
  VAR_7 = VAR_6->vdd_dep_on_dcefclk;
  break;
 case 132:
  VAR_7 = VAR_6->vdd_dep_on_dispclk;
  break;
 case 128:
  VAR_7 = VAR_6->vdd_dep_on_phyclk;
  break;
 case 131:
  VAR_7 = VAR_6->vdd_dep_on_dppclk;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7 == ((void*)0) || VAR_7->count == 0)
  return -VAR_0;

 VAR_3->num_levels = 0;
 for (VAR_4 = 0; VAR_4 < VAR_7->count; VAR_4++) {
  VAR_3->data[VAR_4].clocks_in_khz = VAR_7->entries[VAR_4].clk * 10;
  VAR_3->data[VAR_4].latency_in_us = VAR_8 ?
      FUNC_0(VAR_1,
      VAR_7->entries[VAR_4].clk) :
      0;
  VAR_3->num_levels++;
 }

 return 0;
}
