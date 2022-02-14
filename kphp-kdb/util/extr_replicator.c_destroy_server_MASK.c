
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repl_server_status {int session_id; scalar_t__ binlog; scalar_t__ buffer; TYPE_2__* server_next; TYPE_1__* server_prev; } ;
struct TYPE_4__ {TYPE_1__* server_prev; } ;
struct TYPE_3__ {TYPE_2__* server_next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,char*,int ) ;

int FUNC_5 (struct repl_server_status *VAR_1) {
  FUNC_4 (1, "destroyed server %d\n", VAR_1->session_id);
  VAR_1->server_next->server_prev = VAR_1->server_prev;
  VAR_1->server_prev->server_next = VAR_1->server_next;
  if (VAR_1->buffer) {

    FUNC_2 (VAR_1->buffer);
  }
  if (VAR_1->binlog) {
    FUNC_1 (VAR_1->binlog, 1);
  }
  FUNC_3 (VAR_1->session_id, -1);
  FUNC_0 (--VAR_0 >= 0);
  return 0;
}
