
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct svc_rpc_gss_client_list {int dummy; } ;
struct TYPE_3__ {unsigned long ci_hostid; size_t ci_id; int ci_boottime; } ;
struct svc_rpc_gss_client {TYPE_1__ cl_id; scalar_t__ cl_expiration; int cl_locked; int cl_state; int cl_lock; int cl_refs; } ;
struct TYPE_4__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_rpc_gss_client_list*,struct svc_rpc_gss_client*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int ,unsigned long*) ;
 struct svc_rpc_gss_client* FUNC_3 (int) ;
 int FUNC_4 (struct svc_rpc_gss_client*,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 struct svc_rpc_gss_client_list* VAR_6 ;
 size_t VAR_7 ;
 struct svc_rpc_gss_client_list VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static struct svc_rpc_gss_client *
FUNC_10(void)
{
 struct svc_rpc_gss_client *VAR_12;
 struct svc_rpc_gss_client_list *VAR_13;
 struct timeval VAR_14;
 unsigned long VAR_15;

 FUNC_6("in svc_rpc_gss_create_client()");

 VAR_12 = FUNC_3(sizeof(struct svc_rpc_gss_client));
 FUNC_4(VAR_12, 0, sizeof(struct svc_rpc_gss_client));





 FUNC_5(&VAR_12->cl_refs, 2);
 FUNC_7(&VAR_12->cl_lock, "GSS-client");
 FUNC_2(VAR_4->td_ucred, &VAR_15);
 VAR_12->cl_id.ci_hostid = VAR_15;
 FUNC_1(&VAR_14);
 VAR_12->cl_id.ci_boottime = VAR_14.tv_sec;
 VAR_12->cl_id.ci_id = VAR_10++;





 VAR_12->cl_state = VAR_0;
 VAR_12->cl_locked = VAR_1;
 VAR_12->cl_expiration = VAR_11 + 5*60;

 VAR_13 = &VAR_6[VAR_12->cl_id.ci_id % VAR_7];
 FUNC_8(&VAR_9);
 FUNC_0(VAR_13, VAR_12, VAR_3);
 FUNC_0(&VAR_8, VAR_12, VAR_2);
 VAR_5++;
 FUNC_9(&VAR_9);
 return (VAR_12);
}
