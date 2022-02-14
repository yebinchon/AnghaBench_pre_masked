
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_dev {struct resource* resource; } ;
struct fb_info {struct device* device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct pci_dev* FUNC_1 (struct device*) ;
 struct pci_dev* FUNC_2 () ;

int FUNC_3(struct fb_info *VAR_2)
{
 struct device *VAR_3 = VAR_2->device;
 struct pci_dev *VAR_4 = FUNC_2();
 struct pci_dev *VAR_5;
 struct resource *VAR_6;

 if (!VAR_3 || !FUNC_0(VAR_3))
  return 0;

 VAR_5 = FUNC_1(VAR_3);

 if (VAR_4) {
  if (VAR_5 == VAR_4)
   return 1;
  return 0;
 }

 VAR_6 = VAR_5->resource + VAR_1;

 if (VAR_6->flags & VAR_0)
  return 1;

 return 0;
}
