
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_2__ {scalar_t__ value; } ;
struct rpc_gss_data {int gd_lock; TYPE_1__ gd_verf; int * gd_clntprincipal; int * gd_principal; int gd_ucred; int gd_clnt; int gd_refs; } ;
typedef struct rpc_gss_data AUTH ;


 struct rpc_gss_data* FUNC_0 (struct rpc_gss_data*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct rpc_gss_data*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rpc_gss_data*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_10(AUTH *VAR_3)
{
 struct rpc_gss_data *VAR_4;

 FUNC_8("in rpc_gss_destroy()");

 VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_6(&VAR_4->gd_refs))
  return;

 FUNC_7(VAR_3, VAR_1);

 FUNC_1(VAR_4->gd_clnt);
 FUNC_2(VAR_4->gd_ucred);
 FUNC_3(VAR_4->gd_principal, VAR_0);
 if (VAR_4->gd_clntprincipal != ((void*)0))
  FUNC_3(VAR_4->gd_clntprincipal, VAR_0);
 if (VAR_4->gd_verf.value)
  FUNC_9((xdrproc_t) VAR_2,
      (char *) &VAR_4->gd_verf);
 FUNC_5(&VAR_4->gd_lock);

 FUNC_4(VAR_4, sizeof(*VAR_4));
 FUNC_4(VAR_3, sizeof(*VAR_3));
}
