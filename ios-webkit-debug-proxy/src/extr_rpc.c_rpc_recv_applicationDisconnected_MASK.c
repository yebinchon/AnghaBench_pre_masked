
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int * rpc_app_t ;
typedef int plist_t ;
struct TYPE_4__ {int (* on_applicationDisconnected ) (TYPE_1__*,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int **) ;
 int FUNC_2 (TYPE_1__*,int *) ;

rpc_status FUNC_3(rpc_t VAR_0, const plist_t VAR_1) {
  rpc_app_t VAR_2 = ((void*)0);
  rpc_status VAR_3 = FUNC_1(VAR_1, &VAR_2);
  if (!VAR_3) {
    VAR_3 = VAR_0->on_applicationDisconnected(VAR_0, VAR_2);
    FUNC_0(VAR_2);
  }
  return VAR_3;
}
