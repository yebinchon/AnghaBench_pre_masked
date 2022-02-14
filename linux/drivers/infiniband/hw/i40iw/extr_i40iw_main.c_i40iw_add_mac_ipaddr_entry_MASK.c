
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i40iw_local_mac_ipaddr_entry_info {int entry_idx; int mac_addr; } ;
struct i40iw_cqp {int sc_cqp; } ;
struct i40iw_device {struct i40iw_cqp cqp; } ;
struct TYPE_4__ {uintptr_t scratch; int * cqp; struct i40iw_local_mac_ipaddr_entry_info info; } ;
struct TYPE_5__ {TYPE_1__ add_local_mac_ipaddr_entry; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct i40iw_cqp_request* FUNC_1 (struct i40iw_cqp*,int) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_4(struct i40iw_device *VAR_2,
        u8 *VAR_3,
        u8 VAR_4)
{
 struct i40iw_local_mac_ipaddr_entry_info *VAR_5;
 struct i40iw_cqp *VAR_6 = &VAR_2->cqp;
 struct i40iw_cqp_request *VAR_7;
 struct cqp_commands_info *VAR_8;
 enum i40iw_status_code VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_6, 1);
 if (!VAR_7) {
  FUNC_3("cqp_request memory failed\n");
  return VAR_0;
 }

 VAR_8 = &VAR_7->info;

 VAR_8->post_sq = 1;
 VAR_5 = &VAR_8->in.u.add_local_mac_ipaddr_entry.info;
 FUNC_0(VAR_5->mac_addr, VAR_3);
 VAR_5->entry_idx = VAR_4;
 VAR_8->in.u.add_local_mac_ipaddr_entry.scratch = (uintptr_t)VAR_7;
 VAR_8->cqp_cmd = VAR_1;
 VAR_8->in.u.add_local_mac_ipaddr_entry.cqp = &VAR_6->sc_cqp;
 VAR_8->in.u.add_local_mac_ipaddr_entry.scratch = (uintptr_t)VAR_7;
 VAR_9 = FUNC_2(VAR_2, VAR_7);
 if (VAR_9)
  FUNC_3("CQP-OP Add MAC Ip entry fail");
 return VAR_9;
}
