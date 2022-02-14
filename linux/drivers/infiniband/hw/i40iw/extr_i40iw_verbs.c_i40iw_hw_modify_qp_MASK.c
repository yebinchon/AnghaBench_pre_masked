
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_qp {int iwarp_state; int sc_qp; int cm_node; } ;
struct i40iw_modify_qp_info {int next_iwarp_state; } ;
struct i40iw_gen_ae_info {int ae_source; int ae_code; } ;
struct i40iw_device {int cqp; } ;
struct TYPE_4__ {uintptr_t scratch; int * qp; struct i40iw_modify_qp_info info; } ;
struct TYPE_5__ {TYPE_1__ qp_modify; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct i40iw_device*,int *,struct i40iw_gen_ae_info*,int) ;
 struct i40iw_cqp_request* FUNC_1 (int *,int) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i40iw_modify_qp_info*,struct i40iw_modify_qp_info*,int) ;

void FUNC_5(struct i40iw_device *VAR_2, struct i40iw_qp *VAR_3,
   struct i40iw_modify_qp_info *VAR_4, bool VAR_5)
{
 struct i40iw_cqp_request *VAR_6;
 struct cqp_commands_info *VAR_7;
 struct i40iw_modify_qp_info *VAR_8;
 struct i40iw_gen_ae_info VAR_9;

 VAR_6 = FUNC_1(&VAR_2->cqp, VAR_5);
 if (!VAR_6)
  return;

 VAR_7 = &VAR_6->info;
 VAR_8 = &VAR_7->in.u.qp_modify.info;
 FUNC_4(VAR_8, VAR_4, sizeof(*VAR_8));
 VAR_7->cqp_cmd = VAR_1;
 VAR_7->post_sq = 1;
 VAR_7->in.u.qp_modify.qp = &VAR_3->sc_qp;
 VAR_7->in.u.qp_modify.scratch = (uintptr_t)VAR_6;
 if (!FUNC_2(VAR_2, VAR_6))
  return;

 switch (VAR_8->next_iwarp_state) {
 case 129:
  if (VAR_3->iwarp_state == 130)
   FUNC_3(VAR_3->cm_node);

 case 130:
 case 128:
 case 132:
  VAR_9.ae_code = VAR_0;
  VAR_9.ae_source = 0;
  FUNC_0(VAR_2, &VAR_3->sc_qp, &VAR_9, 0);
  break;
 case 131:
 default:
  break;
 }
}
