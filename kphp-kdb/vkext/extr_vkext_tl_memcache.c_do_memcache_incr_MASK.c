
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_connection {int dummy; } ;
struct memcache_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct memcache_value FUNC_1 (struct rpc_connection*,long long,int,double) ;
 long long FUNC_2 (struct rpc_connection*,char const*,int,long long,int,double) ;

struct memcache_value FUNC_3 (struct rpc_connection *VAR_2, const char *VAR_3, int VAR_4, long long VAR_5, int VAR_6, double VAR_7) {
  FUNC_0 (VAR_6 == VAR_1 || VAR_6 == VAR_0);
  long long VAR_8 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  return FUNC_1 (VAR_2, VAR_8, 1, VAR_7);
}
