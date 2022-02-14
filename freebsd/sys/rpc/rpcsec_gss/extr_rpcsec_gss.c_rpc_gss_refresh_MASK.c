
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rj_stat; scalar_t__ rj_why; } ;
struct TYPE_4__ {scalar_t__ rp_stat; TYPE_1__ rp_rjct; } ;
struct rpc_msg {TYPE_2__ rm_reply; } ;
struct rpc_gss_data {scalar_t__ gd_state; int gd_lock; } ;
typedef int rpc_gss_options_ret_t ;
typedef int options ;
typedef int bool_t ;
typedef int AUTH ;


 scalar_t__ VAR_0 ;
 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static bool_t
FUNC_6(AUTH *VAR_6, void *VAR_7)
{
 struct rpc_msg *VAR_8 = (struct rpc_msg *) VAR_7;
 rpc_gss_options_ret_t VAR_9;
 struct rpc_gss_data *VAR_10;

 VAR_10 = FUNC_0(VAR_6);





 FUNC_2(&VAR_10->gd_lock);
 if (VAR_10->gd_state == VAR_5) {
  FUNC_3(&VAR_10->gd_lock);
  return (VAR_1);
 }
 FUNC_3(&VAR_10->gd_lock);






 if (VAR_8->rm_reply.rp_stat == VAR_2
     && VAR_8->rm_reply.rp_rjct.rj_stat == VAR_0
     && (VAR_8->rm_reply.rp_rjct.rj_why == VAR_3
  || VAR_8->rm_reply.rp_rjct.rj_why == VAR_4)) {
  FUNC_4(VAR_6, VAR_1);
  FUNC_1(&VAR_9, 0, sizeof(VAR_9));
  return (FUNC_5(VAR_6, &VAR_9));
 }

 return (VAR_1);
}
