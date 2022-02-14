
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int last_query_time; int query_start_time; int Out; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_6, int VAR_7) {
  VAR_6->flags &= ~VAR_1;
  VAR_6->last_query_time = FUNC_1 (VAR_0) - VAR_6->query_start_time;
  VAR_4 += VAR_6->last_query_time;
  VAR_2++;
  FUNC_2 (&VAR_6->Out, "END\r\n", 5);
  if (VAR_5 > 1) {
    FUNC_0 (VAR_3, "memcache_get end: query time %.3dms\n", VAR_6->last_query_time * 1000);
  }
  return 0;
}
