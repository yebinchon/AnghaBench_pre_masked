
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int) ;
 struct zpci_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct zpci_dev*,int ) ;
 int FUNC_4 (struct zpci_dev*) ;

int FUNC_5(struct pci_dev *VAR_0, int VAR_1)
{
 struct zpci_dev *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(VAR_2, FUNC_0(&VAR_0->dev));
 FUNC_4(VAR_2);

 return FUNC_1(VAR_0, VAR_1);
}
