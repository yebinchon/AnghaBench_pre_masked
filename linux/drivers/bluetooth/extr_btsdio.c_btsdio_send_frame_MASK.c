
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;
struct btsdio_data {int work; int txq; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;



 struct btsdio_data* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct btsdio_data *VAR_3 = FUNC_1(VAR_1);

 FUNC_0("%s", VAR_1->name);

 switch (FUNC_2(VAR_2)) {
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

 FUNC_4(&VAR_3->txq, VAR_2);

 FUNC_3(&VAR_3->work);

 return 0;
}
