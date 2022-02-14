
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct hci_uart {int proto_lock; TYPE_1__* proto; int flags; int * tx_skb; struct tty_struct* tty; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int (* flush ) (struct hci_uart*) ;} ;


 int FUNC_0 (char*,struct hci_dev*,struct tty_struct*) ;
 int VAR_0 ;
 struct hci_uart* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hci_uart*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_1)
{
 struct hci_uart *VAR_2 = FUNC_1(VAR_1);
 struct tty_struct *VAR_3 = VAR_2->tty;

 FUNC_0("hdev %p tty %p", VAR_1, VAR_3);

 if (VAR_2->tx_skb) {
  FUNC_2(VAR_2->tx_skb); VAR_2->tx_skb = ((void*)0);
 }


 FUNC_8(VAR_3);
 FUNC_7(VAR_3);

 FUNC_3(&VAR_2->proto_lock);

 if (FUNC_6(VAR_0, &VAR_2->flags))
  VAR_2->proto->flush(VAR_2);

 FUNC_4(&VAR_2->proto_lock);

 return 0;
}
