
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct bcm_data* priv; int hdev; scalar_t__ serdev; } ;
struct bcm_device {scalar_t__ irq; int dev; int * hu; } ;
struct bcm_data {int rx_skb; int txq; struct bcm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bcm_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct bcm_device*,int) ;
 int FUNC_3 (int ,char*,struct hci_uart*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,scalar_t__,struct bcm_device*) ;
 int FUNC_7 (struct bcm_data*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct bcm_device* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct hci_uart *VAR_2)
{
 struct bcm_data *VAR_3 = VAR_2->priv;
 struct bcm_device *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_3(VAR_2->hdev, "hu %p", VAR_2);


 FUNC_9(&VAR_1);

 if (VAR_2->serdev) {
  VAR_4 = FUNC_13(VAR_2->serdev);
 } else if (FUNC_1(VAR_3->dev)) {
  VAR_4 = VAR_3->dev;



 }

 if (VAR_4) {
  if (FUNC_0(VAR_0) && VAR_4->irq > 0) {
   FUNC_6(VAR_4->dev, VAR_4->irq, VAR_4);
   FUNC_5(VAR_4->dev, 0);
   FUNC_11(VAR_4->dev);
  }

  VAR_5 = FUNC_2(VAR_4, 0);
  if (VAR_5)
   FUNC_4(VAR_2->hdev, "Failed to power down");
  else
   FUNC_12(VAR_4->dev);
 }
 FUNC_10(&VAR_1);

 FUNC_14(&VAR_3->txq);
 FUNC_8(VAR_3->rx_skb);
 FUNC_7(VAR_3);

 VAR_2->priv = ((void*)0);
 return 0;
}
