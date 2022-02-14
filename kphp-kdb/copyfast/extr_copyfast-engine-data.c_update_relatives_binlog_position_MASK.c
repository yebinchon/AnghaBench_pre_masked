
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long long id; } ;
struct relative {int type; long long binlog_position; struct relative* next; int timestamp; TYPE_2__ node; } ;
struct TYPE_8__ {struct relative* next; } ;
struct TYPE_5__ {long long last_known_binlog_position; int last_known_binlog_position_time; } ;
struct TYPE_7__ {TYPE_1__ structured; } ;


 long long VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;

int FUNC_1 (long long VAR_4, long long VAR_5) {
  int VAR_6 = 0;
  struct relative *VAR_7 = VAR_1.next;
  while (VAR_7->type != -1) {
    if (VAR_7->node.id == VAR_4) {
      if (VAR_7->binlog_position <= VAR_0 && VAR_5 > VAR_0) {
        VAR_7->timestamp = VAR_3;
      }
      VAR_7->binlog_position = VAR_5;
      VAR_6++;
    }
    VAR_7 = VAR_7->next;
  }
  if (VAR_5 > VAR_2->structured.last_known_binlog_position) {
    VAR_2->structured.last_known_binlog_position = VAR_5;
    VAR_2->structured.last_known_binlog_position_time = FUNC_0();
  }
  return VAR_6;
}
