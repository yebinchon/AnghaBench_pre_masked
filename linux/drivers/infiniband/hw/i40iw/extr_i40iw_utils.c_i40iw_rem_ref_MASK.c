
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct ib_qp {int dummy; } ;
struct TYPE_5__ {size_t qp_num; } ;
struct i40iw_qp {int iwpd; int sc_qp; TYPE_1__ ibqp; int refcount; struct i40iw_device* iwdev; } ;
struct i40iw_device {int cqp; int qptable_lock; int ** qp_table; } ;
struct TYPE_6__ {uintptr_t scratch; int remove_hash_idx; int * qp; } ;
struct TYPE_7__ {TYPE_2__ qp_destroy; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_4__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; void* param; int callback_fcn; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_qp*,size_t) ;
 struct i40iw_cqp_request* FUNC_2 (int *,int) ;
 int FUNC_3 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_4 (struct i40iw_device*) ;
 int FUNC_5 (int ,struct i40iw_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct i40iw_qp* FUNC_8 (struct ib_qp*) ;

void FUNC_9(struct ib_qp *VAR_2)
{
 struct i40iw_qp *VAR_3;
 enum i40iw_status_code VAR_4;
 struct i40iw_cqp_request *VAR_5;
 struct cqp_commands_info *VAR_6;
 struct i40iw_device *VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;

 VAR_3 = FUNC_8(VAR_2);
 VAR_7 = VAR_3->iwdev;
 FUNC_6(&VAR_7->qptable_lock, VAR_9);
 if (!FUNC_0(&VAR_3->refcount)) {
  FUNC_7(&VAR_7->qptable_lock, VAR_9);
  return;
 }

 VAR_8 = VAR_3->ibqp.qp_num;
 VAR_7->qp_table[VAR_8] = ((void*)0);
 FUNC_7(&VAR_7->qptable_lock, VAR_9);
 VAR_5 = FUNC_2(&VAR_7->cqp, 0);
 if (!VAR_5)
  return;

 VAR_5->callback_fcn = VAR_1;
 VAR_5->param = (void *)&VAR_3->sc_qp;
 VAR_6 = &VAR_5->info;
 VAR_6->cqp_cmd = VAR_0;
 VAR_6->post_sq = 1;
 VAR_6->in.u.qp_destroy.qp = &VAR_3->sc_qp;
 VAR_6->in.u.qp_destroy.scratch = (uintptr_t)VAR_5;
 VAR_6->in.u.qp_destroy.remove_hash_idx = 1;
 VAR_4 = FUNC_3(VAR_7, VAR_5);
 if (!VAR_4)
  return;

 FUNC_5(VAR_3->iwpd, VAR_7);
 FUNC_1(VAR_7, VAR_3, VAR_8);
 FUNC_4(VAR_7);
}
