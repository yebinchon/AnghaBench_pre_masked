
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nokia_bt_dev {int * rx_skb; TYPE_1__* serdev; } ;
struct hci_uart {int hdev; int flags; struct nokia_bt_dev* priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int * FUNC_4 (int ,int *,void const*,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_uart *VAR_3, const void *VAR_4, int VAR_5)
{
 struct nokia_bt_dev *VAR_6 = VAR_3->priv;
 struct device *VAR_7 = &VAR_6->serdev->dev;
 int VAR_8;

 if (!FUNC_5(VAR_1, &VAR_3->flags))
  return -VAR_0;

 VAR_6->rx_skb = FUNC_4(VAR_3->hdev, VAR_6->rx_skb, VAR_4, VAR_5,
      VAR_2, FUNC_0(VAR_2));
 if (FUNC_1(VAR_6->rx_skb)) {
  VAR_8 = FUNC_2(VAR_6->rx_skb);
  FUNC_3(VAR_7, "Frame reassembly failed (%d)", VAR_8);
  VAR_6->rx_skb = ((void*)0);
  return VAR_8;
 }

 return VAR_5;
}
