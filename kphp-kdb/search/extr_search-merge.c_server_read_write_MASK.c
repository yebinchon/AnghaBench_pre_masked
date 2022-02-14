
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connection {int state; scalar_t__ error; int Out; int In; TYPE_1__* gather; scalar_t__ Tmp; } ;
struct TYPE_5__ {int epoll_ready; int state; int ready; scalar_t__ data; } ;
typedef TYPE_2__ event_t ;
struct TYPE_4__ {scalar_t__ timeout_time; scalar_t__ ready_num; scalar_t__ wait_num; } ;


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
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct connection*,int ,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (struct connection*) ;
 int FUNC_9 (struct connection*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

int FUNC_10 (int VAR_17, void *VAR_18, event_t *VAR_19) {
  struct connection *VAR_20 = (struct connection *) VAR_18;
  int VAR_21;
  FUNC_0 (VAR_20);

  if (VAR_19->epoll_ready & (VAR_7 | VAR_6 | VAR_8)) {
    if (VAR_16 > 0) {
      FUNC_2 (VAR_15, "socket %d: disconnected, cleaning\n", VAR_17);
    }
    FUNC_4 (VAR_20);
    FUNC_7 (VAR_20, 0, sizeof(struct connection));
    VAR_19->data = 0;
    VAR_13--;

    return VAR_9;
  }

  VAR_20->state &= ~VAR_2;
  if ((VAR_19->state & VAR_10) && !(VAR_19->ready & VAR_10)) { VAR_20->state |= VAR_1; }
  if ((VAR_19->state & VAR_12) && !(VAR_19->ready & VAR_12)) { VAR_20->state |= VAR_3; }

  if (VAR_20->gather && (VAR_14 >= VAR_20->gather->timeout_time || VAR_20->gather->ready_num == VAR_20->gather->wait_num)) {
    VAR_21 = FUNC_1 (VAR_20);
    FUNC_3 (VAR_20->Tmp);
    VAR_20->Tmp = 0;
  }

  while ((((VAR_20->state & (VAR_4 | VAR_0)) == VAR_4) && !(VAR_20->state & VAR_1)) || ((VAR_20->state & VAR_5) && !(VAR_20->state & VAR_3))) {

    VAR_21 = FUNC_9 (VAR_20);
    if (VAR_21) { break; }

    if (!VAR_20->gather && !(VAR_20->state & VAR_0)) {
      VAR_21 = FUNC_8 (VAR_20);
      if (VAR_16) {
  FUNC_2 (VAR_15, "server_reader=%d, ready=%02x, state=%02x\n", VAR_21, VAR_19->ready, VAR_19->state);
      }
      if (VAR_21 > 0) { break; }
    }

    if (FUNC_6(&VAR_20->Out)) {
      VAR_20->state |= VAR_5;
    }
  }

  FUNC_5(&VAR_20->In);
  FUNC_5(&VAR_20->Out);

  if (VAR_20->error < 0) {
    if (VAR_16 > 0) {
      FUNC_2 (VAR_15, "socket %d: closing and cleaning (error code=%ld)\n", VAR_17, VAR_20->error);
    }
    FUNC_4 (VAR_20);
    FUNC_7 (VAR_20, 0, sizeof(struct connection));
    VAR_19->data = 0;
    VAR_13--;

    return VAR_9;
  }

  return (VAR_20->state & VAR_4 ? VAR_10 : 0) | (VAR_20->state & VAR_5 ? VAR_12 : 0) | VAR_11;
}
