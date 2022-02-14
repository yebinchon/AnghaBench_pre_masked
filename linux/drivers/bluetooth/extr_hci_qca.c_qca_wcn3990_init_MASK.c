
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qca_serdev {TYPE_1__* bt_power; } ;
struct hci_uart {int hdev; int serdev; } ;
struct TYPE_2__ {int vregs_on; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hci_uart*,int) ;
 int FUNC_2 (struct hci_uart*,int) ;
 int FUNC_3 (struct hci_uart*,int) ;
 int FUNC_4 (struct hci_uart*,int) ;
 int FUNC_5 (struct hci_uart*,int ) ;
 int FUNC_6 (int ) ;
 struct qca_serdev* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hci_uart *VAR_1)
{
 struct qca_serdev *VAR_2;
 int VAR_3;




 VAR_2 = FUNC_7(VAR_1->serdev);
 if (!VAR_2->bt_power->vregs_on) {
  FUNC_6(VAR_1->serdev);
  VAR_3 = FUNC_3(VAR_1, 1);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_8(VAR_1->serdev);
  if (VAR_3) {
   FUNC_0(VAR_1->hdev, "failed to open port");
   return VAR_3;
  }
 }


 FUNC_2(VAR_1, 2400);
 VAR_3 = FUNC_4(VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 FUNC_5(VAR_1, VAR_0);
 VAR_3 = FUNC_4(VAR_1, 1);
 if (VAR_3)
  return VAR_3;






 FUNC_6(VAR_1->serdev);
 VAR_3 = FUNC_8(VAR_1->serdev);
 if (VAR_3) {
  FUNC_0(VAR_1->hdev, "failed to open port");
  return VAR_3;
 }

 FUNC_1(VAR_1, 0);

 return 0;
}
