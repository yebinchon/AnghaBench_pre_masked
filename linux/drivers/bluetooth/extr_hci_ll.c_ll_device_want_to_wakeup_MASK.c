
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {int hcill_state; int hcill_lock; } ;
struct hci_uart {struct ll_struct* priv; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;


 int VAR_0 ;
 int FUNC_2 (struct ll_struct*) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (int ,struct hci_uart*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct hci_uart *VAR_1)
{
 unsigned long VAR_2;
 struct ll_struct *VAR_3 = VAR_1->priv;

 FUNC_0("hu %p", VAR_1);


 FUNC_5(&VAR_3->hcill_lock, VAR_2);

 switch (VAR_3->hcill_state) {
 case 128:
  FUNC_0("dual wake-up-indication");

 case 129:

  if (FUNC_4(VAR_0, VAR_1) < 0) {
   FUNC_1("cannot acknowledge device wake up");
   goto out;
  }
  break;
 default:

  FUNC_1("received HCILL_WAKE_UP_IND in state %ld",
         VAR_3->hcill_state);
  break;
 }


 FUNC_2(VAR_3);

out:
 FUNC_6(&VAR_3->hcill_lock, VAR_2);


 FUNC_3(VAR_1);
}
