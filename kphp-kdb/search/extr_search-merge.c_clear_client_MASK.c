
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int fd; scalar_t__ state; TYPE_2__* ev; struct connection* next; TYPE_1__* prev; struct cluster_server* serv; } ;
struct cluster_server {int port; scalar_t__ rconn; scalar_t__ conn; scalar_t__ reconnect_time; int addr; int conn_retries; struct connection* c; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {struct connection* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cluster_server*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct connection*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct connection*,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_6 (struct connection *VAR_7) {
  struct cluster_server *VAR_8 = VAR_7->serv;

  if (VAR_6 > 0) {
    FUNC_2 (VAR_5, "cleaning outbound socket %d...\n", VAR_7->fd);
  }

  if (VAR_7->state == VAR_0) {
    FUNC_2 (VAR_5, "could not connect to %s:%d\n", FUNC_4(VAR_7->serv->addr), VAR_7->serv->port);

  } else {
    VAR_8->rconn--;
    FUNC_0 (VAR_8->rconn >= 0);
    VAR_2--;
  }
  VAR_8->conn--;
  FUNC_0 (VAR_8->conn >= 0);
  VAR_4--;
  if (VAR_7->prev) { VAR_7->prev->next = VAR_7->next; }
  if (VAR_7->next) { VAR_7->next->prev = VAR_7->prev; }
  if (VAR_8->c == VAR_7) { VAR_8->c = VAR_7->next; }
  FUNC_3 (VAR_7);

  if (VAR_7->ev) {
    VAR_7->ev->data = 0;
  }
  FUNC_5 (VAR_7, 0, sizeof(struct connection));

  FUNC_0 (VAR_8->conn >= 0);
  if (!VAR_8->conn) {
    VAR_8->c = 0;

    if (VAR_3 >= VAR_8->reconnect_time) {
      VAR_8->reconnect_time = VAR_3 + 1;
      VAR_8->conn_retries++;
      if (VAR_6 > 0) {
  FUNC_2 (VAR_5, "trying to reconnect to %s:%d...\n", FUNC_4 (VAR_8->addr), VAR_8->port);
      }
      FUNC_1 (VAR_8);
    }
  }

  return VAR_1;
}
