
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_sc_cq {int dummy; } ;
struct i40iw_cqp {int dummy; } ;
struct i40iw_device {struct i40iw_cqp cqp; } ;
struct TYPE_4__ {uintptr_t scratch; struct i40iw_sc_cq* cq; } ;
struct TYPE_5__ {TYPE_1__ cq_create; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct i40iw_cqp_request* FUNC_0 (struct i40iw_cqp*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;

enum i40iw_status_code FUNC_3(struct i40iw_sc_dev *VAR_2,
            struct i40iw_sc_cq *VAR_3)
{
 struct i40iw_device *VAR_4 = (struct i40iw_device *)VAR_2->back_dev;
 struct i40iw_cqp *VAR_5 = &VAR_4->cqp;
 struct i40iw_cqp_request *VAR_6;
 struct cqp_commands_info *VAR_7;
 enum i40iw_status_code VAR_8;

 VAR_6 = FUNC_0(VAR_5, 1);
 if (!VAR_6)
  return VAR_0;

 VAR_7 = &VAR_6->info;
 VAR_7->cqp_cmd = VAR_1;
 VAR_7->post_sq = 1;
 VAR_7->in.u.cq_create.cq = VAR_3;
 VAR_7->in.u.cq_create.scratch = (uintptr_t)VAR_6;
 VAR_8 = FUNC_1(VAR_4, VAR_6);
 if (VAR_8)
  FUNC_2("CQP-OP Create QP fail");

 return VAR_8;
}
