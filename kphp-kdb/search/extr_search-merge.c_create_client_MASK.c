
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int fd; int state; struct connection* prev; struct connection* next; int out_buff; int Out; int in_buff; int In; struct cluster_server* serv; int * ev; } ;
struct TYPE_2__ {int s_addr; } ;
struct cluster_server {int port; int id; TYPE_1__ addr; int conn; struct connection* c; } ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct connection* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int ,struct connection*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (TYPE_1__) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct connection*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

struct connection *FUNC_9 (struct cluster_server *VAR_11) {
  int VAR_12 = FUNC_1 (VAR_11->addr.s_addr, VAR_11->port, 0);
  struct connection *VAR_13, *VAR_14;
  event_t *VAR_15;

  if (VAR_12 < 0) {
    FUNC_5 (VAR_9, "error connecting to %s:%d: %m", FUNC_6(VAR_11->addr), VAR_11->port);
    FUNC_4(1);
  }

  FUNC_0 (VAR_12 < VAR_6);

  VAR_15 = VAR_5 + VAR_12;


  VAR_13 = VAR_2 + VAR_12;
  FUNC_8 (VAR_13, 0, sizeof (struct connection));
  VAR_13->fd = VAR_12;
  VAR_13->ev = VAR_15;
  VAR_13->serv = VAR_11;

  FUNC_7 (&VAR_13->In, VAR_13->in_buff, VAR_0);
  FUNC_7 (&VAR_13->Out, VAR_13->out_buff, VAR_0);

  FUNC_3 (VAR_12, 0, VAR_7, VAR_13);
  FUNC_2 (VAR_12, VAR_4 | VAR_3);
  if (VAR_10 > 1) {
    FUNC_5 (VAR_9, "after insert()\n");
  }

  if (!VAR_11->c) {
    VAR_13->next = VAR_13->prev = VAR_11->c = VAR_13;
  } else {
    VAR_14 = VAR_11->c;
    VAR_13->next = VAR_14;
    VAR_13->prev = VAR_14->prev;
    VAR_14->prev->next = VAR_13;
    VAR_14->prev = VAR_13;
  }

  VAR_13->state = VAR_1;
  VAR_11->conn++;
  VAR_8++;

  if (VAR_10 > 0) {
    FUNC_5 (VAR_9, "outbound connection #%d: handle %d to %s:%d\n", VAR_11->id, VAR_13->fd, FUNC_6(VAR_11->addr), VAR_11->port);
  }

  return VAR_13;
}
