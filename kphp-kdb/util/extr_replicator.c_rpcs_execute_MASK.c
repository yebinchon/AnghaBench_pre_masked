
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_handshake {int dummy; } ;
struct repl_error {int dummy; } ;
struct repl_data_ack {int dummy; } ;
struct connection {int fd; int In; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct connection*,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (struct connection*,struct repl_data_ack*) ;
 int FUNC_4 (struct connection*,struct repl_handshake*,int) ;
 int FUNC_5 (struct connection*,struct repl_error*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_7 (struct connection *VAR_6, int VAR_7, int VAR_8) {
  if (VAR_5 > 0) {
    FUNC_2 (VAR_3, "rpcs_execute: fd=%d, op=%d, len=%d\n", VAR_6->fd, VAR_7, VAR_8);
  }
  if (VAR_5 > 1) {
    FUNC_1 (VAR_6, 64);
  }

  if (VAR_8 > VAR_0 * 4) {
    FUNC_2 (VAR_3, "rpcs_execute: received too long packet from connection %d : type=%08x len=%d\n", VAR_6->fd, VAR_7, VAR_8);
    VAR_4++;
    return VAR_1;
  }

  FUNC_0 (FUNC_6 (&VAR_6->In, &VAR_2, VAR_8) == VAR_8);

  switch (VAR_7) {
  case 128:
    if (VAR_8 >= 12 + sizeof (struct repl_handshake)) {
      FUNC_4 (VAR_6, (struct repl_handshake *) (VAR_2 + 2), VAR_8 - 12);
      return 0;
    }
    break;
  case 129:
    if (VAR_8 >= 16 + sizeof (struct repl_error)) {
      FUNC_5 (VAR_6, (struct repl_error *) (VAR_2 + 2), VAR_8 - 12);
      return 0;
    }
    break;
  case 130:
    if (VAR_8 == 12 + sizeof (struct repl_data_ack)) {
      FUNC_3 (VAR_6, (struct repl_data_ack *) (VAR_2 + 2));
      return 0;
    }
    break;
  }

  VAR_4++;
  return 0;
}
