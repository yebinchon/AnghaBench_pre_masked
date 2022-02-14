
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_kicked {int dummy; } ;
struct rpc_delays {int medium_delay; int slow_delay; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int delays_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int,char*,int) ;

int FUNC_1 (struct connection *VAR_3, struct rpc_delays *VAR_4, int VAR_5) {
  FUNC_0 (2, "rpc_delays: len = %d\n", VAR_5);

  if (VAR_5 != sizeof (struct rpc_kicked)) {
    return 0;
  }
  VAR_2->structured.delays_received ++;
  VAR_1 = VAR_4->slow_delay;
  VAR_0 = VAR_4->medium_delay;
  return 0;
}
