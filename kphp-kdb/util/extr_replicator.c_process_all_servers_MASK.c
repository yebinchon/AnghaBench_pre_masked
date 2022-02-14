
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repl_server_status {scalar_t__ conn_generation; int flags; TYPE_1__* conn; struct repl_server_status* server_next; } ;
struct repl_client_status {scalar_t__ conn_generation; TYPE_2__* conn; } ;
struct related_binlog {int flags; int targets; struct repl_client_status** client; struct repl_server_status* server_first; } ;
struct TYPE_4__ {scalar_t__ generation; } ;
struct TYPE_3__ {scalar_t__ generation; } ;


 struct related_binlog* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct repl_client_status*) ;
 int FUNC_1 (struct repl_client_status*) ;
 int FUNC_2 (struct repl_server_status*) ;
 int VAR_7 ;
 int FUNC_3 (struct repl_server_status*) ;
 int FUNC_4 (struct repl_server_status*) ;
 int FUNC_5 (struct repl_server_status*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_6 (void) {
  int VAR_10;
  VAR_8 = VAR_9 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
    struct related_binlog *VAR_11 = &VAR_0[VAR_10];
    if ((VAR_11->flags & (VAR_3 | VAR_1)) == VAR_3) {
      struct repl_server_status *VAR_12, *VAR_13;
      for (VAR_12 = VAR_11->server_first; VAR_12 != (struct repl_server_status *) VAR_11; VAR_12 = VAR_13) {
        VAR_13 = VAR_12->server_next;
        if (VAR_12->conn->generation != VAR_12->conn_generation || (VAR_12->flags & VAR_6) != 0) {
          FUNC_2 (VAR_12);
          continue;
        }

        FUNC_3 (VAR_12);
        FUNC_4 (VAR_12);
 if (VAR_11->flags & VAR_2) {
   FUNC_5 (VAR_12);
 }

        if (VAR_12->flags & VAR_4) {
          VAR_8++;
        }
        if (VAR_12->flags & VAR_5) {
          VAR_9++;
        }
      }
      VAR_11->flags &= ~VAR_2;
    }
    int VAR_14;
    for (VAR_14 = 0; VAR_14 < VAR_11->targets; VAR_14++) {
      if (VAR_11->client[VAR_14]) {
        struct repl_client_status *VAR_15 = VAR_11->client[VAR_14];
        if (VAR_15->conn->generation != VAR_15->conn_generation) {
          FUNC_1 (VAR_15);
        } else {
          FUNC_0 (VAR_15);
        }
      }
    }
  }
  return 0;
}
