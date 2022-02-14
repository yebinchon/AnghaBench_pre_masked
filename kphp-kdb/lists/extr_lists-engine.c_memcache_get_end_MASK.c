
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*,int) ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3 (struct connection *VAR_0, int VAR_1) {
  FUNC_2 (1, "memcache_get_end: %d keys requested\n", VAR_1);
  FUNC_0 (VAR_0);
  return FUNC_1 (VAR_0, VAR_1);
}
