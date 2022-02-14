
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct btusb_data {scalar_t__ sco_num; int work; } ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_1, unsigned int VAR_2)
{
 struct btusb_data *VAR_3 = FUNC_2(VAR_1);

 FUNC_0("%s evt %d", VAR_1->name, VAR_2);

 if (FUNC_1(VAR_1, VAR_0) != VAR_3->sco_num) {
  VAR_3->sco_num = FUNC_1(VAR_1, VAR_0);
  FUNC_3(&VAR_3->work);
 }
}
