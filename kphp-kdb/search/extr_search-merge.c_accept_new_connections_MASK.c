
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in {int fd; int out_buff; int Out; int in_buff; int In; int state; scalar_t__ generation; TYPE_2__* ev; } ;
struct sockaddr {int dummy; } ;
struct connection {int fd; int out_buff; int Out; int in_buff; int In; int state; scalar_t__ generation; TYPE_2__* ev; } ;
typedef int peer ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_7__ {TYPE_3__ peer; } ;
typedef TYPE_2__ event_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sockaddr_in* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,struct sockaddr*,unsigned int*) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int ,struct sockaddr_in*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_3__*,struct sockaddr_in*,int) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_10 (int VAR_14, void *VAR_15, event_t *VAR_16) {
  char VAR_17[32];
  struct sockaddr_in VAR_18;
  unsigned VAR_19;
  int VAR_20, VAR_21 = 0;
  struct connection *VAR_22;
  do {
    VAR_19 = sizeof(VAR_18);
    FUNC_9 (&VAR_18, 0, sizeof(VAR_18));
    VAR_20 = FUNC_0 (VAR_14, (struct sockaddr *) &VAR_18, &VAR_19);
    if (VAR_20 < 0) {
      if (!VAR_21 && VAR_13 > 0) {
  FUNC_6 (VAR_12, "accept(%d) unexpectedly returns %d\n", VAR_14, VAR_20);
      }
      break;
    } else VAR_21++;
    FUNC_1 (VAR_20 < VAR_8);
    VAR_16 = VAR_6 + VAR_20;
    FUNC_8 (&VAR_16->peer, &VAR_18, sizeof(VAR_18));
    if (VAR_13 > 0) {
      FUNC_6 (VAR_12, "accepted incoming connection at %s:%d, fd=%d\n", FUNC_3(VAR_16->peer.sin_addr.s_addr, VAR_17), VAR_16->peer.sin_port, VAR_20);
    }
    if (VAR_20 >= VAR_7) {
      FUNC_2 (VAR_20);
      continue;
    }
    VAR_22 = VAR_2 + VAR_20;
    FUNC_9 (VAR_22, 0, sizeof (struct connection));
    VAR_22->fd = VAR_20;
    VAR_22->ev = VAR_16;
    VAR_22->generation = ++VAR_10;
    VAR_22->state = VAR_1;
    FUNC_7 (&VAR_22->In, VAR_22->in_buff, VAR_0);
    FUNC_7 (&VAR_22->Out, VAR_22->out_buff, VAR_0);
    FUNC_5 (VAR_20, 0, VAR_11, VAR_22);
    FUNC_4 (VAR_20, VAR_4 | VAR_5);
    VAR_9++;
  } while (1);
  return VAR_3;
}
