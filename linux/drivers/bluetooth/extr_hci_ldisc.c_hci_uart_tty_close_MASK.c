
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct hci_uart* disc_data; } ;
struct hci_uart {int proto_lock; int flags; TYPE_1__* proto; int write_work; struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct hci_uart*) ;} ;


 int FUNC_0 (char*,struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_uart*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct hci_uart*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct tty_struct *VAR_3)
{
 struct hci_uart *VAR_4 = VAR_3->disc_data;
 struct hci_dev *VAR_5;

 FUNC_0("tty %p", VAR_3);


 VAR_3->disc_data = ((void*)0);

 if (!VAR_4)
  return;

 VAR_5 = VAR_4->hdev;
 if (VAR_5)
  FUNC_4(VAR_5);

 if (FUNC_11(VAR_0, &VAR_4->flags)) {
  FUNC_7(&VAR_4->proto_lock);
  FUNC_2(VAR_0, &VAR_4->flags);
  FUNC_9(&VAR_4->proto_lock);

  FUNC_1(&VAR_4->write_work);

  if (VAR_5) {
   if (FUNC_11(VAR_2, &VAR_4->flags))
    FUNC_5(VAR_5);
   FUNC_3(VAR_5);
  }
  VAR_4->proto->close(VAR_4);
 }
 FUNC_2(VAR_1, &VAR_4->flags);

 FUNC_8(&VAR_4->proto_lock);

 FUNC_6(VAR_4);
}
