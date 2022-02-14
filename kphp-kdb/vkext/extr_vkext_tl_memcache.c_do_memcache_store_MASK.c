
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_connection {int dummy; } ;
struct memcache_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct memcache_value FUNC_1 (struct rpc_connection*,long long,int,double) ;
 long long FUNC_2 (struct rpc_connection*,char const*,int,char const*,int,int,int,int,double) ;

struct memcache_value FUNC_3 (struct rpc_connection *VAR_3, const char *VAR_4, int VAR_5, const char *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, double VAR_11) {
  FUNC_0 (VAR_10 == VAR_2 || VAR_10 == VAR_1 || VAR_10 == VAR_0);
  long long VAR_12 = FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  return FUNC_1 (VAR_3, VAR_12, 1, VAR_11);
}
