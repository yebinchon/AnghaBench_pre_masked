
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct smu8_power_state {unsigned int level; TYPE_4__* levels; } ;
struct TYPE_8__ {int hardwareActivityPerformanceLevels; int platformCaps; } ;
struct TYPE_6__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; TYPE_1__ dyn_state; } ;
struct pp_hw_power_state {int dummy; } ;
struct phm_clock_voltage_dependency_table {TYPE_2__* entries; } ;
struct TYPE_10__ {size_t index; } ;
struct TYPE_9__ {size_t vddcIndex; int dsDividerIndex; int ssDividerIndex; int engineClock; } ;
struct TYPE_7__ {scalar_t__ v; int clk; } ;
typedef TYPE_5__ ATOM_PPLIB_CZ_CLOCK_INFO ;


 int VAR_0 ;
 struct smu8_power_state* FUNC_0 (struct pp_hw_power_state*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(
           struct pp_hwmgr *VAR_1,
        struct pp_hw_power_state *VAR_2,
         unsigned int VAR_3,
           const void *VAR_4)
{
 struct smu8_power_state *VAR_5 = FUNC_0(VAR_2);

 const ATOM_PPLIB_CZ_CLOCK_INFO *VAR_6 = VAR_4;

 struct phm_clock_voltage_dependency_table *VAR_7 =
        VAR_1->dyn_state.vddc_dependency_on_sclk;
 uint8_t VAR_8 = VAR_6->index;

 if (VAR_8 > (uint8_t)(VAR_1->platform_descriptor.hardwareActivityPerformanceLevels - 1))
  VAR_8 = (uint8_t)(VAR_1->platform_descriptor.hardwareActivityPerformanceLevels - 1);

 VAR_5->levels[VAR_3].engineClock = VAR_7->entries[VAR_8].clk;
 VAR_5->levels[VAR_3].vddcIndex = (uint8_t)VAR_7->entries[VAR_8].v;

 VAR_5->level = VAR_3 + 1;

 if (FUNC_1(VAR_1->platform_descriptor.platformCaps, VAR_0)) {
  VAR_5->levels[VAR_3].dsDividerIndex = 5;
  VAR_5->levels[VAR_3].ssDividerIndex = 5;
 }

 return 0;
}
