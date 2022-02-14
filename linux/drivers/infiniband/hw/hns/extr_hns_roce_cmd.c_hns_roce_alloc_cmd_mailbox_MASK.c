
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pool; } ;
struct hns_roce_dev {TYPE_1__ cmd; } ;
struct hns_roce_cmd_mailbox {int buf; int dma; } ;


 int VAR_0 ;
 struct hns_roce_cmd_mailbox* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct hns_roce_cmd_mailbox*) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (int,int ) ;

struct hns_roce_cmd_mailbox
 *FUNC_4(struct hns_roce_dev *VAR_2)
{
 struct hns_roce_cmd_mailbox *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->buf = FUNC_1(VAR_2->cmd.pool, VAR_1,
          &VAR_3->dma);
 if (!VAR_3->buf) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
