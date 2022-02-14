
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rpc_status ;
typedef TYPE_1__* rpc_app_t ;
typedef int plist_t ;
struct TYPE_5__ {int is_proxy; int app_name; int app_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,char*,int *) ;
 scalar_t__ FUNC_1 (int const,char*,int *) ;
 scalar_t__ FUNC_2 (int const,char*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;

rpc_status FUNC_5(const plist_t VAR_2, rpc_app_t *VAR_3) {
  rpc_app_t VAR_4 = (VAR_3 ? FUNC_4() : ((void*)0));
  if (!VAR_4 ||
      FUNC_2(VAR_2, "WIRApplicationIdentifierKey",
        &VAR_4->app_id) ||
      FUNC_1(VAR_2, "WIRApplicationNameKey",
        &VAR_4->app_name) ||
      FUNC_0(VAR_2, "WIRIsApplicationProxyKey",
        &VAR_4->is_proxy)) {
    FUNC_3(VAR_4);
    if (VAR_3) {
      *VAR_3 = ((void*)0);
    }
    return VAR_0;
  }
  *VAR_3 = VAR_4;
  return VAR_1;
}
