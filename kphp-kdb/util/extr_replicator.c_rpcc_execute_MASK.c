
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_rotate {int dummy; } ;
struct repl_pos_info {int dummy; } ;
struct repl_handshake_ok {int dummy; } ;
struct repl_error {int dummy; } ;
struct repl_data {int dummy; } ;
struct connection {int fd; int In; int last_response_time; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*,int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int VAR_4 ;
 int FUNC_4 (struct connection*,struct repl_error*,int) ;
 int FUNC_5 (struct connection*,struct repl_data*,int) ;
 int FUNC_6 (struct connection*,struct repl_handshake_ok*) ;
 int FUNC_7 (struct connection*,struct repl_pos_info*) ;
 int FUNC_8 (struct connection*,struct repl_rotate*,int) ;
 int FUNC_9 (int *,scalar_t__*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_10 (struct connection *VAR_9, int VAR_10, int VAR_11) {
  VAR_9->last_response_time = VAR_4;
  if (VAR_10 == VAR_2) { return VAR_3; }
  if (VAR_8 > 0) {
    FUNC_3 (VAR_6, "rpcc_execute: fd=%d, op=%d, len=%d\n", VAR_9->fd, VAR_10, VAR_11);
  }
  if (VAR_8 > 1) {
    FUNC_2 (VAR_9, 64);
  }

  if (VAR_10 == VAR_1 && VAR_11 >= 12 + sizeof (struct repl_data)) {
    FUNC_1 (FUNC_9 (&VAR_9->In, &VAR_5, 8 + sizeof (struct repl_data)) == 8 + sizeof (struct repl_data));
    int VAR_12 = FUNC_5 (VAR_9, (struct repl_data *) (VAR_5 + 2), VAR_11 - 8 - sizeof (struct repl_data));
    if (VAR_12 < 0) {
      FUNC_1 (FUNC_0 (&VAR_9->In, VAR_11 - 8 - sizeof (struct repl_data)) == VAR_11 - 8 - sizeof (struct repl_data));
    }

    return 0;
  }

  if (VAR_11 > VAR_0 * 4) {
    FUNC_3 (VAR_6, "rpcc_execute: received too long packet from connection %d : type=%08x len=%d\n", VAR_9->fd, VAR_10, VAR_11);
    VAR_7++;
    return VAR_3;
  }

  FUNC_1 (FUNC_9 (&VAR_9->In, &VAR_5, VAR_11) == VAR_11);

  switch (VAR_10) {
  case 130:
    if (VAR_11 == 12 + sizeof (struct repl_handshake_ok)) {
      FUNC_6 (VAR_9, (struct repl_handshake_ok *) (VAR_5 + 2));
      return 0;
    }
    break;
  case 131:
    if (VAR_11 >= 16 + sizeof (struct repl_error)) {
      FUNC_4 (VAR_9, (struct repl_error *) (VAR_5 + 2), VAR_11 - 12);
      return 0;
    }
    break;
  case 128:
    if (VAR_11 >= 12 + sizeof (struct repl_rotate)) {
      FUNC_8 (VAR_9, (struct repl_rotate *) (VAR_5 + 2), VAR_11 - 12);
      return 0;
    }
    break;
  case 129:
    if (VAR_11 == 12 + sizeof (struct repl_pos_info)) {
      FUNC_7 (VAR_9, (struct repl_pos_info *) (VAR_5 + 2));
      return 0;
    }
    break;
  }
  VAR_7++;
  return 0;
}
