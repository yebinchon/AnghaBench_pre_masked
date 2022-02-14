
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct ag6xx_data* priv; } ;
struct ag6xx_data {int txq; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hci_uart *VAR_0)
{
 struct ag6xx_data *VAR_1 = VAR_0->priv;

 FUNC_0("hu %p", VAR_0);

 FUNC_1(&VAR_1->txq);
 return 0;
}
