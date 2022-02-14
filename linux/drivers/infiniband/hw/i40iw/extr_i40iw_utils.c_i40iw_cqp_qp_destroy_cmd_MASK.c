
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_sc_qp {int dummy; } ;
struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_cqp {int dummy; } ;
struct i40iw_device {struct i40iw_cqp cqp; } ;
struct TYPE_4__ {uintptr_t scratch; int remove_hash_idx; struct i40iw_sc_qp* qp; } ;
struct TYPE_5__ {TYPE_1__ qp_destroy; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 struct i40iw_cqp_request* FUNC_0 (struct i40iw_cqp*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cqp_commands_info*,int ,int) ;

void FUNC_4(struct i40iw_sc_dev *VAR_1, struct i40iw_sc_qp *VAR_2)
{
 struct i40iw_device *VAR_3 = (struct i40iw_device *)VAR_1->back_dev;
 struct i40iw_cqp *VAR_4 = &VAR_3->cqp;
 struct i40iw_cqp_request *VAR_5;
 struct cqp_commands_info *VAR_6;
 enum i40iw_status_code VAR_7;

 VAR_5 = FUNC_0(VAR_4, 1);
 if (!VAR_5)
  return;

 VAR_6 = &VAR_5->info;
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->cqp_cmd = VAR_0;
 VAR_6->post_sq = 1;
 VAR_6->in.u.qp_destroy.qp = VAR_2;
 VAR_6->in.u.qp_destroy.scratch = (uintptr_t)VAR_5;
 VAR_6->in.u.qp_destroy.remove_hash_idx = 1;
 VAR_7 = FUNC_1(VAR_3, VAR_5);
 if (VAR_7)
  FUNC_2("CQP QP_DESTROY fail");
}
