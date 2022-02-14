
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {scalar_t__ hcill_state; int hcill_lock; } ;
struct hci_uart {struct ll_struct* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ll_struct*) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hci_uart *VAR_1)
{
 unsigned long VAR_2;
 struct ll_struct *VAR_3 = VAR_1->priv;

 FUNC_0("hu %p", VAR_1);


 FUNC_4(&VAR_3->hcill_lock, VAR_2);


 if (VAR_3->hcill_state != VAR_0)
  FUNC_1("received HCILL_WAKE_UP_ACK in state %ld",
         VAR_3->hcill_state);


 FUNC_2(VAR_3);

 FUNC_5(&VAR_3->hcill_lock, VAR_2);


 FUNC_3(VAR_1);
}
