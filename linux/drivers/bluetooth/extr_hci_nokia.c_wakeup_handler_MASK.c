
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nokia_bt_dev {int rx_enabled; int wakeup_host; TYPE_1__* serdev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct nokia_bt_dev *VAR_3 = VAR_2;
 struct device *VAR_4 = &VAR_3->serdev->dev;
 int VAR_5 = FUNC_0(VAR_3->wakeup_host);

 if (VAR_3->rx_enabled == VAR_5)
  return VAR_0;

 if (VAR_5)
  FUNC_1(VAR_4);
 else
  FUNC_2(VAR_4);

 VAR_3->rx_enabled = VAR_5;

 return VAR_0;
}
