
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq; int class; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_6)
{
 u8 VAR_7;
 struct pci_dev *VAR_8;

 if (!FUNC_1(VAR_5) || VAR_4 != VAR_3)
  return;
 if (VAR_6->irq != 14)
  return;

 VAR_8 = FUNC_3(VAR_2, VAR_1, ((void*)0));
 if (!VAR_8)
  return;
 FUNC_0(&VAR_6->dev, "Fixing VIA IDE, force legacy mode on\n");

 FUNC_4(VAR_6, VAR_0, &VAR_7);
 FUNC_5(VAR_6, VAR_0, VAR_7 & ~0x5);
 VAR_6->class &= ~0x5;

 FUNC_2(VAR_8);
}
