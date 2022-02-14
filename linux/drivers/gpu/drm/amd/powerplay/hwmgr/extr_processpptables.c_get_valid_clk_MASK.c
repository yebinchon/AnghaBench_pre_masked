
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct phm_clock_array {unsigned long count; unsigned long* values; } ;
struct TYPE_2__ {scalar_t__ clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phm_clock_array* FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2,
   struct phm_clock_array **VAR_3,
   const struct phm_clock_voltage_dependency_table *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 struct phm_clock_array *VAR_7;

 VAR_5 = sizeof(unsigned long) + sizeof(unsigned long) * VAR_4->count;
 VAR_7 = FUNC_0(VAR_5, VAR_1);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_7->count = (unsigned long)VAR_4->count;

 for (VAR_6 = 0; VAR_6 < VAR_7->count; VAR_6++)
  VAR_7->values[VAR_6] = (unsigned long)VAR_4->entries[VAR_6].clk;

 *VAR_3 = VAR_7;

 return 0;
}
