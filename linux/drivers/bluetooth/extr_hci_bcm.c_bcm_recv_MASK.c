
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {int hdev; int flags; struct bcm_data* priv; } ;
struct bcm_data {TYPE_1__* dev; int * rx_skb; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int) ;
 int * FUNC_5 (int ,int *,void const*,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct hci_uart *VAR_4, const void *VAR_5, int VAR_6)
{
 struct bcm_data *VAR_7 = VAR_4->priv;

 if (!FUNC_11(VAR_1, &VAR_4->flags))
  return -VAR_0;

 VAR_7->rx_skb = FUNC_5(VAR_4->hdev, VAR_7->rx_skb, VAR_5, VAR_6,
      VAR_3, FUNC_0(VAR_3));
 if (FUNC_1(VAR_7->rx_skb)) {
  int VAR_8 = FUNC_2(VAR_7->rx_skb);
  FUNC_4(VAR_4->hdev, "Frame reassembly failed (%d)", VAR_8);
  VAR_7->rx_skb = ((void*)0);
  return VAR_8;
 } else if (!VAR_7->rx_skb) {

  FUNC_6(&VAR_2);
  if (VAR_7->dev && FUNC_3(VAR_7->dev)) {
   FUNC_8(VAR_7->dev->dev);
   FUNC_9(VAR_7->dev->dev);
   FUNC_10(VAR_7->dev->dev);
  }
  FUNC_7(&VAR_2);
 }

 return VAR_6;
}
