
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {size_t free_head; int event_sem; int context_lock; struct mthca_cmd_context* context; scalar_t__ token_mask; } ;
struct mthca_dev {TYPE_1__ cmd; } ;
struct mthca_cmd_context {size_t next; int result; int out_param; scalar_t__ status; int done; int token; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mthca_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct mthca_dev*,char*,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct mthca_dev *VAR_2,
     u64 VAR_3,
     u64 *VAR_4,
     int VAR_5,
     u32 VAR_6,
     u8 VAR_7,
     u16 VAR_8,
     unsigned long VAR_9)
{
 int VAR_10 = 0;
 struct mthca_cmd_context *VAR_11;

 FUNC_1(&VAR_2->cmd.event_sem);

 FUNC_6(&VAR_2->cmd.context_lock);
 FUNC_0(VAR_2->cmd.free_head < 0);
 VAR_11 = &VAR_2->cmd.context[VAR_2->cmd.free_head];
 VAR_11->token += VAR_2->cmd.token_mask + 1;
 VAR_2->cmd.free_head = VAR_11->next;
 FUNC_7(&VAR_2->cmd.context_lock);

 FUNC_2(&VAR_11->done);

 VAR_10 = FUNC_3(VAR_2, VAR_3,
        VAR_4 ? *VAR_4 : 0,
        VAR_6, VAR_7,
        VAR_8, VAR_11->token, 1);
 if (VAR_10)
  goto out;

 if (!FUNC_9(&VAR_11->done, VAR_9)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = VAR_11->result;
 if (VAR_10)
  goto out;

 if (VAR_11->status) {
  FUNC_4(VAR_2, "Command %02x completed with status %02x\n",
     VAR_8, VAR_11->status);
  VAR_10 = FUNC_5(VAR_11->status);
 }

 if (VAR_5 && VAR_4) {
  *VAR_4 = VAR_11->out_param;
 } else if (VAR_5) {
  VAR_10 = -VAR_1;
  goto out;
 }

out:
 FUNC_6(&VAR_2->cmd.context_lock);
 VAR_11->next = VAR_2->cmd.free_head;
 VAR_2->cmd.free_head = VAR_11 - VAR_2->cmd.context;
 FUNC_7(&VAR_2->cmd.context_lock);

 FUNC_8(&VAR_2->cmd.event_sem);
 return VAR_10;
}
