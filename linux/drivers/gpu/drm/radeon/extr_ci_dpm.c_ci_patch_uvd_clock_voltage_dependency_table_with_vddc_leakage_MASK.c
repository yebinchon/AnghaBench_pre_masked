
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_uvd_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int v; } ;


 int FUNC_0 (struct radeon_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
           struct radeon_uvd_clock_voltage_dependency_table *VAR_1)
{
 u32 VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
   FUNC_0(VAR_0, &VAR_1->entries[VAR_2].v);
 }
}
