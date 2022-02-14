
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ,int,struct pci_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct pci_dev *FUNC_3(int VAR_1)
{
 struct pci_dev *VAR_2 = ((void*)0);
 int VAR_3, VAR_4;

 while (1) {
  VAR_2 = FUNC_0(VAR_0, 0x3451, VAR_2);
  if (!VAR_2)
   break;
  VAR_3 = FUNC_2(VAR_2->bus);
  if (VAR_3 < 0)
   continue;
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 < 0)
   continue;
  else if (VAR_4 == VAR_1)
   break;
 }
 return VAR_2;
}
