
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct qca_data {int drop_ev_comp; int flags; } ;
struct hci_uart {struct qca_data* priv; } ;
struct hci_event_hdr {scalar_t__ evt; } ;
struct hci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct hci_uart* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_uart *VAR_4 = FUNC_1(VAR_2);
 struct qca_data *VAR_5 = VAR_4->priv;

 if (FUNC_4(VAR_1, &VAR_5->flags)) {
  struct hci_event_hdr *VAR_6 = (void *)VAR_3->data;
  if (VAR_6->evt == VAR_0)
   FUNC_0(&VAR_5->drop_ev_comp);

  FUNC_3(VAR_3);

  return 0;
 }

 return FUNC_2(VAR_2, VAR_3);
}
