
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hifn_dma {int dummy; } ;
struct hifn_device {scalar_t__* bar; int desc_dma; int desc_virt; int tasklet; int irq; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct hifn_device*) ;
 int FUNC_2 (struct hifn_device*) ;
 int FUNC_3 (struct hifn_device*,int) ;
 int FUNC_4 (struct hifn_device*) ;
 int FUNC_5 (struct hifn_device*) ;
 int FUNC_6 (struct hifn_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct hifn_device*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int,int ,int ) ;
 struct hifn_device* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_0)
{
 int VAR_1;
 struct hifn_device *VAR_2;

 VAR_2 = FUNC_11(VAR_0);

 if (VAR_2) {
  FUNC_0(&VAR_2->work);

  FUNC_6(VAR_2);
  FUNC_5(VAR_2);
  FUNC_3(VAR_2, 1);
  FUNC_4(VAR_2);

  FUNC_1(VAR_2->irq, VAR_2);
  FUNC_13(&VAR_2->tasklet);

  FUNC_2(VAR_2);

  FUNC_10(VAR_0, sizeof(struct hifn_dma),
    VAR_2->desc_virt, VAR_2->desc_dma);
  for (VAR_1 = 0; VAR_1 < 3; ++VAR_1)
   if (VAR_2->bar[VAR_1])
    FUNC_7(VAR_2->bar[VAR_1]);

  FUNC_8(VAR_2);
 }

 FUNC_12(VAR_0);
 FUNC_9(VAR_0);
}
