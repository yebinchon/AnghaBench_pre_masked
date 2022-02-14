
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {TYPE_1__** resource; scalar_t__ self; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,...) ;

int FUNC_5(struct pci_bus *VAR_1)
{
 FUNC_0(VAR_1 == ((void*)0));




 if (VAR_1->self) {
  FUNC_4("IO mapping for PCI-PCI bridge %s\n",
    FUNC_2(VAR_1->self));
  FUNC_4("  virt=0x%016llx...0x%016llx\n",
    VAR_1->resource[0]->start + VAR_0,
    VAR_1->resource[0]->end + VAR_0);
  return 0;
 }

 return FUNC_3(FUNC_1(VAR_1));
}
