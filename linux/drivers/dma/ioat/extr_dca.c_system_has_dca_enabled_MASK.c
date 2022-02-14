
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *,char*) ;

int FUNC_3(struct pci_dev *VAR_1)
{
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_1);

 FUNC_2(&VAR_1->dev, "boot cpu doesn't have X86_FEATURE_DCA\n");
 return 0;
}
