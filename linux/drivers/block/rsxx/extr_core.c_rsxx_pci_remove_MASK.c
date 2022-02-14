
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int n_targets; int halt; int disk_id; int regmap; int debugfs_dir; int irq_lock; int event_work; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rsxx_cardinfo*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 int FUNC_7 (int ,struct rsxx_cardinfo*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct rsxx_cardinfo*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct rsxx_cardinfo* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct rsxx_cardinfo*) ;
 int FUNC_16 (struct rsxx_cardinfo*) ;
 int FUNC_17 (struct rsxx_cardinfo*) ;
 int FUNC_18 (struct rsxx_cardinfo*,int ) ;
 int VAR_3 ;
 int FUNC_19 (struct rsxx_cardinfo*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_22(struct pci_dev *VAR_4)
{
 struct rsxx_cardinfo *VAR_5 = FUNC_12(VAR_4);
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_5)
  return;

 FUNC_6(FUNC_0(VAR_5),
  "Removing PCI-Flash SSD.\n");

 FUNC_17(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_5->n_targets; VAR_8++) {
  FUNC_20(&VAR_5->irq_lock, VAR_6);
  FUNC_18(VAR_5, FUNC_1(VAR_8));
  FUNC_21(&VAR_5->irq_lock, VAR_6);
 }

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  FUNC_5(FUNC_0(VAR_5), "Shutdown failed!\n");


 FUNC_20(&VAR_5->irq_lock, VAR_6);
 FUNC_18(VAR_5, VAR_1);
 FUNC_21(&VAR_5->irq_lock, VAR_6);

 FUNC_2(&VAR_5->event_work);

 FUNC_16(VAR_5);
 FUNC_19(VAR_5);

 FUNC_20(&VAR_5->irq_lock, VAR_6);
 FUNC_18(VAR_5, VAR_0);
 FUNC_21(&VAR_5->irq_lock, VAR_6);


 VAR_5->halt = 1;

 FUNC_4(VAR_5->debugfs_dir);

 FUNC_7(VAR_4->irq, VAR_5);

 if (!VAR_2)
  FUNC_11(VAR_4);

 FUNC_15(VAR_5);

 FUNC_13(VAR_4, VAR_5->regmap);

 FUNC_10(VAR_4);
 FUNC_14(VAR_4);

 FUNC_8(&VAR_3, VAR_5->disk_id);
 FUNC_9(VAR_5);
}
