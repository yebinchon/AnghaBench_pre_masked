
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct hci_uart {int flags; struct serdev_device* serdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hci_uart*) ;
 struct hci_uart* FUNC_3 (struct serdev_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct serdev_device *VAR_1)
{
 struct hci_uart *VAR_2 = FUNC_3(VAR_1);

 FUNC_0("");

 if (!VAR_2 || VAR_1 != VAR_2->serdev) {
  FUNC_1(1);
  return;
 }

 if (FUNC_4(VAR_0, &VAR_2->flags))
  FUNC_2(VAR_2);
}
