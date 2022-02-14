
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nokia_bt_dev {TYPE_1__* serdev; int reset; int wakeup_host; int wakeup_bt; } ;
struct hci_uart {struct nokia_bt_dev* priv; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct hci_uart *VAR_2)
{
 struct nokia_bt_dev *VAR_3 = VAR_2->priv;
 struct device *VAR_4 = &VAR_3->serdev->dev;
 int VAR_5;


 FUNC_2(VAR_3->reset, 1);
 FUNC_2(VAR_3->wakeup_bt, 1);

 FUNC_3(100);


 VAR_5 = FUNC_1(VAR_3->wakeup_host);
 if (VAR_5 == 1) {
  FUNC_0(VAR_4, "reset: host wakeup not low!");
  return -VAR_0;
 }


 FUNC_7(VAR_3->serdev);


 FUNC_4(VAR_3->serdev, 0);
 FUNC_5(VAR_3->serdev, VAR_1);

 FUNC_2(VAR_3->reset, 0);


 VAR_5 = FUNC_6(VAR_3->serdev, 1, 200);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4, "CTS not received: %d", VAR_5);
  return VAR_5;
 }

 FUNC_4(VAR_3->serdev, 1);

 return 0;
}
