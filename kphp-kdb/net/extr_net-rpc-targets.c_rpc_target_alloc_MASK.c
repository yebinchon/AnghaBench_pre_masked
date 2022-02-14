
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_id {int dummy; } ;
struct rpc_target {scalar_t__ inbound_num; struct connection* last; struct connection* first; scalar_t__ target; struct process_id PID; } ;
struct connection {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,struct rpc_target*,int ) ;
 struct rpc_target* FUNC_2 (int) ;

struct rpc_target *FUNC_3 (struct process_id VAR_1) {
  struct rpc_target *VAR_2 = FUNC_2 (sizeof (*VAR_2));
  VAR_2->PID = VAR_1;
  VAR_2->target = 0;
  VAR_2->first = VAR_2->last = (struct connection *)VAR_2;
  VAR_2->inbound_num = 0;
  VAR_0 = FUNC_1 (VAR_0, VAR_2, FUNC_0 ());
  return VAR_2;
}
