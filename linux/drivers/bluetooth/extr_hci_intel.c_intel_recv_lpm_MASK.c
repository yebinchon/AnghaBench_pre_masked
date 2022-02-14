
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct intel_data {int flags; } ;
struct hci_uart {int hdev; struct intel_data* priv; } ;
struct hci_lpm_pkt {int opcode; int dlen; int * data; } ;
struct hci_dev {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 struct hci_uart* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_lpm_pkt *VAR_4 = (void *)VAR_3->data;
 struct hci_uart *VAR_5 = FUNC_2(VAR_2);
 struct intel_data *VAR_6 = VAR_5->priv;

 switch (VAR_4->opcode) {
 case 128:
  if (VAR_4->dlen < 1) {
   FUNC_0(VAR_5->hdev, "Invalid LPM notification packet");
   break;
  }
  FUNC_3(VAR_2, VAR_4->data[0]);
  break;
 case 129:
  FUNC_5(VAR_1, &VAR_6->flags);
  if (FUNC_6(VAR_0, &VAR_6->flags))
   FUNC_7(&VAR_6->flags, VAR_0);
  break;
 case 130:
  FUNC_1(VAR_1, &VAR_6->flags);
  if (FUNC_6(VAR_0, &VAR_6->flags))
   FUNC_7(&VAR_6->flags, VAR_0);
  break;
 default:
  FUNC_0(VAR_2, "Unknown LPM opcode (%02x)", VAR_4->opcode);
  break;
 }

 FUNC_4(VAR_3);

 return 0;
}
