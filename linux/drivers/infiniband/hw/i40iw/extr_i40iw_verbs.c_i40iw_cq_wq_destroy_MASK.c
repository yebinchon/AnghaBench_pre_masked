
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_sc_cq {int dummy; } ;
struct i40iw_device {int cqp; } ;
struct TYPE_4__ {uintptr_t scratch; struct i40iw_sc_cq* cq; } ;
struct TYPE_5__ {TYPE_1__ cq_destroy; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 struct i40iw_cqp_request* FUNC_0 (int *,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct i40iw_device *VAR_1, struct i40iw_sc_cq *VAR_2)
{
 enum i40iw_status_code VAR_3;
 struct i40iw_cqp_request *VAR_4;
 struct cqp_commands_info *VAR_5;

 VAR_4 = FUNC_0(&VAR_1->cqp, 1);
 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->info;

 VAR_5->cqp_cmd = VAR_0;
 VAR_5->post_sq = 1;
 VAR_5->in.u.cq_destroy.cq = VAR_2;
 VAR_5->in.u.cq_destroy.scratch = (uintptr_t)VAR_4;
 VAR_3 = FUNC_1(VAR_1, VAR_4);
 if (VAR_3)
  FUNC_2("CQP-OP Destroy QP fail");
}
