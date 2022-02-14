
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct mrvl_data {int id; int rev; int flags; } ;
struct hci_uart {struct mrvl_data* priv; } ;
struct hci_mrvl_pkt {int lhs; int rhs; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*,char*) ;
 int FUNC_1 (struct hci_dev*,char*,int,int) ;
 int FUNC_2 (int ,int *) ;
 struct hci_uart* FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct hci_uart*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct hci_mrvl_pkt *VAR_6 = (void *)VAR_5->data;
 struct hci_uart *VAR_7 = FUNC_3(VAR_4);
 struct mrvl_data *VAR_8 = VAR_7->priv;
 u16 VAR_9 = FUNC_5(VAR_6->lhs);
 int VAR_10 = 0;

 if ((VAR_6->lhs ^ VAR_6->rhs) != 0xffff) {
  FUNC_0(VAR_4, "Corrupted mrvl header");
  FUNC_6(VAR_7, VAR_2);
  VAR_10 = -VAR_0;
  goto done;
 }
 FUNC_6(VAR_7, VAR_1);

 if (!FUNC_8(VAR_3, &VAR_8->flags)) {
  FUNC_0(VAR_4, "Received unexpected chip version");
  goto done;
 }

 VAR_8->id = VAR_9;
 VAR_8->rev = VAR_9 >> 8;

 FUNC_1(VAR_4, "Controller id = %x, rev = %x", VAR_8->id, VAR_8->rev);

 FUNC_2(VAR_3, &VAR_8->flags);
 FUNC_7();
 FUNC_9(&VAR_8->flags, VAR_3);

done:
 FUNC_4(VAR_5);
 return VAR_10;
}
