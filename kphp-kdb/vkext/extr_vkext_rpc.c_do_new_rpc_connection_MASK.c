
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server_collection {int num; int * servers; } ;
struct rpc_connection {long long default_actor_id; double default_query_timeout; struct rpc_server_collection* servers; scalar_t__ fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rpc_server_collection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 struct rpc_server_collection* FUNC_6 (unsigned int,int,double,double) ;
 scalar_t__ FUNC_7 (int ,char**,int*) ;
 int FUNC_8 (unsigned int,int,double,double) ;
 int FUNC_9 (int ,struct rpc_connection*,int ) ;
 struct rpc_connection* FUNC_10 (int) ;
 int * FUNC_11 (int *,int,int) ;

struct rpc_connection *FUNC_12 (unsigned VAR_3, int VAR_4, int VAR_5, long long VAR_6, double VAR_7, double VAR_8, double VAR_9, char **VAR_10, int *VAR_11) {
  FUNC_0 (VAR_0);
  FUNC_3 (VAR_0);
  struct rpc_server_collection *VAR_12 = FUNC_6 (VAR_3, VAR_4, VAR_8, VAR_9);
  FUNC_4 (VAR_12);
  if (VAR_12->num < VAR_5) {

    VAR_12->servers = FUNC_11 (VAR_12->servers, VAR_12->num * sizeof (void *), VAR_5 * sizeof (void *));

    FUNC_1 (VAR_12->num * sizeof (void *), VAR_5 * sizeof (void *));
    int VAR_13;
    for (VAR_13 = VAR_12->num; VAR_13 < VAR_5; VAR_13++) {
      VAR_12->servers[VAR_13] = FUNC_8 (VAR_3, VAR_4, VAR_7, VAR_9);
    }
    VAR_12->num = VAR_5;
  }

  int VAR_14;
  int VAR_15 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_12->num; VAR_14++) {
    if (FUNC_7 (VAR_12->servers[VAR_14], VAR_10, VAR_11) >= 0) {
      VAR_15 ++;
    }
  }
  if (!VAR_15) {
    FUNC_2 (VAR_0);
    return 0;
  }

  struct rpc_connection *VAR_16 = FUNC_10 (sizeof (*VAR_16));
  VAR_16->fd = VAR_1 ++;
  VAR_16->servers = VAR_12;
  VAR_16->default_actor_id = VAR_6;
  VAR_16->default_query_timeout = VAR_7;
  VAR_2 = FUNC_9 (VAR_2, VAR_16, FUNC_5 ());
  FUNC_2 (VAR_0);
  return VAR_16;
}
