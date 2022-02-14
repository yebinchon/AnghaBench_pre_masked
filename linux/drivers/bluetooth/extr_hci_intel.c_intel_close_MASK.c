
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_data {int rx_skb; int txq; int busy_work; } ;
struct hci_uart {struct intel_data* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_uart*,int) ;
 int FUNC_3 (struct intel_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hci_uart *VAR_0)
{
 struct intel_data *VAR_1 = VAR_0->priv;

 FUNC_0("hu %p", VAR_0);

 FUNC_1(&VAR_1->busy_work);

 FUNC_2(VAR_0, 0);

 FUNC_5(&VAR_1->txq);
 FUNC_4(VAR_1->rx_skb);
 FUNC_3(VAR_1);

 VAR_0->priv = ((void*)0);
 return 0;
}
