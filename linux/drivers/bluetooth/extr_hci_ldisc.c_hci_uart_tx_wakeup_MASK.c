
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int proto_lock; int write_work; int tx_state; int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct hci_uart *VAR_3)
{






 if (!FUNC_1(&VAR_3->proto_lock))
  return 0;

 if (!FUNC_6(VAR_0, &VAR_3->flags))
  goto no_schedule;

 if (FUNC_5(VAR_1, &VAR_3->tx_state)) {
  FUNC_4(VAR_2, &VAR_3->tx_state);
  goto no_schedule;
 }

 FUNC_0("");

 FUNC_3(&VAR_3->write_work);

no_schedule:
 FUNC_2(&VAR_3->proto_lock);

 return 0;
}
