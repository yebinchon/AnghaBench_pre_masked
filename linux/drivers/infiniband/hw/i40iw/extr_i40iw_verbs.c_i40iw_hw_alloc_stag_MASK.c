
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pd_id; } ;
struct i40iw_pd {TYPE_2__ sc_pd; } ;
struct TYPE_6__ {int pd; } ;
struct i40iw_mr {int stag; int length; TYPE_1__ ibmr; } ;
struct i40iw_device {int sc_dev; int cqp; } ;
struct i40iw_allocate_stag_info {int stag_idx; int remote_access; int total_len; int pd_id; int page_size; } ;
struct TYPE_8__ {uintptr_t scratch; int * dev; struct i40iw_allocate_stag_info info; } ;
struct TYPE_9__ {TYPE_3__ alloc_stag; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_5__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i40iw_cqp_request* FUNC_0 (int *,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_allocate_stag_info*,int ,int) ;
 struct i40iw_pd* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i40iw_device *VAR_4, struct i40iw_mr *VAR_5)
{
 struct i40iw_allocate_stag_info *VAR_6;
 struct i40iw_pd *VAR_7 = FUNC_4(VAR_5->ibmr.pd);
 enum i40iw_status_code VAR_8;
 int VAR_9 = 0;
 struct i40iw_cqp_request *VAR_10;
 struct cqp_commands_info *VAR_11;

 VAR_10 = FUNC_0(&VAR_4->cqp, 1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = &VAR_10->info;
 VAR_6 = &VAR_11->in.u.alloc_stag.info;
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->page_size = VAR_3;
 VAR_6->stag_idx = VAR_5->stag >> VAR_1;
 VAR_6->pd_id = VAR_7->sc_pd.pd_id;
 VAR_6->total_len = VAR_5->length;
 VAR_6->remote_access = 1;
 VAR_11->cqp_cmd = VAR_2;
 VAR_11->post_sq = 1;
 VAR_11->in.u.alloc_stag.dev = &VAR_4->sc_dev;
 VAR_11->in.u.alloc_stag.scratch = (uintptr_t)VAR_10;

 VAR_8 = FUNC_1(VAR_4, VAR_10);
 if (VAR_8) {
  VAR_9 = -VAR_0;
  FUNC_2("CQP-OP MR Reg fail");
 }
 return VAR_9;
}
