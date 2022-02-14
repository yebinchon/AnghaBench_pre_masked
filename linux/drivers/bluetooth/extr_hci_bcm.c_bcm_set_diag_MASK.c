
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_uart {struct bcm_data* priv; } ;
struct hci_dev {int flags; } ;
struct bcm_data {int txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 struct hci_uart* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_5, bool VAR_6)
{
 struct hci_uart *VAR_7 = FUNC_1(VAR_5);
 struct bcm_data *VAR_8 = VAR_7->priv;
 struct sk_buff *VAR_9;

 if (!FUNC_5(VAR_4, &VAR_5->flags))
  return -VAR_1;

 VAR_9 = FUNC_0(3, VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_3(VAR_9, VAR_0);
 FUNC_3(VAR_9, 0xf0);
 FUNC_3(VAR_9, VAR_6);

 FUNC_4(&VAR_8->txq, VAR_9);
 FUNC_2(VAR_7);

 return 0;
}
