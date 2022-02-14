
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; } ;
struct resource {int flags; int start; } ;
struct pci_dev {int sysdata; int bus; struct resource* resource; } ;
struct pci_bus_region {int start; } ;
struct kobject {int dummy; } ;
struct bin_attribute {struct resource* private; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int,struct vm_area_struct*,int) ;
 int FUNC_1 (int ,struct vm_area_struct*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kobject*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,struct pci_bus_region*,struct resource*) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct kobject *VAR_7,
        struct bin_attribute *VAR_8,
        struct vm_area_struct *VAR_9, int VAR_10)
{
 struct pci_dev *VAR_11 = FUNC_5(FUNC_3(VAR_7));
 struct resource *VAR_12 = VAR_8->private;
 enum pci_mmap_state VAR_13;
 struct pci_bus_region VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
  if (VAR_12 == &VAR_11->resource[VAR_15])
   break;
 if (VAR_15 >= VAR_4)
  return -VAR_1;

 if (VAR_12->flags & VAR_2 && FUNC_2(VAR_12->start))
  return -VAR_0;

 if (!FUNC_0(VAR_11, VAR_15, VAR_9, VAR_10))
  return -VAR_0;

 FUNC_4(VAR_11->bus, &VAR_14, VAR_12);
 VAR_9->vm_pgoff += VAR_14.start >> (VAR_3 - (VAR_10 ? 5 : 0));
 VAR_13 = VAR_12->flags & VAR_2 ? VAR_6 : VAR_5;

 return FUNC_1(VAR_11->sysdata, VAR_9, VAR_13, VAR_10);
}
