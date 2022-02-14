
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i40iw_cqp {int sc_cqp; } ;
struct i40iw_device {struct i40iw_cqp cqp; } ;
struct TYPE_4__ {uintptr_t scratch; scalar_t__ ignore_ref_count; int entry_idx; int * cqp; } ;
struct TYPE_5__ {TYPE_1__ del_local_mac_ipaddr_entry; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 struct i40iw_cqp_request* FUNC_0 (struct i40iw_cqp*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_device *VAR_1, u8 VAR_2)
{
 struct i40iw_cqp *VAR_3 = &VAR_1->cqp;
 struct i40iw_cqp_request *VAR_4;
 struct cqp_commands_info *VAR_5;
 enum i40iw_status_code VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_3, 1);
 if (!VAR_4) {
  FUNC_2("cqp_request memory failed\n");
  return;
 }
 VAR_5 = &VAR_4->info;
 VAR_5->cqp_cmd = VAR_0;
 VAR_5->post_sq = 1;
 VAR_5->in.u.del_local_mac_ipaddr_entry.cqp = &VAR_3->sc_cqp;
 VAR_5->in.u.del_local_mac_ipaddr_entry.scratch = (uintptr_t)VAR_4;
 VAR_5->in.u.del_local_mac_ipaddr_entry.entry_idx = VAR_2;
 VAR_5->in.u.del_local_mac_ipaddr_entry.ignore_ref_count = 0;
 VAR_6 = FUNC_1(VAR_1, VAR_4);
 if (VAR_6)
  FUNC_2("CQP-OP Del MAC Ip entry fail");
}
