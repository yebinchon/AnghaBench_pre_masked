
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int enable_cnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;

void
FUNC_4 (struct pci_dev *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->enable_cnt));
 if (!FUNC_3(VAR_0))
  FUNC_1(VAR_0);
}
