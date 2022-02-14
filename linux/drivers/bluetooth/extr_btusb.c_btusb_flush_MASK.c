
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct btusb_data {int tx_anchor; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct btusb_data*) ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_0)
{
 struct btusb_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0("%s", VAR_0->name);

 FUNC_3(&VAR_1->tx_anchor);
 FUNC_1(VAR_1);

 return 0;
}
