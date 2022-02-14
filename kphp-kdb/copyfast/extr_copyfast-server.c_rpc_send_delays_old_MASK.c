
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_delays_old {int slow_delay; int medium_delay; } ;
struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct rpc_delays_old*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_delays_old*,struct connection*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3 (struct connection *VAR_6) {
  if (VAR_5 >= 2) {
    FUNC_0 (VAR_4, "rpc_send_delays_old: slow_delay = %d, medium_delay = %d\n", VAR_3, VAR_2);
  }
  struct rpc_delays_old *VAR_7 = (struct rpc_delays_old *)VAR_0;
  FUNC_1 (VAR_7, sizeof (struct rpc_delays_old), VAR_6, VAR_1);
  VAR_7->medium_delay = VAR_2;
  VAR_7->slow_delay = VAR_3;
  return FUNC_2 (VAR_7, VAR_6);
}
