
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_1, int VAR_2) {
  VAR_1->flags &= ~VAR_0;
  FUNC_1 (1, "memcache_get_end: %d keys requested\n", VAR_2);
  FUNC_2 (&VAR_1->Out, "END\r\n", 5);
  FUNC_0 (VAR_1);
  return 0;
}
