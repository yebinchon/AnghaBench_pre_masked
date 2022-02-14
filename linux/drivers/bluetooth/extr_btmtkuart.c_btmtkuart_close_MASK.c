
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct device {int dummy; } ;
struct btmtkuart_dev {TYPE_1__* serdev; int clk; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 struct btmtkuart_dev* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_0)
{
 struct btmtkuart_dev *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = &VAR_1->serdev->dev;


 FUNC_0(VAR_1->clk);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 FUNC_4(VAR_1->serdev);

 return 0;
}
