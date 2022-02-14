
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {TYPE_1__* proto; int flags; int serdev; int * tx_skb; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int (* flush ) (struct hci_uart*) ;} ;


 int FUNC_0 (char*,struct hci_dev*,int ) ;
 int VAR_0 ;
 struct hci_uart* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hci_uart*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1)
{
 struct hci_uart *VAR_2 = FUNC_1(VAR_1);

 FUNC_0("hdev %p serdev %p", VAR_1, VAR_2->serdev);

 if (VAR_2->tx_skb) {
  FUNC_2(VAR_2->tx_skb); VAR_2->tx_skb = ((void*)0);
 }


 FUNC_3(VAR_2->serdev);

 if (FUNC_5(VAR_0, &VAR_2->flags))
  VAR_2->proto->flush(VAR_2);

 return 0;
}
