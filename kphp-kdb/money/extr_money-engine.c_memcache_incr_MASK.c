
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int ,char*,int,char const*,long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2 (struct connection *VAR_2, int VAR_3, const char *VAR_4, int VAR_5, long long VAR_6) {
  if (VAR_1 > 1) {
    FUNC_0 (VAR_0, "memcache_incr: op=%d, key='%s', val=%lld\n", VAR_3, VAR_4, VAR_6);
  }

  FUNC_1 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
  return 0;
}
