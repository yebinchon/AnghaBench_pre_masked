
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct btmtksdio_dev {int tx_work; int txq; } ;


 int FUNC_0 (int *) ;
 struct btmtksdio_dev* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_0)
{
 struct btmtksdio_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->txq);

 FUNC_0(&VAR_1->tx_work);

 return 0;
}
