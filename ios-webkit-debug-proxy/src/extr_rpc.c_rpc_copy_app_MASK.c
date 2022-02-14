
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rpc_status ;
typedef TYPE_1__* rpc_app_t ;
struct TYPE_5__ {int is_proxy; void* app_name; void* app_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 void* FUNC_1 (void*) ;

rpc_status FUNC_2(rpc_app_t VAR_2, rpc_app_t *VAR_3) {
  rpc_app_t VAR_4 = (VAR_3 ? FUNC_0() : ((void*)0));
  if (!VAR_4) {
    return VAR_0;
  }

  VAR_4->app_id = FUNC_1(VAR_2->app_id);
  VAR_4->app_name = FUNC_1(VAR_2->app_name);
  VAR_4->is_proxy = VAR_2->is_proxy;
  *VAR_3 = VAR_4;
  return VAR_1;
}
