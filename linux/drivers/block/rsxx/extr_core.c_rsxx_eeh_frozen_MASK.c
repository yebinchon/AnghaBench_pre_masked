
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rsxx_cardinfo {int eeh_state; int n_targets; TYPE_3__* ctrl; int dev; } ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {int dma_addr; scalar_t__ buf; } ;
struct TYPE_4__ {int dma_addr; scalar_t__ buf; } ;
struct TYPE_6__ {TYPE_2__ cmd; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 struct rsxx_cardinfo* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct rsxx_cardinfo*) ;
 int FUNC_5 (struct rsxx_cardinfo*) ;
 int FUNC_6 (struct rsxx_cardinfo*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_2)
{
 struct rsxx_cardinfo *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;
 int VAR_5;

 FUNC_0(&VAR_2->dev, "IBM Flash Adapter PCI: preparing for slot reset.\n");

 VAR_3->eeh_state = 1;
 FUNC_6(VAR_3);






 FUNC_7();

 FUNC_1(VAR_2);

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_4(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->n_targets; VAR_4++) {
  if (VAR_3->ctrl[VAR_4].status.buf)
   FUNC_2(VAR_3->dev, VAR_1,
         VAR_3->ctrl[VAR_4].status.buf,
         VAR_3->ctrl[VAR_4].status.dma_addr);
  if (VAR_3->ctrl[VAR_4].cmd.buf)
   FUNC_2(VAR_3->dev, VAR_0,
         VAR_3->ctrl[VAR_4].cmd.buf,
         VAR_3->ctrl[VAR_4].cmd.dma_addr);
 }

 return 0;
}
