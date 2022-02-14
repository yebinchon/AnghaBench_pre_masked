
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ll_struct {int hcill_state; int txq; int tx_wait_q; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ll_struct *VAR_1)
{
 struct sk_buff *VAR_2 = ((void*)0);

 while ((VAR_2 = FUNC_0(&VAR_1->tx_wait_q)))
  FUNC_1(&VAR_1->txq, VAR_2);

 VAR_1->hcill_state = VAR_0;
}
