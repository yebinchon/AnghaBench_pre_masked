
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int status; int last_query_sent_time; } ;
struct TYPE_2__ {int (* rpc_ready ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (struct connection *VAR_2) {
  VAR_2->last_query_sent_time = VAR_1;

  VAR_2->status = VAR_0;
  if (FUNC_0(VAR_2)->rpc_ready) {
    FUNC_0(VAR_2)->rpc_ready (VAR_2);
  }

  return 0;
}
