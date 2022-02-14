
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct bfusb_data {int transmit_q; } ;


 int FUNC_0 (char*,struct hci_dev*,struct bfusb_data*) ;
 struct bfusb_data* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_0)
{
 struct bfusb_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("hdev %p bfusb %p", VAR_0, VAR_1);

 FUNC_2(&VAR_1->transmit_q);

 return 0;
}
