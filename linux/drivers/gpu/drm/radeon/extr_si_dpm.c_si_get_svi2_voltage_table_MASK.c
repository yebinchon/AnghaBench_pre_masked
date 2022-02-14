
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct atom_voltage_table {size_t count; TYPE_2__* entries; scalar_t__ phase_delay; scalar_t__ mask_low; } ;
struct TYPE_4__ {scalar_t__ smio_low; int value; } ;
struct TYPE_3__ {int v; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct radeon_device *VAR_1,
         struct radeon_clock_voltage_dependency_table *VAR_2,
         struct atom_voltage_table *VAR_3)
{
 u32 VAR_4;

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_3->mask_low = 0;
 VAR_3->phase_delay = 0;

 VAR_3->count = VAR_2->count;
 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  VAR_3->entries[VAR_4].value = VAR_2->entries[VAR_4].v;
  VAR_3->entries[VAR_4].smio_low = 0;
 }

 return 0;
}
