
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {unsigned long flags; int end; int start; int parent; } ;
struct TYPE_5__ {scalar_t__ m64_segsize; } ;
struct pnv_phb {TYPE_2__ ioda; } ;
struct pci_dev {struct resource* resource; TYPE_3__* bus; } ;
struct pci_controller {struct resource* mem_resources; struct resource io_resource; struct pnv_phb* private_data; } ;
struct pci_bus {struct pci_dev* self; } ;
struct TYPE_6__ {TYPE_1__* self; } ;
struct TYPE_4__ {TYPE_3__* bus; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct pnv_phb*,struct resource*) ;

__attribute__((used)) static void FUNC_3(struct pci_bus *VAR_5,
        unsigned long VAR_6)
{
 struct pci_controller *VAR_7 = FUNC_0(VAR_5);
 struct pnv_phb *VAR_8 = VAR_7->private_data;
 struct pci_dev *VAR_9 = VAR_5->self;
 struct resource *VAR_10, *VAR_11;
 bool VAR_12 = 0;
 int VAR_13;


 if (!FUNC_1(VAR_9->bus) &&
     !FUNC_1(VAR_9->bus->self->bus))
  return;


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_10 = &VAR_9->resource[VAR_3 + VAR_13];
  if (!VAR_10->flags || !VAR_10->parent)
   continue;

  VAR_11 = ((void*)0);
  if (VAR_10->flags & VAR_6 & VAR_0)
   VAR_11 = &VAR_7->io_resource;
  else if (FUNC_2(VAR_8, VAR_10) &&
    (VAR_6 & VAR_2) &&
    VAR_8->ioda.m64_segsize)
   VAR_11 = &VAR_7->mem_resources[1];
  else if (VAR_10->flags & VAR_6 & VAR_1) {
   VAR_11 = &VAR_7->mem_resources[0];
   VAR_12 = 1;
  }

  VAR_10->start = VAR_11->start;
  VAR_10->end = VAR_11->end;
  if (VAR_12) {
   VAR_10->end += 0x10000;
   VAR_10->end -= 0x100000;
  }
 }
}
