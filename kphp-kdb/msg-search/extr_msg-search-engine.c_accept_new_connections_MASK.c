
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in {int fd; int out_buff; int Out; int in_buff; int In; TYPE_2__* ev; } ;
struct sockaddr {int dummy; } ;
struct connection {int fd; int out_buff; int Out; int in_buff; int In; TYPE_2__* ev; } ;
typedef int peer ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_7__ {TYPE_3__ peer; } ;
typedef TYPE_2__ event_t ;


 int VAR_0 ;
 struct sockaddr_in* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct sockaddr*,unsigned int*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int ,struct sockaddr_in*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_3__*,struct sockaddr_in*,int) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_10 (int VAR_12, void *VAR_13, event_t *VAR_14) {
  char VAR_15[32];
  struct sockaddr_in VAR_16;
  unsigned VAR_17;
  int VAR_18, VAR_19 = 0;
  struct connection *VAR_20;
  do {
    VAR_17 = sizeof(VAR_16);
    FUNC_9 (&VAR_16, 0, sizeof(VAR_16));
    VAR_18 = FUNC_0 (VAR_12, (struct sockaddr *) &VAR_16, &VAR_17);
    if (VAR_18 < 0) {
      if (!VAR_19 && VAR_11 > 0) {
 FUNC_6 (VAR_10, "accept(%d) unexpectedly returns %d\n", VAR_12, VAR_18);
      }
      break;
    } else VAR_19++;
    FUNC_1 (VAR_18 < VAR_7);
    VAR_14 = VAR_5 + VAR_18;
    FUNC_8 (&VAR_14->peer, &VAR_16, sizeof(VAR_16));
    if (VAR_11 > 0) {
      FUNC_6 (VAR_10, "accepted incoming connection at %s:%d, fd=%d\n", FUNC_3(VAR_14->peer.sin_addr.s_addr, VAR_15), VAR_14->peer.sin_port, VAR_18);
    }
    if (VAR_18 >= VAR_6) {
      FUNC_2 (VAR_18);
      continue;
    }
    VAR_20 = VAR_1 + VAR_18;
    FUNC_9 (VAR_20, 0, sizeof (struct connection));
    VAR_20->fd = VAR_18;
    VAR_20->ev = VAR_14;
    FUNC_7 (&VAR_20->In, VAR_20->in_buff, VAR_0);
    FUNC_7 (&VAR_20->Out, VAR_20->out_buff, VAR_0);
    FUNC_5 (VAR_18, 0, VAR_9, VAR_20);
    FUNC_4 (VAR_18, VAR_3 | VAR_4);
    VAR_8++;
  } while (1);
  return VAR_2;
}
