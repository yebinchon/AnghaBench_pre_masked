
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct solos_card {scalar_t__ fpga_version; scalar_t__ config_regs; scalar_t__ buffers; struct solos_card* dma_bounce; int tlet; TYPE_2__* dev; } ;
struct pci_dev {int irq; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct solos_card*) ;
 int FUNC_1 (int ,struct solos_card*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct solos_card*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct solos_card* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_4)
{
 struct solos_card *VAR_5 = FUNC_6(VAR_4);


 FUNC_3(0, VAR_5->config_regs + VAR_2);


 FUNC_3(1, VAR_5->config_regs + VAR_1);
 (void)FUNC_2(VAR_5->config_regs + VAR_1);

 if (VAR_5->fpga_version >= VAR_0)
  FUNC_9(&VAR_5->dev->dev.kobj, &VAR_3);

 FUNC_0(VAR_5);

 FUNC_1(VAR_4->irq, VAR_5);
 FUNC_10(&VAR_5->tlet);

 FUNC_4(VAR_5->dma_bounce);


 FUNC_3(0, VAR_5->config_regs + VAR_1);
 (void)FUNC_2(VAR_5->config_regs + VAR_1);

 FUNC_7(VAR_4, VAR_5->buffers);
 FUNC_7(VAR_4, VAR_5->config_regs);

 FUNC_8(VAR_4);
 FUNC_5(VAR_4);

 FUNC_4(VAR_5);
}
