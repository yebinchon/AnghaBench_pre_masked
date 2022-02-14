
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int hdev; struct bcm_data* priv; } ;
struct bcm_data {int txq; } ;


 int FUNC_0 (int ,char*,struct hci_uart*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hci_uart *VAR_0)
{
 struct bcm_data *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_0->hdev, "hu %p", VAR_0);

 FUNC_1(&VAR_1->txq);

 return 0;
}
