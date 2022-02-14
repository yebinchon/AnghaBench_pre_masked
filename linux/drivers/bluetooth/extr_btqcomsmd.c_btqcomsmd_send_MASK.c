
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int byte_tx; int cmd_tx; int err_tx; int acl_tx; } ;
struct hci_dev {TYPE_1__ stat; } ;
struct btqcomsmd {int cmd_channel; int acl_channel; } ;


 int VAR_0 ;


 struct btqcomsmd* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct btqcomsmd *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 switch (FUNC_1(VAR_2)) {
 case 129:
  VAR_4 = FUNC_3(VAR_3->acl_channel, VAR_2->data, VAR_2->len);
  if (VAR_4) {
   VAR_1->stat.err_tx++;
   break;
  }
  VAR_1->stat.acl_tx++;
  VAR_1->stat.byte_tx += VAR_2->len;
  break;
 case 128:
  VAR_4 = FUNC_3(VAR_3->cmd_channel, VAR_2->data, VAR_2->len);
  if (VAR_4) {
   VAR_1->stat.err_tx++;
   break;
  }
  VAR_1->stat.cmd_tx++;
  VAR_1->stat.byte_tx += VAR_2->len;
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 if (!VAR_4)
  FUNC_2(VAR_2);

 return VAR_4;
}
