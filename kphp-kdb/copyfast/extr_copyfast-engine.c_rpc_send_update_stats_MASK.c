
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_update_stats {int stats; int id; } ;
struct long_update_stats {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int update_stats_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (struct rpc_update_stats*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_update_stats*,struct connection*) ;
 int FUNC_3 (int,char*,struct connection*) ;

int FUNC_4 (struct connection *VAR_5) {
  FUNC_3 (2, "rpc_send_update_stats: c = %p\n", VAR_5);
  struct rpc_update_stats *VAR_6 = (struct rpc_update_stats *)VAR_1;
  if (FUNC_1 (VAR_6, sizeof (struct rpc_update_stats), VAR_5, VAR_2) < 0) {
    return -1;
  }
  VAR_6->id = VAR_0;
  FUNC_0 (&VAR_6->stats, VAR_4, sizeof (struct long_update_stats));
  VAR_3->structured.update_stats_sent++;
  return FUNC_2 (VAR_6, VAR_5);
}
