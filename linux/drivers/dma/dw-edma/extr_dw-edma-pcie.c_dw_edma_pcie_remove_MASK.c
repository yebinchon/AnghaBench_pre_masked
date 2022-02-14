
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dw_edma_chip {int dummy; } ;


 int FUNC_0 (struct dw_edma_chip*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct dw_edma_chip* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct dw_edma_chip *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_3(VAR_0, "can't remove device properly: %d\n", VAR_2);


 FUNC_1(VAR_0);
}
