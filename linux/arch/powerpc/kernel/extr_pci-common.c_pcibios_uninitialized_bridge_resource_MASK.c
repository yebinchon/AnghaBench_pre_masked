
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct resource {int flags; int start; } ;
struct pci_dev {int bus; } ;
struct pci_controller {scalar_t__* mem_offset; scalar_t__ io_base_virt; TYPE_1__* mem_resources; } ;
struct pci_bus_region {scalar_t__ start; } ;
struct pci_bus {struct pci_dev* self; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int flags; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (int ,struct pci_bus_region*,struct resource*) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_6,
       struct resource *VAR_7)
{
 struct pci_controller *VAR_8 = FUNC_0(VAR_6);
 struct pci_dev *VAR_9 = VAR_6->self;
 resource_size_t VAR_10;
 struct pci_bus_region VAR_11;
 u16 VAR_12;
 int VAR_13;


 if (FUNC_1(VAR_4))
  return 0;


 if (VAR_7->flags & VAR_0) {
  FUNC_3(VAR_9->bus, &VAR_11, VAR_7);


  if (VAR_11.start != 0)
   return 0;




  FUNC_2(VAR_9, VAR_1, &VAR_12);
  if ((VAR_12 & VAR_3) == 0)
   return 1;





  for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
   if ((VAR_8->mem_resources[VAR_13].flags & VAR_0) &&
       VAR_8->mem_resources[VAR_13].start == VAR_8->mem_offset[VAR_13])
    return 0;
  }




  return 1;
 } else {

  VAR_10 = (unsigned long)VAR_8->io_base_virt - VAR_5;
  if (((VAR_7->start - VAR_10) & 0xfffffffful) != 0)
   return 0;






  FUNC_2(VAR_9, VAR_1, &VAR_12);
  if (VAR_12 & VAR_2)
   return 0;




  return 1;
 }
}
