
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_uart {int serdev; int hdev; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct hci_uart*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct hci_uart *VAR_3, bool VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_3(VAR_0);
 u8 VAR_7 = VAR_4 ? VAR_2 : VAR_1;
 FUNC_0(VAR_3->hdev, "sending power pulse %02x to controller", VAR_7);

 FUNC_7(VAR_3->serdev);
 FUNC_2(VAR_3, 1);
 VAR_5 = FUNC_6(VAR_3->serdev, &VAR_7, sizeof(VAR_7));
 if (VAR_5 < 0) {
  FUNC_1(VAR_3->hdev, "failed to send power pulse %02x", VAR_7);
  return VAR_5;
 }

 FUNC_5(VAR_3->serdev, VAR_6);
 FUNC_2(VAR_3, 0);


 if (VAR_4)
  FUNC_4(100);
 else
  FUNC_4(10);

 return 0;
}
