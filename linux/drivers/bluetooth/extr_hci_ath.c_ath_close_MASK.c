
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct ath_struct* priv; } ;
struct ath_struct {int ctxtsw; int rx_skb; int txq; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ath_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_0)
{
 struct ath_struct *VAR_1 = VAR_0->priv;

 FUNC_0("hu %p", VAR_0);

 FUNC_4(&VAR_1->txq);

 FUNC_3(VAR_1->rx_skb);

 FUNC_1(&VAR_1->ctxtsw);

 VAR_0->priv = ((void*)0);
 FUNC_2(VAR_1);

 return 0;
}
