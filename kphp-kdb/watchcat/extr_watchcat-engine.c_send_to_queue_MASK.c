
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
 int FUNC_3 (int ,char*,...) ;
 struct connection* FUNC_4 (struct conn_target*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct conn_target* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,int,int) ;
 int VAR_4 ;
 int FUNC_6 (struct connection*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,char*,int) ;

int FUNC_8 (char *VAR_6, int VAR_7, int VAR_8) {
  struct conn_target *VAR_9 = VAR_2;
  struct connection *VAR_10 = FUNC_4 (VAR_9);
  if (!VAR_10) {
    if (VAR_5 > 0) {
      FUNC_3 (VAR_4, "cannot find connection to target %s:%d for query %s, dropping query\n", VAR_9 ? FUNC_2 (VAR_9->target.s_addr, 0) : "?", VAR_9 ? VAR_9->port : 0, VAR_6);
    }
    return -1;
  }
  if (VAR_0 > 1) {
    FUNC_3 (VAR_4, "send query %d|%s\n", VAR_8, VAR_6);
  }

  static char VAR_11[50];
  int VAR_12 = FUNC_5 (VAR_11, "set %d@entry 0 0 %d\r\n", VAR_8, VAR_7);

  FUNC_1 (FUNC_7 (&VAR_10->Out, VAR_11, VAR_12) == VAR_12);
  FUNC_1 (FUNC_7 (&VAR_10->Out, VAR_6, VAR_7) == VAR_7);
  FUNC_1 (FUNC_7 (&VAR_10->Out, "\r\n", 2) == 2);

  VAR_3++;

  FUNC_0 (VAR_10)->flush_query (VAR_10);
  VAR_10->last_query_sent_time = VAR_1;
  return 0;
}
