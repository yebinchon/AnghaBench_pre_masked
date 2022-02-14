
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_probe_table_args {int bus; scalar_t__ found; } ;
struct TYPE_2__ {scalar_t__ bus_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct pci_probe_table_args*) ;
 int VAR_7 ;

int
FUNC_1(int VAR_8)
{
 struct pci_probe_table_args VAR_9;

 if (VAR_8 < 0)
  return (VAR_0);
 if (VAR_4 == ((void*)0) || VAR_7 == -1 || VAR_7 + VAR_8 > VAR_5)
  return (VAR_1);
 if (VAR_3[VAR_7 + VAR_8].bus_type != VAR_2)
  return (VAR_1);
 VAR_9.bus = VAR_7 + VAR_8;
 VAR_9.found = 0;
 FUNC_0(VAR_6, &VAR_9);
 if (VAR_9.found == 0)
  return (VAR_1);
 return (0);
}
