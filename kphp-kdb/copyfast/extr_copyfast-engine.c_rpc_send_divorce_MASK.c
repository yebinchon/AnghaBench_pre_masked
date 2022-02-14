
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_divorce {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int divorce_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct rpc_divorce*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_divorce*,struct connection*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3 (struct connection *VAR_5) {
  if (VAR_4 >= 2) {
    FUNC_0 (VAR_3, "rpc_send_divorce\n");
  }
  struct rpc_divorce *VAR_6 = (struct rpc_divorce *)VAR_0;
  if (FUNC_1 (VAR_6, sizeof (struct rpc_divorce), VAR_5, VAR_1) < 0) {
    return -1;
  }
  VAR_2->structured.divorce_sent ++;
  return FUNC_2 (VAR_6, VAR_5);
}
