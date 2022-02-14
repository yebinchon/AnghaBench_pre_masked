
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rsxx_cardinfo {int n_targets; TYPE_3__* ctrl; int dev; int irq_lock; scalar_t__ eeh_state; scalar_t__ regmap; scalar_t__ config_valid; } ;
struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;
struct TYPE_5__ {int dma_addr; scalar_t__ buf; } ;
struct TYPE_4__ {int dma_addr; scalar_t__ buf; } ;
struct TYPE_6__ {TYPE_2__ cmd; TYPE_1__ status; int issue_dma_work; int issue_wq; int queue_lock; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 struct rsxx_cardinfo* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct rsxx_cardinfo*) ;
 int FUNC_10 (struct rsxx_cardinfo*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct rsxx_cardinfo*) ;
 int FUNC_13 (struct rsxx_cardinfo*,int ) ;
 int FUNC_14 (struct pci_dev*,TYPE_3__*) ;
 int FUNC_15 (struct rsxx_cardinfo*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static pci_ers_result_t FUNC_20(struct pci_dev *VAR_8)
{
 struct rsxx_cardinfo *VAR_9 = FUNC_6(VAR_8);
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_1(&VAR_8->dev,
  "IBM Flash Adapter PCI: recovering from slot reset.\n");

 VAR_12 = FUNC_4(VAR_8);
 if (VAR_12)
  goto failed_hw_setup;

 FUNC_7(VAR_8);

 VAR_12 = FUNC_12(VAR_9);
 if (VAR_12)
  goto failed_hw_setup;

 FUNC_10(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_9->n_targets; VAR_11++) {
  VAR_12 = FUNC_14(VAR_8, &VAR_9->ctrl[VAR_11]);
  if (VAR_12)
   goto failed_hw_buffers_init;
 }

 if (VAR_9->config_valid)
  FUNC_9(VAR_9);


 VAR_12 = FUNC_2(VAR_9->regmap + VAR_3);

 VAR_9->eeh_state = 0;

 FUNC_17(&VAR_9->irq_lock, VAR_10);
 if (VAR_9->n_targets & VAR_6)
  FUNC_13(VAR_9, VAR_2);
 else
  FUNC_13(VAR_9, VAR_1);
 FUNC_19(&VAR_9->irq_lock, VAR_10);

 FUNC_15(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_9->n_targets; VAR_11++) {
  FUNC_16(&VAR_9->ctrl[VAR_11].queue_lock);
  if (FUNC_3(&VAR_9->ctrl[VAR_11].queue)) {
   FUNC_18(&VAR_9->ctrl[VAR_11].queue_lock);
   continue;
  }
  FUNC_18(&VAR_9->ctrl[VAR_11].queue_lock);

  FUNC_8(VAR_9->ctrl[VAR_11].issue_wq,
    &VAR_9->ctrl[VAR_11].issue_dma_work);
 }

 FUNC_0(&VAR_8->dev, "IBM Flash Adapter PCI: recovery complete.\n");

 return VAR_5;

failed_hw_buffers_init:
 for (VAR_11 = 0; VAR_11 < VAR_9->n_targets; VAR_11++) {
  if (VAR_9->ctrl[VAR_11].status.buf)
   FUNC_5(VAR_9->dev,
     VAR_7,
     VAR_9->ctrl[VAR_11].status.buf,
     VAR_9->ctrl[VAR_11].status.dma_addr);
  if (VAR_9->ctrl[VAR_11].cmd.buf)
   FUNC_5(VAR_9->dev,
     VAR_0,
     VAR_9->ctrl[VAR_11].cmd.buf,
     VAR_9->ctrl[VAR_11].cmd.dma_addr);
 }
failed_hw_setup:
 FUNC_11(VAR_8);
 return VAR_4;

}
