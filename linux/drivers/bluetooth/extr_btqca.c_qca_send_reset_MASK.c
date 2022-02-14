
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_3 (struct hci_dev*,char*) ;
 int FUNC_4 (struct hci_dev*,char*,int) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 FUNC_3(VAR_2, "QCA HCI_RESET");

 VAR_3 = FUNC_2(VAR_2, VAR_1, 0, ((void*)0), VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_4(VAR_2, "QCA Reset failed (%d)", VAR_4);
  return VAR_4;
 }

 FUNC_5(VAR_3);

 return 0;
}
