
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_sc_dev {TYPE_2__* ccq_ops; } ;
struct i40iw_sc_cq {int dummy; } ;
struct i40iw_device {int cqp; struct i40iw_sc_dev sc_dev; } ;
struct TYPE_3__ {scalar_t__ error; int op_ret_val; int min_err_code; int maj_err_code; } ;
struct i40iw_cqp_request {int request_done; int (* callback_fcn ) (struct i40iw_cqp_request*,int) ;int waitq; scalar_t__ waiting; TYPE_1__ compl_info; } ;
struct i40iw_ccq_cqe_info {scalar_t__ error; int op_ret_val; int min_err_code; int maj_err_code; int op_code; scalar_t__ scratch; } ;
typedef int info ;
struct TYPE_4__ {int (* ccq_get_cqe_info ) (struct i40iw_sc_cq*,struct i40iw_ccq_cqe_info*) ;int (* ccq_arm ) (struct i40iw_sc_cq*) ;} ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*) ;
 int FUNC_2 (int *,struct i40iw_cqp_request*) ;
 int FUNC_3 (struct i40iw_ccq_cqe_info*,int ,int) ;
 int FUNC_4 (struct i40iw_sc_cq*,struct i40iw_ccq_cqe_info*) ;
 int FUNC_5 (struct i40iw_cqp_request*,int) ;
 int FUNC_6 (struct i40iw_sc_cq*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct i40iw_device *VAR_0, struct i40iw_sc_cq *VAR_1, bool VAR_2)
{
 struct i40iw_cqp_request *VAR_3;
 struct i40iw_sc_dev *VAR_4 = &VAR_0->sc_dev;
 u32 VAR_5 = 0;
 struct i40iw_ccq_cqe_info VAR_6;
 int VAR_7;

 do {
  FUNC_3(&VAR_6, 0, sizeof(VAR_6));
  VAR_7 = VAR_4->ccq_ops->ccq_get_cqe_info(VAR_1, &VAR_6);
  if (VAR_7)
   break;
  VAR_3 = (struct i40iw_cqp_request *)(unsigned long)VAR_6.scratch;
  if (VAR_6.error)
   FUNC_0("opcode = 0x%x maj_err_code = 0x%x min_err_code = 0x%x\n",
         VAR_6.op_code, VAR_6.maj_err_code, VAR_6.min_err_code);
  if (VAR_3) {
   VAR_3->compl_info.maj_err_code = VAR_6.maj_err_code;
   VAR_3->compl_info.min_err_code = VAR_6.min_err_code;
   VAR_3->compl_info.op_ret_val = VAR_6.op_ret_val;
   VAR_3->compl_info.error = VAR_6.error;

   if (VAR_3->waiting) {
    VAR_3->request_done = 1;
    FUNC_7(&VAR_3->waitq);
    FUNC_2(&VAR_0->cqp, VAR_3);
   } else {
    if (VAR_3->callback_fcn)
     VAR_3->callback_fcn(VAR_3, 1);
    FUNC_2(&VAR_0->cqp, VAR_3);
   }
  }

  VAR_5++;
 } while (1);

 if (VAR_2 && VAR_5) {
  FUNC_1(VAR_4);
  VAR_4->ccq_ops->ccq_arm(VAR_1);
 }
}
