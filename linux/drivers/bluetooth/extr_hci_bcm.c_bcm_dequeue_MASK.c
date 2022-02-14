
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_uart {struct bcm_data* priv; } ;
struct bcm_device {int dev; } ;
struct bcm_data {int txq; struct bcm_device* dev; } ;


 scalar_t__ FUNC_0 (struct bcm_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct hci_uart *VAR_1)
{
 struct bcm_data *VAR_2 = VAR_1->priv;
 struct sk_buff *VAR_3 = ((void*)0);
 struct bcm_device *VAR_4 = ((void*)0);

 FUNC_1(&VAR_0);

 if (FUNC_0(VAR_2->dev)) {
  VAR_4 = VAR_2->dev;
  FUNC_3(VAR_4->dev);

 }

 VAR_3 = FUNC_6(&VAR_2->txq);

 if (VAR_4) {
  FUNC_4(VAR_4->dev);
  FUNC_5(VAR_4->dev);
 }

 FUNC_2(&VAR_0);

 return VAR_3;
}
