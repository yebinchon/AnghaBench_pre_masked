
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_children_request {int id; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int children_requests_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (struct rpc_children_request*,int,struct connection*,int ) ;
 int FUNC_1 (struct rpc_children_request*,struct connection*) ;
 int FUNC_2 (int,char*,struct connection*) ;

int FUNC_3 (struct connection *VAR_4) {
  FUNC_2 (2, "rpc_send_children_request: c = %p\n", VAR_4);
  struct rpc_children_request *VAR_5 = (struct rpc_children_request *)VAR_1;
  if (FUNC_0 (VAR_5, sizeof (struct rpc_children_request), VAR_4, VAR_2) < 0) {
    return -1;
  }
  VAR_5->id = VAR_0;
  VAR_3->structured.children_requests_sent ++;
  return FUNC_1 (VAR_5, VAR_4);
}
