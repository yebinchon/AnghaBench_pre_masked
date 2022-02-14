
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rsxx_cardinfo {int eeh_state; int halt; int n_targets; TYPE_1__* ctrl; } ;
struct pci_dev {int dev; } ;
struct TYPE_3__ {int id; int queue_lock; int queue; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,int,int ) ;
 struct rsxx_cardinfo* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct rsxx_cardinfo *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_1->dev, "IBM Flash Adapter PCI: disabling failed card.\n");

 VAR_2->eeh_state = 1;
 VAR_2->halt = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_targets; VAR_3++) {
  FUNC_6(&VAR_2->ctrl[VAR_3].queue_lock);
  VAR_4 = FUNC_4(&VAR_2->ctrl[VAR_3],
          &VAR_2->ctrl[VAR_3].queue,
          VAR_0);
  FUNC_7(&VAR_2->ctrl[VAR_3].queue_lock);

  VAR_4 += FUNC_5(&VAR_2->ctrl[VAR_3]);

  if (VAR_4)
   FUNC_2(FUNC_0(VAR_2),
    "Freed %d queued DMAs on channel %d\n",
    VAR_4, VAR_2->ctrl[VAR_3].id);
 }
}
