
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {int hcill_state; int hcill_lock; int tx_wait_q; int txq; } ;
struct ll_device {int ext_clk; } ;
struct hci_uart {scalar_t__ serdev; struct ll_struct* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ll_struct* FUNC_3 (int,int ) ;
 struct ll_device* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hci_uart *VAR_3)
{
 struct ll_struct *VAR_4;

 FUNC_0("hu %p", VAR_3);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(&VAR_4->txq);
 FUNC_5(&VAR_4->tx_wait_q);
 FUNC_6(&VAR_4->hcill_lock);

 VAR_4->hcill_state = VAR_2;

 VAR_3->priv = VAR_4;

 if (VAR_3->serdev) {
  struct ll_device *VAR_5 = FUNC_4(VAR_3->serdev);

  if (!FUNC_1(VAR_5->ext_clk))
   FUNC_2(VAR_5->ext_clk);
 }

 return 0;
}
