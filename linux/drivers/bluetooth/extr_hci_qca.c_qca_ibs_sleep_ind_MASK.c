
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_uart {int dummy; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,struct hci_uart*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_uart*) ;
 struct hci_uart* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_uart *VAR_3 = FUNC_2(VAR_1);

 FUNC_0("hu %p recv hci ibs cmd 0x%x", VAR_3, VAR_0);

 FUNC_1(VAR_3);

 FUNC_3(VAR_2);
 return 0;
}
