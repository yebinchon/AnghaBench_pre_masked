
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {int waker; int deferred; int txlock; int tx_in_flight; int flags; } ;


 int VAR_0 ;
 struct btusb_data* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct hci_dev*,struct urb*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_1, struct urb *VAR_2)
{
 struct btusb_data *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_2(&VAR_3->txlock, VAR_4);
 VAR_5 = FUNC_5(VAR_0, &VAR_3->flags);
 if (!VAR_5)
  VAR_3->tx_in_flight++;
 FUNC_3(&VAR_3->txlock, VAR_4);

 if (!VAR_5)
  return FUNC_4(VAR_1, VAR_2);

 FUNC_6(VAR_2, &VAR_3->deferred);
 FUNC_1(&VAR_3->waker);

 FUNC_7(VAR_2);
 return 0;
}
