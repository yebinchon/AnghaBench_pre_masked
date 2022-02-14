
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 unsigned int VAR_1;


 FUNC_0(VAR_0, 0xe0, &VAR_1);
 FUNC_1(VAR_0, 0xe0, (VAR_1 & ~7) | 0x4);


 FUNC_1(VAR_0, 0xe4, 1 << 5);
}
