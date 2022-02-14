
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct ath_struct* priv; } ;
struct ath_struct {int ctxtsw; struct hci_uart* hu; int txq; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct hci_uart*) ;
 struct ath_struct* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_4)
{
 struct ath_struct *VAR_5;

 FUNC_0("hu %p", VAR_4);

 if (!FUNC_2(VAR_4))
  return -VAR_1;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(&VAR_5->txq);

 VAR_4->priv = VAR_5;
 VAR_5->hu = VAR_4;

 FUNC_1(&VAR_5->ctxtsw, VAR_3);

 return 0;
}
