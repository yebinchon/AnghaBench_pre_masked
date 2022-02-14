
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rpc_t ;
typedef int rpc_status ;
typedef TYPE_1__* rpc_app_t ;
struct TYPE_4__ {int app_id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__* const) ;

rpc_status FUNC_2(rpc_t VAR_0, const rpc_app_t VAR_1) {
  FUNC_1(VAR_0, VAR_1);
  return FUNC_0(VAR_0, VAR_1->app_id);
}
