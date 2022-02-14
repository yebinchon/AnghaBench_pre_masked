
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long start; unsigned long end; } ;
struct pci_controller {unsigned long pci_io_size; struct resource* mem_resources; scalar_t__ io_base_virt; } ;
struct iowa_bus {struct pci_controller* phb; } ;


 int VAR_0 ;
 struct iowa_bus* VAR_1 ;

__attribute__((used)) static struct iowa_bus *FUNC_0(unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4, VAR_5;
 struct resource *VAR_6;
 unsigned long VAR_7, VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct iowa_bus *VAR_9 = &VAR_1[VAR_4];
  struct pci_controller *VAR_10 = VAR_9->phb;

  if (VAR_2) {
   VAR_7 = (unsigned long)VAR_10->io_base_virt;
   VAR_8 = VAR_7 + VAR_10->pci_io_size - 1;
   if ((VAR_2 >= VAR_7) && (VAR_2 <= VAR_8))
    return VAR_9;
  }

  if (VAR_3)
   for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
    VAR_6 = &VAR_10->mem_resources[VAR_5];
    if (VAR_3 >= VAR_6->start && VAR_3 <= VAR_6->end)
     return VAR_9;
   }
 }

 return ((void*)0);
}
