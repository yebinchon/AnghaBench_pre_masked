
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; } ;
struct btmtksdio_dev {int tx_work; int txq; } ;


 int VAR_0 ;



 struct btmtksdio_dev* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct btmtksdio_dev *VAR_3 = FUNC_0(VAR_1);

 switch (FUNC_1(VAR_2)) {
 case 129:
  VAR_1->stat.cmd_tx++;
  break;

 case 130:
  VAR_1->stat.acl_tx++;
  break;

 case 128:
  VAR_1->stat.sco_tx++;
  break;

 default:
  return -VAR_0;
 }

 FUNC_3(&VAR_3->txq, VAR_2);

 FUNC_2(&VAR_3->tx_work);

 return 0;
}
