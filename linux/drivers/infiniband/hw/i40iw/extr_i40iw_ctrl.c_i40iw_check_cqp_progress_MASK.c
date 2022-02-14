
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {scalar_t__* cqp_cmd_stats; } ;
struct i40iw_cqp_timeout {scalar_t__ compl_cqp_cmds; scalar_t__ count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(struct i40iw_cqp_timeout *VAR_2, struct i40iw_sc_dev *VAR_3)
{
 if (VAR_2->compl_cqp_cmds != VAR_3->cqp_cmd_stats[VAR_0]) {
  VAR_2->compl_cqp_cmds = VAR_3->cqp_cmd_stats[VAR_0];
  VAR_2->count = 0;
 } else {
  if (VAR_3->cqp_cmd_stats[VAR_1] != VAR_2->compl_cqp_cmds)
   VAR_2->count++;
 }
}
