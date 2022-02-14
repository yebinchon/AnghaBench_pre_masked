
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_sc_qp {int dummy; } ;
struct i40iw_gen_ae_info {int ae_code; } ;
struct i40iw_device {int cqp; } ;
struct TYPE_4__ {uintptr_t scratch; struct i40iw_sc_qp* qp; struct i40iw_gen_ae_info info; } ;
struct TYPE_5__ {TYPE_1__ gen_ae; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;


 int VAR_0 ;
 struct i40iw_cqp_request* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct i40iw_gen_ae_info*,struct i40iw_gen_ae_info*,int) ;

void FUNC_4(struct i40iw_device *VAR_1,
    struct i40iw_sc_qp *VAR_2,
    struct i40iw_gen_ae_info *VAR_3,
    bool VAR_4)
{
 struct i40iw_gen_ae_info *VAR_5;
 struct i40iw_cqp_request *VAR_6;
 struct cqp_commands_info *VAR_7;

 VAR_6 = FUNC_0(&VAR_1->cqp, VAR_4);
 if (!VAR_6)
  return;

 VAR_7 = &VAR_6->info;
 VAR_5 = &VAR_6->info.in.u.gen_ae.info;
 FUNC_3(VAR_5, VAR_3, sizeof(*VAR_5));

 VAR_7->cqp_cmd = VAR_0;
 VAR_7->post_sq = 1;
 VAR_7->in.u.gen_ae.qp = VAR_2;
 VAR_7->in.u.gen_ae.scratch = (uintptr_t)VAR_6;
 if (FUNC_1(VAR_1, VAR_6))
  FUNC_2("CQP OP failed attempting to generate ae_code=0x%x\n",
        VAR_3->ae_code);
}
