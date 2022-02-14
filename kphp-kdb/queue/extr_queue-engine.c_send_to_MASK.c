
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int last_query_sent_time; int Out; } ;
struct TYPE_3__ {int s_addr; } ;
struct conn_target {int port; TYPE_1__ target; } ;
struct TYPE_4__ {int (* flush_query ) (struct connection*) ;} ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,char*,...) ;
 struct connection* FUNC_4 (struct conn_target*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct connection*) ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,int) ;

int FUNC_7 (struct conn_target *VAR_4, char *VAR_5, int VAR_6, int VAR_7) {
  struct connection *VAR_8 = FUNC_4 (VAR_4);
  if (VAR_8 == ((void*)0)) {
    if (VAR_3 > 0) {
      FUNC_3 (VAR_2, "cannot find connection to target %s:%d for query %s, dropping query\n", VAR_4 ? FUNC_2 (VAR_4->target.s_addr, 0) : "?", VAR_4 ? VAR_4->port : 0, VAR_5);
    }
    return -1;
  }
  if (VAR_3 > 1) {
    FUNC_3 (VAR_2, "send query '%s'\n", VAR_5);
  }
  FUNC_1 (FUNC_6 (&VAR_8->Out, VAR_5, VAR_6) == VAR_6);

  VAR_1++;

  if (VAR_7) {
    FUNC_0 (VAR_8)->flush_query (VAR_8);
  }
  VAR_8->last_query_sent_time = VAR_0;
  return 0;
}
