
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union engine_stats {int dummy; } engine_stats ;
struct rpc_stats {int stats; int id; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {int stats_sent; } ;
struct TYPE_5__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (struct rpc_stats*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_stats*,struct connection*) ;
 int FUNC_3 (int,char*,struct connection*) ;

int FUNC_4 (struct connection *VAR_4) {
  FUNC_3 (2, "rpc_send_stats: c = %p\n", VAR_4);
  struct rpc_stats *VAR_5 = (struct rpc_stats *)VAR_1;
  if (FUNC_1 (VAR_5, sizeof (struct rpc_stats), VAR_4, VAR_2) < 0) {
    return -1;
  }
  VAR_5->id = VAR_0;
  FUNC_0 (&VAR_5->stats, VAR_3, sizeof (union engine_stats));
  VAR_3->structured.stats_sent++;
  return FUNC_2 (VAR_5, VAR_4);
}
