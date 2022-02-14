
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int hdev; scalar_t__ serdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hci_uart*,int) ;
 int FUNC_2 (struct hci_uart*,int) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct hci_uart *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, 1);

 VAR_2 = FUNC_4(VAR_1->hdev, "mrvl/helper_uart_3000000.bin");
 if (VAR_2) {
  FUNC_0(VAR_1->hdev, "Unable to download firmware helper");
  return -VAR_0;
 }


 FUNC_3(VAR_1);

 if (VAR_1->serdev)
  FUNC_5(VAR_1->serdev, 3000000);
 else
  FUNC_1(VAR_1, 3000000);

 FUNC_2(VAR_1, 0);

 VAR_2 = FUNC_4(VAR_1->hdev, "mrvl/uart8897_bt.bin");
 if (VAR_2)
  return VAR_2;

 return 0;
}
