
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_kicked {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int kicked_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3 (struct connection *VAR_3, struct rpc_kicked *VAR_4, int VAR_5) {
  FUNC_2 (2, "rpc_kicked: len = %d\n", VAR_5);
  if (VAR_5 != sizeof (struct rpc_kicked)) {
    return 0;
  }
  VAR_2->structured.kicked_received ++;
  VAR_1 = VAR_0;
  FUNC_0 ();
  return FUNC_1 (VAR_3);
}
