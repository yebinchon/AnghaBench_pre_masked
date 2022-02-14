
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i40iw_sc_qp {scalar_t__ push_idx; int qs_handle; } ;
struct TYPE_10__ {int sc_cqp; } ;
struct i40iw_device {TYPE_5__ cqp; } ;
struct TYPE_6__ {scalar_t__ push_idx; int free_page; int qs_handle; } ;
struct TYPE_7__ {uintptr_t scratch; int * cqp; TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ manage_push_page; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_4__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct i40iw_cqp_request* FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_device *VAR_2, struct i40iw_sc_qp *VAR_3)
{
 struct i40iw_cqp_request *VAR_4;
 struct cqp_commands_info *VAR_5;
 enum i40iw_status_code VAR_6;

 if (VAR_3->push_idx == VAR_0)
  return;

 VAR_4 = FUNC_0(&VAR_2->cqp, 0);
 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->info;
 VAR_5->cqp_cmd = VAR_1;
 VAR_5->post_sq = 1;

 VAR_5->in.u.manage_push_page.info.push_idx = VAR_3->push_idx;
 VAR_5->in.u.manage_push_page.info.qs_handle = VAR_3->qs_handle;
 VAR_5->in.u.manage_push_page.info.free_page = 1;
 VAR_5->in.u.manage_push_page.cqp = &VAR_2->cqp.sc_cqp;
 VAR_5->in.u.manage_push_page.scratch = (uintptr_t)VAR_4;

 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_6)
  VAR_3->push_idx = VAR_0;
 else
  FUNC_2("CQP-OP Push page fail");
}
