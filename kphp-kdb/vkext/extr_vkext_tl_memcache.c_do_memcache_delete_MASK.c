
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_connection {int dummy; } ;
struct memcache_value {int dummy; } ;


 struct memcache_value FUNC_0 (struct rpc_connection*,long long,int,double) ;
 long long FUNC_1 (struct rpc_connection*,char const*,int,double) ;

struct memcache_value FUNC_2 (struct rpc_connection *VAR_0, const char *VAR_1, int VAR_2, double VAR_3) {
  long long VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
  return FUNC_0 (VAR_0, VAR_4, 1, VAR_3);
}
