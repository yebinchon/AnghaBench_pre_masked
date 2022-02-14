
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int flags; scalar_t__ status; int pending_queries; int fd; TYPE_1__* type; scalar_t__ error; int Out; int In; scalar_t__ crypto; scalar_t__ skip_bytes; TYPE_2__* ev; int ready; struct conn_target* target; } ;
struct conn_target {int active_outbound_connections; int port; int target; } ;
struct TYPE_4__ {int epoll_ready; int ready; scalar_t__ data; int state; } ;
typedef TYPE_2__ event_t ;
struct TYPE_3__ {scalar_t__ (* crypto_encrypt_output ) (struct connection*) ;int (* writer ) (struct connection*) ;int (* reader ) (struct connection*) ;int (* close ) (struct connection*,int ) ;int (* flush ) (struct connection*) ;int (* wakeup ) (struct connection*) ;int (* alarm ) (struct connection*) ;int (* check_ready ) (struct connection*) ;int (* connected ) (struct connection*) ;} ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct connection*,int ,int) ;
 scalar_t__ FUNC_9 (struct connection*) ;
 scalar_t__ FUNC_10 (struct connection*) ;
 int FUNC_11 (struct connection*) ;
 int FUNC_12 (struct connection*) ;
 int FUNC_13 (struct connection*) ;
 scalar_t__ FUNC_14 (struct connection*) ;
 int FUNC_15 (struct connection*) ;
 int FUNC_16 (struct connection*,int ) ;
 int FUNC_17 (struct connection*) ;
 int FUNC_18 (struct connection*) ;
 int FUNC_19 (struct connection*) ;
 int FUNC_20 (struct connection*) ;
 int FUNC_21 (struct connection*) ;
 scalar_t__ FUNC_22 (struct connection*) ;
 int FUNC_23 (struct connection*) ;
 int FUNC_24 (struct connection*) ;
 int FUNC_25 (int,char*,int,...) ;

int FUNC_26 (struct connection *VAR_30) {
  int VAR_31, VAR_32 = VAR_30->flags | ~VAR_3;
  event_t *VAR_33 = VAR_30->ev;

  FUNC_25 (2, "BEGIN processing connection %d, status=%d, flags=%d, pending=%d; epoll_ready=%d, ev->ready=%d\n", VAR_30->fd, VAR_30->status, VAR_30->flags, VAR_30->pending_queries, VAR_33->epoll_ready, VAR_33->ready);

  VAR_30->flags |= VAR_3;

  if (VAR_33->epoll_ready & (VAR_14 | VAR_13 | VAR_15)) {
    FUNC_25 (1, "socket %d: disconnected, cleaning\n", VAR_30->fd);
    FUNC_4 (VAR_30);
    return VAR_16;
  }






  if (VAR_30->status == VAR_21) {
    if (VAR_33->ready & VAR_18) {
      FUNC_25 (1, "socket #%d to %s:%d becomes active\n", VAR_30->fd, FUNC_6(VAR_30->target->target), VAR_30->target->port);
      struct conn_target *VAR_34 = VAR_30->target;
      VAR_34->active_outbound_connections++;
      VAR_20++;
      VAR_19++;
      VAR_30->status = VAR_27;
      VAR_30->flags = (VAR_30->flags & VAR_6) | VAR_11 | VAR_3;
      VAR_30->type->connected (VAR_30);

      if (FUNC_9 (VAR_30) > 0) {
        VAR_30->flags |= VAR_12;
      }
      VAR_30->type->check_ready (VAR_30);

      FUNC_25 (2, "socket #%d: ready=%d\n", VAR_30->fd, VAR_30->ready);
    }
    if (VAR_30->status == VAR_21) {
      VAR_30->flags &= VAR_32;
      FUNC_7 ("socket #%d: unknown event before connecting (?)\n", VAR_30->fd);
      return VAR_17;
    }
  }



  if (VAR_30->flags & VAR_0) {
    VAR_30->flags &= ~VAR_0;
    VAR_30->type->alarm(VAR_30);
  }

  if (VAR_30->status == VAR_28 && !VAR_30->pending_queries) {
    VAR_30->type->wakeup(VAR_30);
  }

  if (VAR_30->status == VAR_26 && !VAR_30->pending_queries) {
    VAR_30->type->wakeup(VAR_30);
  }

  if (VAR_30->flags & VAR_1) {
    VAR_30->flags &= ~VAR_1;
    VAR_30->type->flush (VAR_30);
    if (VAR_30->crypto && FUNC_10 (VAR_30) > 0) {
      FUNC_0 (VAR_30->type->crypto_encrypt_output (VAR_30) >= 0);
    }
    if (FUNC_9 (VAR_30) > 0) {
      VAR_30->flags |= VAR_12;
    }
  }





  while (
  ((VAR_30->flags & VAR_11) && !(VAR_30->flags & (VAR_4 | VAR_2 | VAR_10))) ||
  ((VAR_30->flags & VAR_12) && !(VAR_30->flags & (VAR_5 | VAR_2))) ||
  ((VAR_30->flags & VAR_8) && (VAR_30->status == VAR_23 || VAR_30->status == VAR_25 || VAR_30->status == VAR_27 || VAR_30->status == VAR_24))
  ) {

    if (VAR_30->error) {
      break;
    }

    if (FUNC_9 (VAR_30) + FUNC_10 (VAR_30) > 0) {
      VAR_31 = VAR_30->type->writer (VAR_30);
    }

    VAR_31 = VAR_30->type->reader (VAR_30);
    FUNC_25 (2, "server_reader=%d, ready=%02x, state=%02x\n", VAR_31, VAR_30->ev->ready, VAR_30->ev->state);
    if (VAR_31 || VAR_30->skip_bytes) {

      break;
    }

    if (FUNC_9 (VAR_30) > 0) {
      VAR_30->flags |= VAR_12;
      VAR_31 = VAR_30->type->writer(VAR_30);
    }
  }

  if (VAR_30->flags & VAR_1) {
    VAR_30->flags &= ~VAR_1;
    VAR_30->type->flush (VAR_30);
    if (VAR_30->crypto && FUNC_10 (VAR_30) > 0) {
      FUNC_0 (VAR_30->type->crypto_encrypt_output (VAR_30) >= 0);
    }
  }

  if (FUNC_9 (VAR_30) > 0) {
    VAR_30->flags |= VAR_12;
    VAR_30->type->writer(VAR_30);
    if (!(VAR_30->flags & VAR_7)) {
      FUNC_5(&VAR_30->In);
      FUNC_5(&VAR_30->Out);
    }
  }

  if (VAR_30->error || VAR_30->status == VAR_22 || (VAR_30->status == VAR_29 && !(VAR_30->flags & VAR_12)) || (VAR_30->flags & VAR_2)) {
    FUNC_25 (1, "socket %d: closing and cleaning (error code=%d)\n", VAR_30->fd, VAR_30->error);

    if (VAR_30->status != VAR_21) {
      VAR_19--;
      if (VAR_30->flags & VAR_9) {
 FUNC_2 (VAR_30);
      }
    }
    VAR_30->type->close (VAR_30, 0);
    FUNC_1 (VAR_30);

    FUNC_8 (VAR_30, 0, sizeof (struct connection));
    VAR_33->data = 0;

    return VAR_16;
  }



  VAR_30->flags &= VAR_32;

  FUNC_25 (2, "END processing connection %d, status=%d, flags=%d, pending=%d\n", VAR_30->fd, VAR_30->status, VAR_30->flags, VAR_30->pending_queries);

  return FUNC_3 (VAR_30);
}
