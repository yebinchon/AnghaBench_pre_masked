
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct rpc_server_collection* x; } ;
typedef TYPE_1__ tree_server_collection_t ;
struct rpc_server_collection {unsigned int host; int port; scalar_t__ num; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rpc_server_collection*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,struct rpc_server_collection*,int ) ;
 TYPE_1__* FUNC_4 (int ,struct rpc_server_collection*) ;
 struct rpc_server_collection* FUNC_5 (int) ;

struct rpc_server_collection *FUNC_6 (unsigned VAR_1, int VAR_2, double VAR_3, double VAR_4) {
  struct rpc_server_collection VAR_5;
  VAR_5.host = VAR_1;
  VAR_5.port = VAR_2;
  tree_server_collection_t *VAR_6 = FUNC_4 (VAR_0, &VAR_5);
  struct rpc_server_collection *VAR_7;
  if (VAR_6) {
    VAR_7 = VAR_6->x;
  } else {
    VAR_7 = FUNC_5 (sizeof (*VAR_7));
    FUNC_0 (sizeof (*VAR_7));
    FUNC_1 (VAR_7);
    VAR_7->host = VAR_1;
    VAR_7->port = VAR_2;
    VAR_7->num = 0;


    VAR_0 = FUNC_3 (VAR_0, VAR_7, FUNC_2 ());
  }


  return VAR_7;
}
