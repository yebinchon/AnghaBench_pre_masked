
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int q_depth; int queue; scalar_t__ reset; } ;
struct rsxx_cardinfo {TYPE_1__ creg_ctrl; int halt; } ;
struct creg_cmd {unsigned int op; unsigned int addr; unsigned int cnt8; int stream; int list; scalar_t__ status; void* cb_private; int cb; void* buf; } ;
typedef int creg_cmd_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rsxx_cardinfo*) ;
 struct creg_cmd* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rsxx_cardinfo *VAR_6,
     unsigned int VAR_7,
     unsigned int VAR_8,
     unsigned int VAR_9,
     void *VAR_10,
     int VAR_11,
     creg_cmd_cb VAR_12,
     void *VAR_13)
{
 struct creg_cmd *VAR_14;


 if (FUNC_6(VAR_6->halt))
  return -VAR_1;

 if (VAR_6->creg_ctrl.reset)
  return -VAR_0;

 if (VAR_9 > VAR_4)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_14)
  return -VAR_2;

 FUNC_0(&VAR_14->list);

 VAR_14->op = VAR_7;
 VAR_14->addr = VAR_8;
 VAR_14->cnt8 = VAR_9;
 VAR_14->buf = VAR_10;
 VAR_14->stream = VAR_11;
 VAR_14->cb = VAR_12;
 VAR_14->cb_private = VAR_13;
 VAR_14->status = 0;

 FUNC_4(&VAR_6->creg_ctrl.lock);
 FUNC_3(&VAR_14->list, &VAR_6->creg_ctrl.queue);
 VAR_6->creg_ctrl.q_depth++;
 FUNC_1(VAR_6);
 FUNC_5(&VAR_6->creg_ctrl.lock);

 return 0;
}
