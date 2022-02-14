
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i40iw_manage_vf_pble_info {int dummy; } ;
struct TYPE_8__ {int sc_cqp; } ;
struct i40iw_device {scalar_t__ init_state; TYPE_4__ cqp; } ;
struct TYPE_5__ {uintptr_t scratch; int * cqp; struct i40iw_manage_vf_pble_info info; } ;
struct TYPE_6__ {TYPE_1__ manage_vf_pble_bp; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i40iw_cqp_request* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_manage_vf_pble_info*,struct i40iw_manage_vf_pble_info*,int) ;

enum i40iw_status_code FUNC_4(struct i40iw_device *VAR_3,
        struct i40iw_manage_vf_pble_info *VAR_4,
        bool VAR_5)
{
 enum i40iw_status_code VAR_6;
 struct i40iw_manage_vf_pble_info *VAR_7;
 struct i40iw_cqp_request *VAR_8;
 struct cqp_commands_info *VAR_9;

 if ((VAR_3->init_state < VAR_0) && VAR_5)
  VAR_5 = 0;

 VAR_8 = FUNC_0(&VAR_3->cqp, VAR_5);
 if (!VAR_8)
  return VAR_1;

 VAR_9 = &VAR_8->info;
 VAR_7 = &VAR_8->info.in.u.manage_vf_pble_bp.info;
 FUNC_3(VAR_7, VAR_4, sizeof(*VAR_7));

 VAR_9->cqp_cmd = VAR_2;
 VAR_9->post_sq = 1;
 VAR_9->in.u.manage_vf_pble_bp.cqp = &VAR_3->cqp.sc_cqp;
 VAR_9->in.u.manage_vf_pble_bp.scratch = (uintptr_t)VAR_8;
 VAR_6 = FUNC_1(VAR_3, VAR_8);
 if (VAR_6)
  FUNC_2("CQP-OP Manage VF pble_bp fail");
 return VAR_6;
}
