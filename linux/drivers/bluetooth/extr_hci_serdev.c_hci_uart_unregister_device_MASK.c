
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {int serdev; TYPE_1__* proto; int write_work; int flags; struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct hci_uart*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hci_uart*) ;

void FUNC_6(struct hci_uart *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1->hdev;

 FUNC_1(VAR_0, &VAR_1->flags);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 FUNC_0(&VAR_1->write_work);

 VAR_1->proto->close(VAR_1);
 FUNC_4(VAR_1->serdev);
}
