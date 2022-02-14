
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_divorce {int dummy; } ;
struct relative {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int divorce_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct relative*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct relative* FUNC_2 (struct connection*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (struct connection *VAR_3, struct rpc_divorce *VAR_4, int VAR_5) {
  if (VAR_2 >= 2) {
    FUNC_1 (VAR_1, "rpc_execute_divorce: len = %d\n", VAR_5);
  }
  if (VAR_5 != sizeof (struct rpc_divorce)) {
    return 0;
  }
  VAR_0->structured.divorce_received ++;
  struct relative *VAR_6 = FUNC_2 (VAR_3);
  if (VAR_6) {
    FUNC_0 (VAR_6, 0);
  }
  return 0;
}
