
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_app_struct {int dummy; } ;
typedef TYPE_1__* rpc_app_t ;
struct TYPE_5__ {struct TYPE_5__* app_name; struct TYPE_5__* app_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(rpc_app_t VAR_0) {
  if (VAR_0) {
    FUNC_0(VAR_0->app_id);
    FUNC_0(VAR_0->app_name);
    FUNC_1(VAR_0, 0, sizeof(struct rpc_app_struct));
    FUNC_0(VAR_0);
  }
}
