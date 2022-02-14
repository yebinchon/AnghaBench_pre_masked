
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct smu8_sys_info {int * nbp_memory_clock; } ;
struct smu8_hwmgr {struct smu8_sys_info sys_info; } ;
struct TYPE_3__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_2__* entries; } ;
struct phm_clock_and_voltage_limits {int mclk; int vddc; int sclk; } ;
struct TYPE_4__ {scalar_t__ v; int clk; } ;


 int FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
   struct phm_clock_and_voltage_limits *VAR_1)
{
 struct smu8_hwmgr *VAR_2 = VAR_0->backend;
 struct smu8_sys_info *VAR_3 = &VAR_2->sys_info;
 struct phm_clock_voltage_dependency_table *VAR_4 =
    VAR_0->dyn_state.vddc_dependency_on_sclk;

 if (VAR_4->count > 0) {
  VAR_1->sclk = VAR_4->entries[VAR_4->count-1].clk;
  VAR_1->vddc = FUNC_0(VAR_0,
     (uint16_t)VAR_4->entries[VAR_4->count-1].v);
 }
 VAR_1->mclk = VAR_3->nbp_memory_clock[0];
 return 0;
}
