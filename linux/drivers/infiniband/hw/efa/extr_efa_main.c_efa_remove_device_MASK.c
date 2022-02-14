
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct efa_com_dev {int reg_bar; } ;
struct efa_dev {int ibdev; struct efa_com_dev edev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct efa_com_dev*) ;
 int FUNC_2 (struct efa_com_dev*) ;
 int FUNC_3 (struct efa_dev*) ;
 int FUNC_4 (struct efa_dev*) ;
 int FUNC_5 (struct efa_dev*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 struct efa_dev* FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 struct efa_dev *VAR_2 = FUNC_8(VAR_1);
 struct efa_com_dev *VAR_3;

 VAR_3 = &VAR_2->edev;
 FUNC_1(VAR_3);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_3);
 FUNC_0(&VAR_1->dev, VAR_3->reg_bar);
 FUNC_5(VAR_2, VAR_0);
 FUNC_6(&VAR_2->ibdev);
 FUNC_7(VAR_1);
}
