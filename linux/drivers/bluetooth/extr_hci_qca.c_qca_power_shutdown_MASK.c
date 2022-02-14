
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_data {int hci_ibs_lock; int flags; } ;
struct hci_uart {struct qca_data* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hci_uart*,int) ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (struct hci_uart*,int) ;
 int FUNC_4 (struct hci_uart*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct hci_uart *VAR_1)
{
 struct qca_data *VAR_2 = VAR_1->priv;
 unsigned long VAR_3;





 FUNC_5(&VAR_2->hci_ibs_lock, VAR_3);
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_2(VAR_1);
 FUNC_6(&VAR_2->hci_ibs_lock, VAR_3);

 FUNC_1(VAR_1, 2400);
 FUNC_4(VAR_1, 0);
 FUNC_3(VAR_1, 0);
}
