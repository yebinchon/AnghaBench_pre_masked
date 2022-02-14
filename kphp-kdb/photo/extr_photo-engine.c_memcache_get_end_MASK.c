
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int last_query_time; int query_start_time; int Out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_3, int VAR_4) {
  VAR_3->flags &= ~VAR_0;
  VAR_3->last_query_time = FUNC_1() - VAR_3->query_start_time;
  FUNC_2 (&VAR_3->Out, "END\r\n", 5);
  if (VAR_2 > 1) {
    FUNC_0 (VAR_1, "memcache_get end: query time %.3dms\n", VAR_3->last_query_time * 1000);
  }
  return 0;
}
