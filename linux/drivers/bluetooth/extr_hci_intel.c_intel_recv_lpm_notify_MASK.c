
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_data {int flags; int busy_work; } ;
struct hci_uart {struct intel_data* priv; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*,int) ;
 int FUNC_1 (int ,int *) ;
 struct hci_uart* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, int VAR_2)
{
 struct hci_uart *VAR_3 = FUNC_2(VAR_1);
 struct intel_data *VAR_4 = VAR_3->priv;

 FUNC_0(VAR_1, "TX idle notification (%d)", VAR_2);

 if (VAR_2) {
  FUNC_4(VAR_0, &VAR_4->flags);
  FUNC_3(&VAR_4->busy_work);
 } else {
  FUNC_1(VAR_0, &VAR_4->flags);
 }
}
