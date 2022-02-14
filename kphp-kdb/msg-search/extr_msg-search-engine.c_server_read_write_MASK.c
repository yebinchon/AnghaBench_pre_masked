
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int state; int error; scalar_t__ wra; int Out; int In; } ;
struct TYPE_3__ {int epoll_ready; int ready; int state; scalar_t__ data; } ;
typedef TYPE_1__ event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct connection*,int ,int) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (struct connection*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_8 (int VAR_10, void *VAR_11, event_t *VAR_12) {
  struct connection *VAR_13 = (struct connection *) VAR_11;
  int VAR_14;
  FUNC_0 (VAR_13);

  if (VAR_12->epoll_ready & (VAR_1 | VAR_0 | VAR_2)) {
    if (VAR_9 > 0) {
      FUNC_1 (VAR_8, "socket %d: disconnected, cleaning\n", VAR_10);
    }
    FUNC_2 (VAR_13);
    FUNC_5 (VAR_13, 0, sizeof(struct connection));
    VAR_12->data = 0;
    VAR_7--;

    return VAR_3;
  }

  VAR_14 = FUNC_7(VAR_13);
  if (VAR_14) return VAR_14;

  do {
    VAR_14 = FUNC_6(VAR_13);
    if (VAR_9) {
      FUNC_1 (VAR_8, "server_reader=%d, ready=%02x, state=%02x\n", VAR_14, VAR_12->ready, VAR_12->state);
    }
    if (VAR_14 > 0 || VAR_13->wra) break;
    if (FUNC_4(&VAR_13->Out)) {
      VAR_13->state = 1;
    }
    VAR_14 = FUNC_7(VAR_13);
  } while (!VAR_14 && (VAR_12->ready & VAR_4) && VAR_13->state != -3);

  FUNC_3(&VAR_13->In);
  FUNC_3(&VAR_13->Out);

  if (VAR_13->error == -3) {
    if (VAR_9 > 0) {
      FUNC_1 (VAR_8, "socket %d: closing and cleaning\n", VAR_10);
    }
    FUNC_2 (VAR_13);
    FUNC_5 (VAR_13, 0, sizeof(struct connection));
    VAR_12->data = 0;
    VAR_7--;

    return VAR_3;
  }

  return VAR_13->state == 1 && !VAR_13->wra ? VAR_6 | VAR_5 : VAR_4 | VAR_5;
}
