
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
struct i40iw_create_qp_info {int cq_num_valid; int next_iwarp_state; } ;
struct TYPE_4__ {uintptr_t scratch; struct i40iw_sc_qp* qp; struct i40iw_create_qp_info info; } ;
struct TYPE_5__ {TYPE_1__ qp_create; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i40iw_cqp_request* FUNC_0 (struct i40iw_cqp*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_create_qp_info*,int ,int) ;

enum i40iw_status_code FUNC_4(struct i40iw_sc_dev *VAR_3,
            struct i40iw_sc_qp *VAR_4)
{
 struct i40iw_device *VAR_5 = (struct i40iw_device *)VAR_3->back_dev;
 struct i40iw_cqp *VAR_6 = &VAR_5->cqp;
 struct i40iw_cqp_request *VAR_7;
 struct cqp_commands_info *VAR_8;
 struct i40iw_create_qp_info *VAR_9;
 enum i40iw_status_code VAR_10;

 VAR_7 = FUNC_0(VAR_6, 1);
 if (!VAR_7)
  return VAR_0;

 VAR_8 = &VAR_7->info;
 VAR_9 = &VAR_7->info.in.u.qp_create.info;

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->cq_num_valid = 1;
 VAR_9->next_iwarp_state = VAR_1;

 VAR_8->cqp_cmd = VAR_2;
 VAR_8->post_sq = 1;
 VAR_8->in.u.qp_create.qp = VAR_4;
 VAR_8->in.u.qp_create.scratch = (uintptr_t)VAR_7;
 VAR_10 = FUNC_1(VAR_5, VAR_7);
 if (VAR_10)
  FUNC_2("CQP-OP QP create fail");
 return VAR_10;
}
