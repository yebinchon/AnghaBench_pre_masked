
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int m64_segsize; int m32_segsize; int io_segsize; } ;
struct pnv_phb {TYPE_2__ ioda; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
struct pci_bus {struct pci_dev* self; } ;
typedef int resource_size_t ;
struct TYPE_3__ {struct pci_dev* self; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static resource_size_t FUNC_3(struct pci_bus *VAR_2,
      unsigned long VAR_3)
{
 struct pci_dev *VAR_4;
 struct pci_controller *VAR_5 = FUNC_0(VAR_2);
 struct pnv_phb *VAR_6 = VAR_5->private_data;
 int VAR_7 = 0;

 VAR_4 = VAR_2->self;
 while (VAR_4) {
  if (FUNC_1(VAR_4) == VAR_1) {
   VAR_7++;
   if (VAR_7 >= 2)
    return 1;
  }

  VAR_4 = VAR_4->bus->self;
 }






 if (VAR_6->ioda.m64_segsize && FUNC_2(VAR_3))
  return VAR_6->ioda.m64_segsize;
 if (VAR_3 & VAR_0)
  return VAR_6->ioda.m32_segsize;

 return VAR_6->ioda.io_segsize;
}
