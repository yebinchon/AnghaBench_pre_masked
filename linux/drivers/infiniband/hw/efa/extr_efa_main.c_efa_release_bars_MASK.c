
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct efa_dev {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct efa_dev *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0) & VAR_2;
 FUNC_0(VAR_3, VAR_4);
}
