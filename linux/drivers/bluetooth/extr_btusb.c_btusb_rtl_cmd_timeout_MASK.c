
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct btusb_data {int cmd_timeout_cnt; int flags; struct gpio_desc* reset_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*) ;
 int FUNC_1 (struct gpio_desc*,int) ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1)
{
 struct btusb_data *VAR_2 = FUNC_2(VAR_1);
 struct gpio_desc *VAR_3 = VAR_2->reset_gpio;

 if (++VAR_2->cmd_timeout_cnt < 5)
  return;

 if (!VAR_3) {
  FUNC_0(VAR_1, "No gpio to reset Realtek device, ignoring");
  return;
 }







 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_0(VAR_1, "last reset failed? Not resetting again");
  return;
 }

 FUNC_0(VAR_1, "Reset Realtek device via gpio");
 FUNC_1(VAR_3, 0);
 FUNC_3(200);
 FUNC_1(VAR_3, 1);
}
