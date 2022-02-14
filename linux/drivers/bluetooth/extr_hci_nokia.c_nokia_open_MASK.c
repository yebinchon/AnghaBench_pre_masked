
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {TYPE_1__* serdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct hci_uart *VAR_0)
{
 struct device *VAR_1 = &VAR_0->serdev->dev;

 FUNC_0(VAR_1, "protocol open");

 FUNC_1(VAR_1);

 return 0;
}
