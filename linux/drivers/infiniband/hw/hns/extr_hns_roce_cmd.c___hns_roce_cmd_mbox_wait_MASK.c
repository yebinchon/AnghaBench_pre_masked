
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hns_roce_cmdq {size_t free_head; int context_lock; struct hns_roce_cmd_context* context; scalar_t__ token_mask; } ;
struct hns_roce_dev {struct device* dev; struct hns_roce_cmdq cmd; } ;
struct hns_roce_cmd_context {size_t next; int result; int done; int token; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct hns_roce_dev*,int ,int ,unsigned long,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct hns_roce_dev *VAR_1, u64 VAR_2,
        u64 VAR_3, unsigned long VAR_4,
        u8 VAR_5, u16 VAR_6,
        unsigned long VAR_7)
{
 struct hns_roce_cmdq *VAR_8 = &VAR_1->cmd;
 struct hns_roce_cmd_context *VAR_9;
 struct device *VAR_10 = VAR_1->dev;
 int VAR_11;

 FUNC_5(&VAR_8->context_lock);
 FUNC_0(VAR_8->free_head < 0);
 VAR_9 = &VAR_8->context[VAR_8->free_head];
 VAR_9->token += VAR_8->token_mask + 1;
 VAR_8->free_head = VAR_9->next;
 FUNC_6(&VAR_8->context_lock);

 FUNC_3(&VAR_9->done);

 VAR_11 = FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6,
     VAR_9->token, 1);
 if (VAR_11)
  goto out;






 if (!FUNC_7(&VAR_9->done,
      FUNC_4(VAR_7))) {
  FUNC_1(VAR_10, "[cmd]wait_for_completion_timeout timeout\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = VAR_9->result;
 if (VAR_11) {
  FUNC_1(VAR_10, "[cmd]event mod cmd process error!err=%d\n", VAR_11);
  goto out;
 }

out:
 FUNC_5(&VAR_8->context_lock);
 VAR_9->next = VAR_8->free_head;
 VAR_8->free_head = VAR_9 - VAR_8->context;
 FUNC_6(&VAR_8->context_lock);

 return VAR_11;
}
