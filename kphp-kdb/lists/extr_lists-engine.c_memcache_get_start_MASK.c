
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

int FUNC_1 (struct connection *VAR_1) {
  VAR_1->flags &= ~VAR_0;
  FUNC_0 (1, "memcache_get_start\n");
  return 0;
}
