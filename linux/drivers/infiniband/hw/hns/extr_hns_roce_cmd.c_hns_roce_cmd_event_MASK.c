
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct TYPE_2__ {size_t token_mask; struct hns_roce_cmd_context* context; } ;
struct hns_roce_dev {TYPE_1__ cmd; } ;
struct hns_roce_cmd_context {size_t token; int done; int out_param; int result; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct hns_roce_dev *VAR_2, u16 VAR_3, u8 VAR_4,
   u64 VAR_5)
{
 struct hns_roce_cmd_context
  *VAR_6 = &VAR_2->cmd.context[VAR_3 & VAR_2->cmd.token_mask];

 if (VAR_3 != VAR_6->token)
  return;

 VAR_6->result = (VAR_4 == VAR_1) ? 0 : (-VAR_0);
 VAR_6->out_param = VAR_5;
 FUNC_0(&VAR_6->done);
}
