
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int rpcvers_t ;
typedef int rpcproc_t ;
typedef scalar_t__ rpc_gss_service_t ;
typedef int rpc_gss_options_ret_t ;
struct TYPE_12__ {int time_req; int * input_channel_bindings; int my_cred; int req_flags; } ;
typedef TYPE_2__ rpc_gss_options_req_t ;
typedef int hostname ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_11__ {int re_errno; } ;
struct TYPE_14__ {int cf_stat; TYPE_1__ cf_error; } ;
struct TYPE_13__ {int * cl_auth; } ;
typedef TYPE_3__ CLIENT ;
typedef int AUTH ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int,int ,char*,int ,char*,struct timeval) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (char*,int,int,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,...) ;
 TYPE_6__ VAR_3 ;
 char** FUNC_9 () ;
 int * FUNC_10 (TYPE_3__*,char*,char const*,scalar_t__,int *,TYPE_2__*,int *) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char const*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_15(int VAR_7, const char **VAR_8)
{
 rpcproc_t VAR_9 = 123456;
 rpcvers_t VAR_10 = 1;
 const char *VAR_11 = "tcp";
 char VAR_12[128], VAR_13[128+5];
 CLIENT *VAR_14;
 AUTH *VAR_15;
 const char **VAR_16;
 rpc_gss_options_req_t VAR_17;
 rpc_gss_options_ret_t VAR_18;
 rpc_gss_service_t VAR_19;
 struct timeval VAR_20;
 enum clnt_stat VAR_21;

 if (VAR_7 == 2)
  FUNC_14(VAR_12, VAR_8[1], sizeof(VAR_12));
 else
  FUNC_7(VAR_12, sizeof(VAR_12));

 VAR_14 = FUNC_3(VAR_12, VAR_9, VAR_10, VAR_11);
 if (!VAR_14) {
  FUNC_8("rpc_createerr.cf_stat = %d\n",
      VAR_3.cf_stat);
  FUNC_8("rpc_createerr.cf_error.re_errno = %d\n",
      VAR_3.cf_error.re_errno);
  return;
 }

 FUNC_13(VAR_13, "host");
 FUNC_12(VAR_13, "@");
 FUNC_12(VAR_13, VAR_12);

 VAR_16 = FUNC_9();
 VAR_15 = ((void*)0);
 while (*VAR_16) {
  VAR_17.req_flags = VAR_0;
  VAR_17.time_req = 600;
  VAR_17.my_cred = VAR_1;
  VAR_17.input_channel_bindings = ((void*)0);
  VAR_15 = FUNC_10(VAR_14, VAR_13,
      *VAR_16,
      VAR_4,
      ((void*)0),
      &VAR_17,
      &VAR_18);
  if (VAR_15)
   break;
  VAR_16++;
 }
 if (!VAR_15) {
  FUNC_4("rpc_gss_seccreate");
  FUNC_8("Can't authenticate with server %s.\n",
      VAR_12);
  FUNC_6(1);
 }
 VAR_14->cl_auth = VAR_15;

 for (VAR_19 = VAR_4; VAR_19 <= VAR_5; VAR_19++) {
  const char *VAR_22[] = {
   "rpc_gss_svc_default",
   "rpc_gss_svc_none",
   "rpc_gss_svc_integrity",
   "rpc_gss_svc_privacy"
  };
  int VAR_23;

  FUNC_11(VAR_15, VAR_19, ((void*)0));
  VAR_20.tv_sec = 5;
  VAR_20.tv_usec = 0;
  VAR_23 = 42;
  VAR_21 = FUNC_1(VAR_14, 1,
      (xdrproc_t) VAR_6, (char *) &VAR_23,
      (xdrproc_t) VAR_6, (char *) &VAR_23, VAR_20);
  if (VAR_21 == VAR_2) {
   FUNC_8("succeeded with %s\n", VAR_22[VAR_19]);
   if (VAR_23 != 142)
    FUNC_8("unexpected reply %d\n", VAR_23);
  } else {
   FUNC_5(VAR_14, "call failed");
  }
 }
 FUNC_0(VAR_15);
 FUNC_2(VAR_14);
}
