
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct mrvl_data {int flags; int tx_len; } ;
struct hci_uart {struct mrvl_data* priv; } ;
struct hci_mrvl_pkt {int lhs; int rhs; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*,char*) ;
 int FUNC_1 (int ,int *) ;
 struct hci_uart* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hci_uart*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct hci_mrvl_pkt *VAR_6 = (void *)VAR_5->data;
 struct hci_uart *VAR_7 = FUNC_2(VAR_4);
 struct mrvl_data *VAR_8 = VAR_7->priv;
 int VAR_9 = 0;

 if ((VAR_6->lhs ^ VAR_6->rhs) != 0xffff) {
  FUNC_0(VAR_4, "Corrupted mrvl header");
  FUNC_5(VAR_7, VAR_2);
  VAR_9 = -VAR_0;
  goto done;
 }
 FUNC_5(VAR_7, VAR_1);

 if (!FUNC_7(VAR_3, &VAR_8->flags)) {
  FUNC_0(VAR_4, "Received unexpected firmware request");
  VAR_9 = -VAR_0;
  goto done;
 }

 VAR_8->tx_len = FUNC_4(VAR_6->lhs);

 FUNC_1(VAR_3, &VAR_8->flags);
 FUNC_6();
 FUNC_8(&VAR_8->flags, VAR_3);

done:
 FUNC_3(VAR_5);
 return VAR_9;
}
