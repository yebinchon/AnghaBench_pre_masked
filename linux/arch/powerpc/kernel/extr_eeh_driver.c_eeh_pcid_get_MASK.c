
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; } ;
struct pci_driver {TYPE_1__ driver; } ;
struct pci_dev {struct pci_driver* driver; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct pci_driver *FUNC_1(struct pci_dev *VAR_0)
{
 if (!VAR_0 || !VAR_0->driver)
  return ((void*)0);

 if (!FUNC_0(VAR_0->driver->driver.owner))
  return ((void*)0);

 return VAR_0->driver;
}
