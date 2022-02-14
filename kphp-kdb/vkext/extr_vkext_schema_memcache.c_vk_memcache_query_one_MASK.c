
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct rpc_query {int extra_free; void* extra; } ;
struct rpc_connection {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 struct rpc_query* FUNC_3 (struct rpc_connection*,double) ;
 void* FUNC_4 (int **) ;
 int VAR_1 ;
 int VAR_2 ;

struct rpc_query *FUNC_5 (struct rpc_connection *VAR_3, double VAR_4, zval **VAR_5) {
  FUNC_2 ();
  FUNC_1 (VAR_1);
  void *VAR_6 = FUNC_4 (VAR_5);
  FUNC_0 (VAR_1);
  if (!VAR_6) { return 0; }
  struct rpc_query *VAR_7;
  if (!(VAR_7 = FUNC_3 (VAR_3, VAR_4))) {
    return 0;
  }
  VAR_7->extra = VAR_6;
  VAR_7->extra_free = VAR_0;
  VAR_2 ++;
  return VAR_7;
}
