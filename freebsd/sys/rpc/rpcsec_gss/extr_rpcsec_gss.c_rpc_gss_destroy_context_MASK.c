
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct rpc_pending_request {int dummy; } ;
struct TYPE_3__ {scalar_t__ length; } ;
struct TYPE_4__ {TYPE_1__ gc_handle; int gc_proc; } ;
struct rpc_gss_data {scalar_t__ gd_state; scalar_t__ gd_ctx; int gd_lock; TYPE_2__ gd_cred; int gd_reqs; int gd_clnt; } ;
struct rpc_callextra {int * rc_auth; } ;
typedef int ext ;
typedef scalar_t__ bool_t ;
typedef int OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct rpc_callextra*,int ,int ,int *,int ,int *,int ) ;
 scalar_t__ VAR_1 ;
 struct rpc_pending_request* FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_pending_request*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct rpc_callextra*,int) ;
 int FUNC_5 (int *,scalar_t__*,int *) ;
 int FUNC_6 (struct rpc_pending_request*,int) ;
 int FUNC_7 (struct rpc_gss_data*,int *,int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct rpc_gss_data*) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_13(AUTH *VAR_10, bool_t VAR_11)
{
 struct rpc_gss_data *VAR_12;
 struct rpc_pending_request *VAR_13;
 OM_uint32 VAR_14;
 struct rpc_callextra VAR_15;

 FUNC_10("in rpc_gss_destroy_context()");

 VAR_12 = FUNC_0(VAR_10);

 FUNC_8(&VAR_12->gd_lock);




 if (VAR_12->gd_state != VAR_5) {
  while (VAR_12->gd_state != VAR_6
      && VAR_12->gd_state != VAR_5)
   FUNC_7(VAR_12, &VAR_12->gd_lock, 0, "gssstate", 0);
  FUNC_9(&VAR_12->gd_lock);
  return;
 }
 VAR_12->gd_state = VAR_4;
 FUNC_9(&VAR_12->gd_lock);

 if (VAR_11) {
  VAR_12->gd_cred.gc_proc = VAR_3;
  FUNC_4(&VAR_15, sizeof(VAR_15));
  VAR_15.rc_auth = VAR_10;
  FUNC_1(VAR_12->gd_clnt, &VAR_15, VAR_2,
      (xdrproc_t)VAR_9, ((void*)0),
      (xdrproc_t)VAR_9, ((void*)0), VAR_0);
 }

 while ((VAR_13 = FUNC_2(&VAR_12->gd_reqs)) != ((void*)0)) {
  FUNC_3(VAR_13, VAR_7);
  FUNC_6(VAR_13, sizeof(*VAR_13));
 }





 FUNC_12((xdrproc_t) VAR_8,
     (char *) &VAR_12->gd_cred.gc_handle);
 VAR_12->gd_cred.gc_handle.length = 0;

 if (VAR_12->gd_ctx != VAR_1)
  FUNC_5(&VAR_14, &VAR_12->gd_ctx, ((void*)0));

 FUNC_8(&VAR_12->gd_lock);
 VAR_12->gd_state = VAR_6;
 FUNC_11(VAR_12);
 FUNC_9(&VAR_12->gd_lock);
}
