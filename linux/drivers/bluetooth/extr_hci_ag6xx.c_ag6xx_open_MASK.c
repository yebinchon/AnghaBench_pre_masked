
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct ag6xx_data* priv; } ;
struct ag6xx_data {int txq; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ag6xx_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hci_uart *VAR_2)
{
 struct ag6xx_data *VAR_3;

 FUNC_0("hu %p", VAR_2);

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->txq);

 VAR_2->priv = VAR_3;
 return 0;
}
