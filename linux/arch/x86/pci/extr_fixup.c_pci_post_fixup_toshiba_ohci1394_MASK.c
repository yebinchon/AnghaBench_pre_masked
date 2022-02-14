
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_6)
{
 if (!FUNC_0(VAR_5))
  return;


 FUNC_4(VAR_6, VAR_2, VAR_4);
 FUNC_1(VAR_6, VAR_3, (u8 *)&VAR_6->irq);
 FUNC_3(VAR_6, VAR_0,
          FUNC_2(VAR_6, 0));
 FUNC_3(VAR_6, VAR_1,
          FUNC_2(VAR_6, 1));
}
