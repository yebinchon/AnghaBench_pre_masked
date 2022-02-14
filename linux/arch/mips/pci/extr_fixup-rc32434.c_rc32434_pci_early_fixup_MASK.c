
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; int devfn; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 if (FUNC_0(VAR_3->devfn) == 6 && VAR_3->bus->number == 0) {

  FUNC_2(VAR_3, VAR_2, 0);
  FUNC_2(VAR_3, VAR_1, 0x10);

  FUNC_1(VAR_3, VAR_0, 4);
 }
}
