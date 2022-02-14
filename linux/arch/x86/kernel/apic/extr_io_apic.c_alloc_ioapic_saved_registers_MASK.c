
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct IO_APIC_route_entry {int dummy; } ;
struct TYPE_2__ {int nr_registers; scalar_t__ saved_registers; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 size_t VAR_3;

 if (VAR_1[VAR_2].saved_registers)
  return;

 VAR_3 = sizeof(struct IO_APIC_route_entry) * VAR_1[VAR_2].nr_registers;
 VAR_1[VAR_2].saved_registers = FUNC_0(VAR_3, VAR_0);
 if (!VAR_1[VAR_2].saved_registers)
  FUNC_1("IOAPIC %d: suspend/resume impossible!\n", VAR_2);
}
