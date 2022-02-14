
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct pci_probe_table_args {size_t bus; int found; } ;
typedef TYPE_1__* int_entry_ptr ;
struct TYPE_4__ {scalar_t__ bus_type; } ;
struct TYPE_3__ {size_t src_bus_id; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_4, void *VAR_5)
{
 struct pci_probe_table_args *VAR_6;
 int_entry_ptr VAR_7;

 if (*VAR_4 != VAR_0)
  return;
 VAR_7 = (int_entry_ptr)VAR_4;
 VAR_6 = (struct pci_probe_table_args *)VAR_5;
 FUNC_0(VAR_6->bus <= VAR_3,
     ("bus %d is too big", VAR_6->bus));
 FUNC_0(VAR_2[VAR_6->bus].bus_type == VAR_1, ("probing for non-PCI bus"));
 if (VAR_7->src_bus_id == VAR_6->bus)
  VAR_6->found = 1;
}
