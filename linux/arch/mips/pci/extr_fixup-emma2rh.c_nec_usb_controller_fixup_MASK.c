
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 if (FUNC_0(VAR_1->devfn) == VAR_0)

  FUNC_1(VAR_1, 0xe4, 1 << 5);
}
