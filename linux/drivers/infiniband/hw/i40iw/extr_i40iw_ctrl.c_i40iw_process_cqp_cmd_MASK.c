
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {int cqp_lock; int cqp_cmd_head; int cqp; } ;
struct cqp_commands_info {int cqp_cmd_entry; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (struct i40iw_sc_dev*,struct cqp_commands_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

enum i40iw_status_code FUNC_6(struct i40iw_sc_dev *VAR_0,
          struct cqp_commands_info *VAR_1)
{
 enum i40iw_status_code VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_4(&VAR_0->cqp_lock, VAR_3);
 if (FUNC_3(&VAR_0->cqp_cmd_head) && !FUNC_1(VAR_0->cqp))
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 else
  FUNC_2(&VAR_1->cqp_cmd_entry, &VAR_0->cqp_cmd_head);
 FUNC_5(&VAR_0->cqp_lock, VAR_3);
 return VAR_2;
}
