
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ll_struct {int hcill_state; } ;
struct hci_uart {struct ll_struct* priv; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*) ;




 int FUNC_1 (struct hci_dev*,char*,int ) ;
 struct hci_uart* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct hci_uart*) ;
 int FUNC_6 (struct hci_uart*) ;
 int FUNC_7 (struct hci_uart*) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_uart *VAR_2 = FUNC_2(VAR_0);
 struct ll_struct *VAR_3 = VAR_2->priv;

 switch (FUNC_3(VAR_1)) {
 case 130:
  FUNC_0("HCILL_GO_TO_SLEEP_IND packet");
  FUNC_5(VAR_2);
  break;
 case 131:

  FUNC_1(VAR_0, "received HCILL_GO_TO_SLEEP_ACK in state %ld",
      VAR_3->hcill_state);
  break;
 case 128:
  FUNC_0("HCILL_WAKE_UP_IND packet");
  FUNC_6(VAR_2);
  break;
 case 129:
  FUNC_0("HCILL_WAKE_UP_ACK packet");
  FUNC_7(VAR_2);
  break;
 }

 FUNC_4(VAR_1);
 return 0;
}
