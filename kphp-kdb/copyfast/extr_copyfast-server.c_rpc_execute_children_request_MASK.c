
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_children_request {int id; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {scalar_t__ protocol_version; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct connection*,int ) ;
 int FUNC_3 (struct connection*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4 (struct connection *VAR_3, struct rpc_children_request *VAR_4, int VAR_5) {
  if (VAR_2 >= 2) {
    FUNC_0 (VAR_1, "rpc_execute_children_request: len = %d\n", VAR_5);
  }
  if (VAR_5 != sizeof (struct rpc_children_request)) {
    return 0;
  }
  int VAR_6 = FUNC_1 (VAR_4->id);
  if (VAR_0[VAR_6].protocol_version == 0) {
    return FUNC_3 (VAR_3, VAR_4->id);
  } else {
    return FUNC_2 (VAR_3, VAR_4->id);
  }
}
