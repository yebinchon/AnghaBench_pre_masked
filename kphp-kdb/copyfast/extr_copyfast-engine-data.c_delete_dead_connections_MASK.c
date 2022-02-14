
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct relative {int type; TYPE_4__* prev; struct relative* next; } ;
struct TYPE_10__ {struct relative* next; } ;
struct TYPE_6__ {scalar_t__ generation; TYPE_3__* conn; } ;
struct TYPE_7__ {TYPE_1__ conn; } ;
struct TYPE_9__ {int type; TYPE_2__ conn; } ;
struct TYPE_8__ {scalar_t__ generation; scalar_t__ last_response_time; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

void FUNC_2 (void) {
  struct relative *VAR_4 = VAR_1.next;
  while (VAR_4->type != -1) {
    VAR_4 = VAR_4->next;
    if (VAR_4->prev->type == 1) {
      if (VAR_4->prev->conn.conn.conn->generation != VAR_4->prev->conn.conn.generation ||
        FUNC_1 (VAR_4->prev->conn.conn.conn) != VAR_2 ||
        VAR_4->prev->conn.conn.conn->last_response_time + VAR_0 < VAR_3) {
        FUNC_0 (VAR_4->prev, 1);
      }
    }
  }
}
