
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_error {int error; int session_id; int handshake_id; int error_message; } ;
struct connection {int remote_port; } ;


 int FUNC_0 (struct repl_error*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ,...) ;

int FUNC_3 (struct connection *VAR_1, struct repl_error *VAR_2, int VAR_3) {
  VAR_0++;
  if (!FUNC_0 (VAR_2, VAR_3)) {
    FUNC_2 (0, "Received error packet in session %d:%d from %s:%d, error code %d: %s\n", VAR_2->handshake_id, VAR_2->session_id, FUNC_1 (VAR_1),
       VAR_1->remote_port, VAR_2->error, VAR_2->error_message);
  } else {
    FUNC_2 (0, "Received malformed error packet in session %d:%d from %s:%d, error code %d\n", VAR_2->handshake_id, VAR_2->session_id, FUNC_1 (VAR_1),
       VAR_1->remote_port, VAR_2->error);
  }
  return 0;
}
