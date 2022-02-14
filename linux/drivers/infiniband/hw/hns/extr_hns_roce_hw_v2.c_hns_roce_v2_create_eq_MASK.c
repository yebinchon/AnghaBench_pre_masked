
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_eq {TYPE_2__* buf_list; int eqn; } ;
struct TYPE_4__ {int eqe_buf_pg_sz; int eqe_hop_num; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct hns_roce_cmd_mailbox {int dma; int buf; } ;
struct hns_roce_buf_list {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int map; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int VAR_3 ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (struct device*,int,int ,int ) ;
 struct hns_roce_cmd_mailbox* FUNC_5 (struct hns_roce_dev*) ;
 int FUNC_6 (struct hns_roce_dev*,int ,int ,int ,int ,unsigned int,int ) ;
 int FUNC_7 (struct hns_roce_dev*,struct hns_roce_eq*,int ) ;
 int FUNC_8 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_9 (struct hns_roce_dev*,struct hns_roce_eq*) ;
 int FUNC_10 (struct hns_roce_dev*,struct hns_roce_eq*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct hns_roce_dev *VAR_4,
     struct hns_roce_eq *VAR_5,
     unsigned int VAR_6)
{
 struct device *VAR_7 = VAR_4->dev;
 struct hns_roce_cmd_mailbox *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;


 VAR_8 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (!VAR_4->caps.eqe_hop_num) {
  VAR_9 = 1 << (VAR_4->caps.eqe_buf_pg_sz + VAR_3);

  VAR_5->buf_list = FUNC_12(sizeof(struct hns_roce_buf_list),
           VAR_1);
  if (!VAR_5->buf_list) {
   VAR_10 = -VAR_0;
   goto free_cmd_mbox;
  }

  VAR_5->buf_list->buf = FUNC_3(VAR_7, VAR_9,
             &(VAR_5->buf_list->map),
             VAR_1);
  if (!VAR_5->buf_list->buf) {
   VAR_10 = -VAR_0;
   goto err_alloc_buf;
  }

 } else {
  VAR_10 = FUNC_9(VAR_4, VAR_5);
  if (VAR_10) {
   VAR_10 = -VAR_0;
   goto free_cmd_mbox;
  }
 }

 FUNC_7(VAR_4, VAR_5, VAR_8->buf);

 VAR_10 = FUNC_6(VAR_4, VAR_8->dma, 0, VAR_5->eqn, 0,
    VAR_6, VAR_2);
 if (VAR_10) {
  FUNC_2(VAR_7, "[mailbox cmd] create eqc failed.\n");
  goto err_cmd_mbox;
 }

 FUNC_8(VAR_4, VAR_8);

 return 0;

err_cmd_mbox:
 if (!VAR_4->caps.eqe_hop_num)
  FUNC_4(VAR_7, VAR_9, VAR_5->buf_list->buf,
      VAR_5->buf_list->map);
 else {
  FUNC_10(VAR_4, VAR_5);
  goto free_cmd_mbox;
 }

err_alloc_buf:
 FUNC_11(VAR_5->buf_list);

free_cmd_mbox:
 FUNC_8(VAR_4, VAR_8);

 return VAR_10;
}
