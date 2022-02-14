
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gather_data {scalar_t__ timeout_time; TYPE_3__* c; struct gather_data* next; } ;
struct TYPE_7__ {int fd; TYPE_1__* ev; } ;
struct TYPE_6__ {scalar_t__ reconnect_time; int conn_retries; int conn; } ;
struct TYPE_5__ {int in_queue; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 struct gather_data VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_4 (void) {
  int VAR_6, VAR_7;
  struct gather_data *VAR_8;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    if (!VAR_0[VAR_6].conn && VAR_3 >= VAR_0[VAR_6].reconnect_time) {
      VAR_7 = VAR_0[VAR_6].conn_retries++;
      VAR_0[VAR_6].reconnect_time = VAR_3 + (VAR_7 < 10 ? 1 : 5);
      FUNC_1(VAR_0+VAR_6);
    }
  }

  for (VAR_8 = VAR_2.next; VAR_8 != &VAR_2; VAR_8 = VAR_8->next) {
    FUNC_0 (VAR_8->c);
    if (VAR_8->timeout_time <= VAR_3) {
      if (VAR_5 > 0) {
  FUNC_2 (VAR_4, "gather of master connection %d: TIMEOUT (now=%ld, timeout=%ld), waking up\n", VAR_8->c->fd, VAR_3, VAR_8->timeout_time);
      }
      if (!VAR_8->c->ev->in_queue) {
  FUNC_3 (VAR_8->c->ev);
      }
    }
  }

}
