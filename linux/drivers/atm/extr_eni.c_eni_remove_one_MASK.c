
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct eni_zero {int dma; int addr; } ;
struct eni_dev {struct eni_zero zero; } ;
struct atm_dev {int dummy; } ;


 struct eni_dev* FUNC_0 (struct atm_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct atm_dev*) ;
 int FUNC_4 (struct eni_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct atm_dev* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct atm_dev *VAR_2 = FUNC_6(VAR_1);
 struct eni_dev *VAR_3 = FUNC_0(VAR_2);
 struct eni_zero *VAR_4 = &VAR_3->zero;

 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(&VAR_1->dev, VAR_0, VAR_4->addr, VAR_4->dma);
 FUNC_4(VAR_3);
 FUNC_5(VAR_1);
}
