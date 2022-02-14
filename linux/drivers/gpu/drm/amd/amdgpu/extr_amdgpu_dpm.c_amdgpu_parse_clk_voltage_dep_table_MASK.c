
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct amdgpu_clock_voltage_dependency_table {int count; TYPE_3__* entries; } ;
struct amdgpu_clock_voltage_dependency_entry {int dummy; } ;
struct TYPE_7__ {int clk; int v; } ;
struct TYPE_6__ {int ucClockHigh; int usVoltage; int usClockLow; } ;
struct TYPE_5__ {int ucNumEntries; TYPE_2__* entries; } ;
typedef TYPE_1__ ATOM_PPLIB_Clock_Voltage_Dependency_Table ;
typedef TYPE_2__ ATOM_PPLIB_Clock_Voltage_Dependency_Record ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_clock_voltage_dependency_table *VAR_2,
           ATOM_PPLIB_Clock_Voltage_Dependency_Table *VAR_3)
{
 u32 VAR_4 = VAR_3->ucNumEntries *
  sizeof(struct amdgpu_clock_voltage_dependency_entry);
 int VAR_5;
 ATOM_PPLIB_Clock_Voltage_Dependency_Record *VAR_6;

 VAR_2->entries = FUNC_0(VAR_4, VAR_1);
 if (!VAR_2->entries)
  return -VAR_0;

 VAR_6 = &VAR_3->entries[0];
 for (VAR_5 = 0; VAR_5 < VAR_3->ucNumEntries; VAR_5++) {
  VAR_2->entries[VAR_5].clk = FUNC_1(VAR_6->usClockLow) |
   (VAR_6->ucClockHigh << 16);
  VAR_2->entries[VAR_5].v = FUNC_1(VAR_6->usVoltage);
  VAR_6 = (ATOM_PPLIB_Clock_Voltage_Dependency_Record *)
   ((u8 *)VAR_6 + sizeof(ATOM_PPLIB_Clock_Voltage_Dependency_Record));
 }
 VAR_2->count = VAR_3->ucNumEntries;

 return 0;
}
