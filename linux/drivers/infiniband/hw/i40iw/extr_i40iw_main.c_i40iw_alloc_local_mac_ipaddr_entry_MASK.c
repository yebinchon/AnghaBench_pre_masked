
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct i40iw_cqp {int sc_cqp; } ;
struct i40iw_device {struct i40iw_cqp cqp; } ;
struct TYPE_8__ {int op_ret_val; } ;
struct TYPE_5__ {uintptr_t scratch; int * cqp; } ;
struct TYPE_6__ {TYPE_1__ alloc_local_mac_ipaddr_entry; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {TYPE_4__ compl_info; struct cqp_commands_info info; int refcount; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct i40iw_cqp_request* FUNC_1 (struct i40iw_cqp*,int) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct i40iw_cqp*,struct i40iw_cqp_request*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_device *VAR_2,
         u16 *VAR_3)
{
 struct i40iw_cqp *VAR_4 = &VAR_2->cqp;
 struct i40iw_cqp_request *VAR_5;
 struct cqp_commands_info *VAR_6;
 enum i40iw_status_code VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_4, 1);
 if (!VAR_5) {
  FUNC_3("cqp_request memory failed\n");
  return VAR_0;
 }


 FUNC_0(&VAR_5->refcount);

 VAR_6 = &VAR_5->info;
 VAR_6->cqp_cmd = VAR_1;
 VAR_6->post_sq = 1;
 VAR_6->in.u.alloc_local_mac_ipaddr_entry.cqp = &VAR_4->sc_cqp;
 VAR_6->in.u.alloc_local_mac_ipaddr_entry.scratch = (uintptr_t)VAR_5;
 VAR_7 = FUNC_2(VAR_2, VAR_5);
 if (!VAR_7)
  *VAR_3 = VAR_5->compl_info.op_ret_val;
 else
  FUNC_3("CQP-OP Alloc MAC Ip entry fail");

 FUNC_4(VAR_4, VAR_5);
 return VAR_7;
}
