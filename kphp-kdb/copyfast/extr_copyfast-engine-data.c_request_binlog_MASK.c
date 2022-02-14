
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct relative {int type; scalar_t__ binlog_position; scalar_t__ timestamp; size_t link_color; TYPE_1__ node; struct relative* next; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {struct relative* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int) ;
 struct connection* FUNC_1 (struct relative*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct connection*,int ,int) ;

void FUNC_4 (void) {
  if (VAR_1 + VAR_3 > VAR_5) {
    return;
  }
  struct relative *VAR_6 = VAR_2.next;
  struct relative *VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9 = 0;
  while (VAR_6->type != -1) {
    if (VAR_6->binlog_position > VAR_0 && VAR_5 >= VAR_6->timestamp + VAR_4[VAR_6->link_color]) {
      if (VAR_6->link_color == VAR_8){
        VAR_9 ++;
        if (FUNC_2 () % (VAR_9) == 0) {
            VAR_7 = VAR_6;
        }
      } else if (VAR_6->link_color > VAR_8) {
        VAR_9 = 1;
        VAR_8 = VAR_6->link_color;
        VAR_7 = VAR_6;
      }
    }
    VAR_6 = VAR_6->next;
  }
  if (VAR_7) {
    FUNC_0 (VAR_8 >= 0 && VAR_8 <= 2);
    struct connection *VAR_10 = FUNC_1 (VAR_7);
    if (VAR_10) {
      FUNC_3 (VAR_10, VAR_7->node.id, -1);
      VAR_1 = VAR_5;
    }
  }
}
