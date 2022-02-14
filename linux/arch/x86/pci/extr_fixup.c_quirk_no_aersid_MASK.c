
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_3__ {int bus_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{

 if (FUNC_0(VAR_1->bus) && FUNC_1(VAR_1->bus))
  VAR_1->bus->bus_flags |= VAR_0;
}
