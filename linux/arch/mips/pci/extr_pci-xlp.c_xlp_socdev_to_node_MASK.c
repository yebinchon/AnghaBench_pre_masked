
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* self; } ;
struct TYPE_3__ {int devfn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(const struct pci_dev *VAR_0)
{
 if (FUNC_2())
  return FUNC_0(VAR_0->bus->self->devfn);
 else
  return FUNC_1(VAR_0->devfn) / 8;
}
