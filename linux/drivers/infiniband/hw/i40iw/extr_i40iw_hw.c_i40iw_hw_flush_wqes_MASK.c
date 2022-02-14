
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i40iw_sc_qp {scalar_t__ back_qp; } ;
struct i40iw_qp_flush_info {int dummy; } ;
struct i40iw_qp {int rq_drained; int sq_drained; } ;
struct i40iw_device {int cqp; } ;
struct TYPE_8__ {int min_err_code; int maj_err_code; } ;
struct TYPE_5__ {uintptr_t scratch; struct i40iw_sc_qp* qp; struct i40iw_qp_flush_info info; } ;
struct TYPE_6__ {TYPE_1__ qp_flush_wqes; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {TYPE_4__ compl_info; struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct i40iw_cqp_request* FUNC_1 (int *,int) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct i40iw_qp_flush_info*,struct i40iw_qp_flush_info*,int) ;

enum i40iw_status_code FUNC_5(struct i40iw_device *VAR_2,
        struct i40iw_sc_qp *VAR_3,
        struct i40iw_qp_flush_info *VAR_4,
        bool VAR_5)
{
 enum i40iw_status_code VAR_6;
 struct i40iw_qp_flush_info *VAR_7;
 struct i40iw_cqp_request *VAR_8;
 struct cqp_commands_info *VAR_9;
 struct i40iw_qp *VAR_10 = (struct i40iw_qp *)VAR_3->back_qp;

 VAR_8 = FUNC_1(&VAR_2->cqp, VAR_5);
 if (!VAR_8)
  return VAR_0;

 VAR_9 = &VAR_8->info;
 VAR_7 = &VAR_8->info.in.u.qp_flush_wqes.info;
 FUNC_4(VAR_7, VAR_4, sizeof(*VAR_7));

 VAR_9->cqp_cmd = VAR_1;
 VAR_9->post_sq = 1;
 VAR_9->in.u.qp_flush_wqes.qp = VAR_3;
 VAR_9->in.u.qp_flush_wqes.scratch = (uintptr_t)VAR_8;
 VAR_6 = FUNC_2(VAR_2, VAR_8);
 if (VAR_6) {
  FUNC_3("CQP-OP Flush WQE's fail");
  FUNC_0(&VAR_10->sq_drained);
  FUNC_0(&VAR_10->rq_drained);
  return VAR_6;
 }
 if (!VAR_8->compl_info.maj_err_code) {
  switch (VAR_8->compl_info.min_err_code) {
  case 129:
   FUNC_0(&VAR_10->sq_drained);
   break;
  case 128:
   FUNC_0(&VAR_10->rq_drained);
   break;
  case 130:
   break;
  default:
   FUNC_0(&VAR_10->sq_drained);
   FUNC_0(&VAR_10->rq_drained);
   break;
  }
 }

 return 0;
}
