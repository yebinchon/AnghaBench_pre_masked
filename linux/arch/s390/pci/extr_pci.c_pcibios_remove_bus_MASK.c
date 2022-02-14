
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int fid; int entry; } ;
struct pci_bus {int dummy; } ;


 struct zpci_dev* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct zpci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zpci_dev*) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (struct zpci_dev*) ;
 int FUNC_8 (struct zpci_dev*) ;
 int FUNC_9 (struct zpci_dev*) ;
 int VAR_0 ;

void FUNC_10(struct pci_bus *VAR_1)
{
 struct zpci_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_8(VAR_2);
 FUNC_5(VAR_2);
 FUNC_7(VAR_2);
 FUNC_9(VAR_2);

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_2->entry);
 FUNC_4(&VAR_0);

 FUNC_6(3, "rem fid:%x\n", VAR_2->fid);
 FUNC_1(VAR_2);
}
