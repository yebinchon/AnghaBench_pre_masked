
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_server_status {int flags; struct repl_server_status* server_next; } ;
struct related_binlog {int flags; struct repl_server_status* server_first; } ;


 struct related_binlog* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct repl_server_status*) ;
 int VAR_4 ;

int FUNC_1 (void) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    struct related_binlog *VAR_6 = &VAR_0[VAR_5];
    if ((VAR_6->flags & (VAR_2 | VAR_1)) == VAR_2) {
      struct repl_server_status *VAR_7;
      for (VAR_7 = VAR_6->server_first; VAR_7 != (struct repl_server_status *) VAR_6; VAR_7 = VAR_7->server_next) {
        if (VAR_7->flags & VAR_3) {
          FUNC_0 (VAR_7);
        }
      }
    }
  }
  return 0;
}
