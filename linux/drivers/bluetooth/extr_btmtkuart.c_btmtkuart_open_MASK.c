
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct device {int dummy; } ;
struct btmtkuart_dev {int curr_speed; int desired_speed; int stp_cursor; TYPE_1__* serdev; int clk; scalar_t__ stp_dlen; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (struct hci_dev*,char*,int ) ;
 scalar_t__ FUNC_1 (struct btmtkuart_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct btmtkuart_dev* FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_14(struct hci_dev *VAR_0)
{
 struct btmtkuart_dev *VAR_1 = FUNC_4(VAR_0);
 struct device *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_11(VAR_1->serdev);
 if (VAR_3) {
  FUNC_0(VAR_0, "Unable to open UART device %s",
      FUNC_3(&VAR_1->serdev->dev));
  goto err_open;
 }

 if (FUNC_1(VAR_1)) {
  if (VAR_1->curr_speed != VAR_1->desired_speed)
   VAR_3 = FUNC_12(VAR_1->serdev,
        115200);
  else
   VAR_3 = FUNC_12(VAR_1->serdev,
        VAR_1->desired_speed);

  if (VAR_3 < 0) {
   FUNC_0(VAR_0, "Unable to set baudrate UART device %s",
       FUNC_3(&VAR_1->serdev->dev));
   goto err_serdev_close;
  }

  FUNC_13(VAR_1->serdev, 0);
 }

 VAR_1->stp_cursor = 2;
 VAR_1->stp_dlen = 0;

 VAR_2 = &VAR_1->serdev->dev;


 FUNC_6(VAR_2);
 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 < 0) {
  FUNC_8(VAR_2);
  goto err_disable_rpm;
 }

 VAR_3 = FUNC_2(VAR_1->clk);
 if (VAR_3 < 0)
  goto err_put_rpm;

 return 0;

err_put_rpm:
 FUNC_9(VAR_2);
err_disable_rpm:
 FUNC_5(VAR_2);
err_serdev_close:
 FUNC_10(VAR_1->serdev);
err_open:
 return VAR_3;
}
