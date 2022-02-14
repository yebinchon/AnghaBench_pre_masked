
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {scalar_t__ pending_queries; int Out; int status; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*,double) ;
 int FUNC_1 (int,char*,struct connection*,int) ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_2, int VAR_3) {
  VAR_2->flags &= ~VAR_0;
  FUNC_1 (3, "memcache_get_end (%p, %d)\n" , VAR_2, VAR_3);
  if (VAR_2->pending_queries > 0) {
    VAR_2->status = VAR_1;
    FUNC_0 (VAR_2, 3.0);
    return 0;
  }
  FUNC_2 (&VAR_2->Out, "END\r\n", 5);
  return 0;
}
