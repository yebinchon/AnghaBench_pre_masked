
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_server_status {int dummy; } ;
struct repl_error {int session_id; } ;
struct connection {int dummy; } ;


 int FUNC_0 (struct repl_server_status*) ;
 struct repl_server_status* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct connection*,struct repl_error*,int) ;

int FUNC_3 (struct connection *VAR_0, struct repl_error *VAR_1, int VAR_2) {
  struct repl_server_status *VAR_3 = FUNC_1 (VAR_1->session_id, 0);
  if (VAR_3) {
    FUNC_0 (VAR_3);
  }
  return FUNC_2 (VAR_0, VAR_1, VAR_2);
}
