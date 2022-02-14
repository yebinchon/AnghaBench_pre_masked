
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct bfusb_data {int lock; } ;


 int FUNC_0 (char*,struct hci_dev*,struct bfusb_data*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct bfusb_data*) ;
 struct bfusb_data* FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_0)
{
 struct bfusb_data *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_0("hdev %p bfusb %p", VAR_0, VAR_1);

 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_5(&VAR_1->lock, VAR_2);

 FUNC_2(VAR_1);
 FUNC_1(VAR_0);

 return 0;
}
