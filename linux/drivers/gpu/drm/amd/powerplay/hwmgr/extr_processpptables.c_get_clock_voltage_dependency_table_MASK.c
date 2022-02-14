
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct phm_clock_voltage_dependency_table {unsigned long count; TYPE_1__* entries; } ;
struct TYPE_7__ {int ucNumEntries; TYPE_2__* entries; } ;
struct TYPE_6__ {int usVoltage; int usClockLow; scalar_t__ ucClockHigh; } ;
struct TYPE_5__ {unsigned long clk; unsigned long v; } ;
typedef TYPE_3__ ATOM_PPLIB_Clock_Voltage_Dependency_Table ;


 int VAR_0 ;
 int VAR_1 ;
 struct phm_clock_voltage_dependency_table* FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  struct phm_clock_voltage_dependency_table **VAR_3,
  const ATOM_PPLIB_Clock_Voltage_Dependency_Table *VAR_4)
{

 unsigned long VAR_5, VAR_6;
 struct phm_clock_voltage_dependency_table *VAR_7;

 VAR_5 = sizeof(unsigned long) +
  sizeof(struct phm_clock_voltage_dependency_table)
  * VAR_4->ucNumEntries;

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_7->count = (unsigned long)VAR_4->ucNumEntries;

 for (VAR_6 = 0; VAR_6 < VAR_7->count; VAR_6++) {
  VAR_7->entries[VAR_6].clk =
   ((unsigned long)VAR_4->entries[VAR_6].ucClockHigh << 16) |
   FUNC_1(VAR_4->entries[VAR_6].usClockLow);
  VAR_7->entries[VAR_6].v =
   (unsigned long)FUNC_1(VAR_4->entries[VAR_6].usVoltage);
 }

 *VAR_3 = VAR_7;

 return 0;
}
