
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* targ; } ;
struct TYPE_9__ {scalar_t__ generation; struct connection* conn; } ;
struct TYPE_8__ {TYPE_2__ targ; TYPE_4__ conn; } ;
struct relative {int type; struct relative* next; TYPE_3__ conn; } ;
struct connection {scalar_t__ generation; } ;
struct TYPE_10__ {struct relative* next; } ;
struct TYPE_6__ {struct connection* first_conn; } ;


 TYPE_5__ VAR_0 ;

struct relative *FUNC_0 (struct connection *VAR_1) {
  struct relative *VAR_2 = VAR_0.next;
  while (VAR_2->type != -1) {
    if (VAR_2->type == 1 && VAR_2->conn.conn.conn == VAR_1 && VAR_2->conn.conn.generation == VAR_1->generation) {
      return VAR_2;
    }
    if (VAR_2->type == 0 && VAR_2->conn.targ.targ->first_conn == VAR_1) {
      return VAR_2;
    }
    VAR_2 = VAR_2->next;
  }
  return 0;
}
