
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_cmdq {int max_cmds; int use_events; int token_mask; int context_lock; int event_sem; scalar_t__ free_head; TYPE_1__* context; } ;
struct hns_roce_dev {struct hns_roce_cmdq cmd; } ;
struct TYPE_2__ {int token; int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hns_roce_dev *VAR_3)
{
 struct hns_roce_cmdq *VAR_4 = &VAR_3->cmd;
 int VAR_5;

 VAR_4->context = FUNC_0(VAR_4->max_cmds,
     sizeof(*VAR_4->context),
     VAR_2);
 if (!VAR_4->context)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4->max_cmds; ++VAR_5) {
  VAR_4->context[VAR_5].token = VAR_5;
  VAR_4->context[VAR_5].next = VAR_5 + 1;
 }

 VAR_4->context[VAR_4->max_cmds - 1].next = -1;
 VAR_4->free_head = 0;

 FUNC_1(&VAR_4->event_sem, VAR_4->max_cmds);
 FUNC_2(&VAR_4->context_lock);

 VAR_4->token_mask = VAR_0;
 VAR_4->use_events = 1;

 return 0;
}
