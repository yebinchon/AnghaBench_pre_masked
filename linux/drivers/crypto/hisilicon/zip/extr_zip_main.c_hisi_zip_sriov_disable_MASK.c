
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hisi_zip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hisi_zip*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct hisi_zip* FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 struct hisi_zip *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_4(VAR_1)) {
  FUNC_0(&VAR_1->dev,
   "Can't disable VFs while VFs are assigned!\n");
  return -VAR_0;
 }


 FUNC_2(VAR_1);

 return FUNC_1(VAR_2);
}
