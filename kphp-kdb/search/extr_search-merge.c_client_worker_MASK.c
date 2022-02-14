
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int state; int fd; int error; int Out; int In; struct cluster_server* serv; } ;
struct cluster_server {int port; scalar_t__ reconnect_time; scalar_t__ conn_retries; int rconn; int addr; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (struct connection*) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_8 (int VAR_14, void *VAR_15, event_t *VAR_16) {
  struct connection *VAR_17 = (struct connection *) VAR_16->data;
  struct cluster_server *VAR_18;
  int VAR_19;
  FUNC_0 (VAR_17);

  if (VAR_16->epoll_ready & (VAR_6 | VAR_5 | VAR_7)) {
    if (VAR_13 > 0) {
      FUNC_3 (VAR_12, "outbound socket %d: disconnected, cleaning\n", VAR_14);
    }


    return FUNC_1 (VAR_17);
  }

  if (VAR_17->state == VAR_0) {
    if (VAR_16->ready & VAR_10) {
      if (VAR_13 > 0) {
  FUNC_3 (VAR_12, "socket #%d to %s:%d becomes active\n", VAR_17->fd, FUNC_6(VAR_17->serv->addr), VAR_17->serv->port);
      }
      VAR_17->state = VAR_4;
      VAR_18 = VAR_17->serv;
      VAR_18->rconn++;
      VAR_18->conn_retries = 0;
      VAR_18->reconnect_time = 0;
      VAR_11++;
      return VAR_8 | VAR_9;
    }
    FUNC_3 (VAR_12, "socket #%d: unknown event before connecting (?)\n", VAR_17->fd);
    return VAR_9;
  }

  VAR_17->state &= ~VAR_2;
  if ((VAR_16->state & VAR_8) && !(VAR_16->ready & VAR_8)) { VAR_17->state |= VAR_1; }
  if ((VAR_16->state & VAR_10) && !(VAR_16->ready & VAR_10)) { VAR_17->state |= VAR_3; }

  if (VAR_13 > 0) {
    FUNC_3 (VAR_12, "outbound socket #%d: woke up, state=%d\n", VAR_17->fd, VAR_17->state);
  }

  FUNC_7 (VAR_17);


  VAR_19 = 0;
  while (VAR_17->state > 0 && (VAR_19 == 1 || ((VAR_17->state & VAR_4) && !(VAR_17->state & VAR_1)))) {

    VAR_19 = FUNC_2 (VAR_17);
    if (VAR_13 > 1) {
      FUNC_3 (VAR_12, "client_reader(%d) returned %d\n", VAR_17->fd, VAR_19);
    }
    if (VAR_19 < 0) {
      VAR_17->error |= 8;
    }
    FUNC_4 (&VAR_17->In);
    if (VAR_19 < 0 || VAR_19 > 1) {
      break;
    }
  }

  if (VAR_17->error) {
    if (VAR_13 > 0) {
      FUNC_3 (VAR_12, "client socket #%d: error, closing socket.\n", VAR_17->fd);
    }
    return FUNC_1 (VAR_17);
  }

  FUNC_4 (&VAR_17->In);
  FUNC_4 (&VAR_17->Out);

  return FUNC_5 (&VAR_17->Out) > 0 ? VAR_9 | VAR_8 | VAR_10 : VAR_9 | VAR_8;

}
