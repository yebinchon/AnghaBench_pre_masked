
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct serdev_device {struct device dev; } ;
struct TYPE_2__ {int alignment; struct nokia_bt_dev* priv; struct serdev_device* serdev; } ;
struct nokia_bt_dev {TYPE_1__ hu; int txq; int sysclk_speed; struct clk* wakeup_bt; int wake_irq; struct clk* wakeup_host; struct clk* reset; struct serdev_device* serdev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct clk* FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,char*,int ) ;
 struct nokia_bt_dev* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int ,int *,int ,int,char*,struct nokia_bt_dev*) ;
 int FUNC_10 (struct clk*) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int VAR_8 ;
 int FUNC_12 (struct serdev_device*,struct nokia_bt_dev*) ;
 int FUNC_13 (int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_14(struct serdev_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct nokia_bt_dev *VAR_12;
 struct clk *VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_8(VAR_11, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->hu.serdev = VAR_12->serdev = VAR_10;
 FUNC_12(VAR_10, VAR_12);

 VAR_12->reset = FUNC_7(VAR_11, "reset", VAR_3);
 if (FUNC_0(VAR_12->reset)) {
  VAR_14 = FUNC_1(VAR_12->reset);
  FUNC_5(VAR_11, "could not get reset gpio: %d", VAR_14);
  return VAR_14;
 }

 VAR_12->wakeup_host = FUNC_7(VAR_11, "host-wakeup", VAR_2);
 if (FUNC_0(VAR_12->wakeup_host)) {
  VAR_14 = FUNC_1(VAR_12->wakeup_host);
  FUNC_5(VAR_11, "could not get host wakeup gpio: %d", VAR_14);
  return VAR_14;
 }

 VAR_12->wake_irq = FUNC_10(VAR_12->wakeup_host);

 VAR_14 = FUNC_9(VAR_11, VAR_12->wake_irq, ((void*)0),
  VAR_9,
  VAR_7 | VAR_6 | VAR_5,
  "wakeup", VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_11, "could request wakeup irq: %d", VAR_14);
  return VAR_14;
 }

 VAR_12->wakeup_bt = FUNC_7(VAR_11, "bluetooth-wakeup",
        VAR_4);
 if (FUNC_0(VAR_12->wakeup_bt)) {
  VAR_14 = FUNC_1(VAR_12->wakeup_bt);
  FUNC_5(VAR_11, "could not get BT wakeup gpio: %d", VAR_14);
  return VAR_14;
 }

 VAR_13 = FUNC_6(VAR_11, "sysclk");
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  FUNC_5(VAR_11, "could not get sysclk: %d", VAR_14);
  return VAR_14;
 }

 FUNC_4(VAR_13);
 VAR_12->sysclk_speed = FUNC_3(VAR_13);
 FUNC_2(VAR_13);

 FUNC_13(&VAR_12->txq);

 VAR_12->hu.priv = VAR_12;
 VAR_12->hu.alignment = 2;

 VAR_14 = FUNC_11(&VAR_12->hu, &VAR_8);
 if (VAR_14) {
  FUNC_5(VAR_11, "could not register bluetooth uart: %d", VAR_14);
  return VAR_14;
 }

 return 0;
}
