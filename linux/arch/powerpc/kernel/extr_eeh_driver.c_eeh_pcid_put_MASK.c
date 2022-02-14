
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* driver; } ;
struct TYPE_3__ {int owner; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pci_dev *VAR_0)
{
 if (!VAR_0 || !VAR_0->driver)
  return;

 FUNC_0(VAR_0->driver->driver.owner);
}
