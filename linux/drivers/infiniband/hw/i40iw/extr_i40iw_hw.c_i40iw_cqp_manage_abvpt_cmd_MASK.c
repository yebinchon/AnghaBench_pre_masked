
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int sc_cqp; } ;
struct i40iw_device {TYPE_4__ cqp; } ;
struct i40iw_apbvt_info {int add; int port; } ;
struct TYPE_5__ {uintptr_t scratch; int * cqp; struct i40iw_apbvt_info info; } ;
struct TYPE_6__ {TYPE_1__ manage_apbvt_entry; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct i40iw_cqp_request* FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct i40iw_apbvt_info*,int ,int) ;

__attribute__((used)) static enum i40iw_status_code
FUNC_5(struct i40iw_device *VAR_2,
      u16 VAR_3,
      bool VAR_4)
{
 struct i40iw_apbvt_info *VAR_5;
 struct i40iw_cqp_request *VAR_6;
 struct cqp_commands_info *VAR_7;
 enum i40iw_status_code VAR_8;

 VAR_6 = FUNC_1(&VAR_2->cqp, VAR_4);
 if (!VAR_6)
  return VAR_0;

 VAR_7 = &VAR_6->info;
 VAR_5 = &VAR_7->in.u.manage_apbvt_entry.info;

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->add = VAR_4;
 VAR_5->port = FUNC_0(VAR_3);

 VAR_7->cqp_cmd = VAR_1;
 VAR_7->post_sq = 1;
 VAR_7->in.u.manage_apbvt_entry.cqp = &VAR_2->cqp.sc_cqp;
 VAR_7->in.u.manage_apbvt_entry.scratch = (uintptr_t)VAR_6;
 VAR_8 = FUNC_2(VAR_2, VAR_6);
 if (VAR_8)
  FUNC_3("CQP-OP Manage APBVT entry fail");

 return VAR_8;
}
