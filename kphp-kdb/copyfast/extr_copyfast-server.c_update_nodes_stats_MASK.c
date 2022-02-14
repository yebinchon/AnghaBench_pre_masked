
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int timestamp; int binlog_position; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_6__ {TYPE_2__ extra; TYPE_1__ node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_0 (int VAR_10, int VAR_11) {
  VAR_7 = 0;
  VAR_1 = 0;
  VAR_9 = 0;
  VAR_3 = 0x7fffffffffffffffll;
  VAR_2 = 0;
  int VAR_12;
  VAR_8 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) if (!VAR_10 || VAR_11 == (VAR_4[VAR_12].node.id >> 32)){
    if (VAR_6 - VAR_4[VAR_12].extra.timestamp > 3 * VAR_0) {
      VAR_7 ++;
    }
    if (VAR_6 - VAR_4[VAR_12].extra.timestamp > 30 * VAR_0) {
      VAR_1 ++;
    }
    VAR_9 += VAR_4[VAR_12].extra.binlog_position;
    if (VAR_4[VAR_12].extra.binlog_position < VAR_3) {
      VAR_3 = VAR_4[VAR_12].extra.binlog_position;
    }
    if (VAR_4[VAR_12].extra.binlog_position > VAR_2) {
      VAR_2 = VAR_4[VAR_12].extra.binlog_position;
    }
    VAR_8 ++;
  }
}
