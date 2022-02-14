
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct virtchnl_work {struct i40iw_cqp_request* cqp_request; } ;
struct i40iw_hmc_fcn_info {int cqp_callback_param; int (* callback_fcn ) (TYPE_6__*,int ,struct i40iw_ccq_cqe_info*) ;} ;
struct i40iw_device {int cqp; } ;
struct TYPE_8__ {TYPE_6__* dev; struct i40iw_hmc_fcn_info info; } ;
struct TYPE_9__ {TYPE_2__ manage_hmc_pm; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_11__ {TYPE_4__ in; } ;
struct TYPE_7__ {int error; int op_ret_val; int op_code; int min_err_code; int maj_err_code; } ;
struct i40iw_cqp_request {TYPE_5__ info; TYPE_1__ compl_info; } ;
struct i40iw_ccq_cqe_info {int error; scalar_t__ scratch; int op_ret_val; int op_code; int min_err_code; int maj_err_code; int * cqp; } ;
struct TYPE_12__ {scalar_t__ back_dev; } ;


 int FUNC_0 (int *,struct i40iw_cqp_request*) ;
 int FUNC_1 (TYPE_6__*,int ,struct i40iw_ccq_cqe_info*) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_0)
{
 struct i40iw_cqp_request *VAR_1 =
     ((struct virtchnl_work *)VAR_0)->cqp_request;
 struct i40iw_ccq_cqe_info VAR_2;
 struct i40iw_hmc_fcn_info *VAR_3 =
   &VAR_1->info.in.u.manage_hmc_pm.info;
 struct i40iw_device *VAR_4 =
     (struct i40iw_device *)VAR_1->info.in.u.manage_hmc_pm.dev->back_dev;

 VAR_2.cqp = ((void*)0);
 VAR_2.maj_err_code = VAR_1->compl_info.maj_err_code;
 VAR_2.min_err_code = VAR_1->compl_info.min_err_code;
 VAR_2.op_code = VAR_1->compl_info.op_code;
 VAR_2.op_ret_val = VAR_1->compl_info.op_ret_val;
 VAR_2.scratch = 0;
 VAR_2.error = VAR_1->compl_info.error;
 VAR_3->callback_fcn(VAR_1->info.in.u.manage_hmc_pm.dev,
     VAR_3->cqp_callback_param, &VAR_2);
 FUNC_0(&VAR_4->cqp, VAR_1);
}
