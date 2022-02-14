
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mrvl_data {int txq; } ;
struct hci_uart {struct mrvl_data* priv; } ;


 int FUNC_0 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct hci_uart *VAR_0, struct sk_buff *VAR_1)
{
 struct mrvl_data *VAR_2 = VAR_0->priv;

 FUNC_0(&VAR_2->txq, VAR_1);
 return 0;
}
