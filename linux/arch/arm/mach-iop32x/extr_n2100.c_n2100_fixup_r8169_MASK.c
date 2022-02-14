
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ devfn; int broken_parity_status; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 if (VAR_0->bus->number == 0 &&
     (VAR_0->devfn == FUNC_0(1, 0) ||
      VAR_0->devfn == FUNC_0(2, 0)))
  VAR_0->broken_parity_status = 1;
}
