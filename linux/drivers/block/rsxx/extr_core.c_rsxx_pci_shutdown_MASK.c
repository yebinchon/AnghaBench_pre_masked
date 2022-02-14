
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int n_targets; int irq_lock; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rsxx_cardinfo*) ;
 int FUNC_3 (int ,char*) ;
 struct rsxx_cardinfo* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct rsxx_cardinfo*) ;
 int FUNC_6 (struct rsxx_cardinfo*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct rsxx_cardinfo *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;

 FUNC_3(FUNC_0(VAR_1), "Shutting down PCI-Flash SSD.\n");

 FUNC_5(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_1->n_targets; VAR_3++) {
  FUNC_7(&VAR_1->irq_lock, VAR_2);
  FUNC_6(VAR_1, FUNC_1(VAR_3));
  FUNC_8(&VAR_1->irq_lock, VAR_2);
 }

 FUNC_2(VAR_1);
}
