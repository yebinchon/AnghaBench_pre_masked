
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; int ref_cnt; TYPE_1__* ev_first; } ;
typedef TYPE_2__ queue ;
struct TYPE_8__ {char* name; int timeout; struct TYPE_8__* next_time; int lock; TYPE_2__* q; } ;
typedef TYPE_3__ qkey ;
struct TYPE_6__ {int ref_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__** VAR_11 ;

void FUNC_4 (int VAR_12) {
  int VAR_13 = FUNC_3 (VAR_0);
  int VAR_14 = FUNC_0(VAR_13);
  qkey *VAR_15 = VAR_11[VAR_6];


  while (VAR_14 - VAR_6 > VAR_1 || VAR_6 - VAR_14 > VAR_3 - VAR_1 ||
         (VAR_12-- > 0 && VAR_6 != VAR_14)) {
    if (VAR_15->next_time != VAR_15) {
      if (VAR_8 > 1) {
        FUNC_2 (VAR_10, "del entry %p by time (key = %s) gap = %lu, timeout = %d, qname = (%p), now = %d, now2 = %d\n", VAR_15->next_time, VAR_15->next_time->name, VAR_14 - VAR_6, VAR_15->next_time->timeout, VAR_15->next_time->q, VAR_9, (int)FUNC_3 (VAR_0));
        if (VAR_15->next_time->q != ((void*)0)) {
          queue *VAR_16 = VAR_15->next_time->q;
          FUNC_2 (VAR_10, "!%s!%d!", VAR_16->name, VAR_16->ref_cnt);
          if (VAR_16->ev_first != ((void*)0)) {
            FUNC_2 (VAR_10, "%d\n", VAR_16->ev_first->ref_cnt);
          } else {
            FUNC_2 (VAR_10, "NULL\n");
          }
        }
      }
      FUNC_1 (VAR_15->next_time);
    } else {
      if (++VAR_6 == VAR_3) {
        VAR_6 = 0;
      }
      VAR_15 = VAR_11[VAR_6];
    }
  }

  VAR_14 = FUNC_0(VAR_13 - (2 << VAR_2));
  int VAR_17 = VAR_6;
  VAR_15 = VAR_11[VAR_17];
  VAR_12 = 10000000;
  while (VAR_12-- > 0 && VAR_17 != VAR_14 && VAR_4 + VAR_5 > VAR_7) {
    qkey *VAR_18;
    for (VAR_18 = VAR_11[VAR_17]; VAR_18->next_time != VAR_11[VAR_17] && VAR_12 > 0; VAR_12--) {
      if (!VAR_18->next_time->lock) {
        FUNC_2 (VAR_10, "del entry %p by memory limit (key = %s) [%d / %d]\n", VAR_18->next_time, VAR_18->next_time->name, VAR_4 + VAR_5, VAR_7);
        FUNC_1 (VAR_18->next_time);
      } else {
        VAR_18 = VAR_18->next_time;
      }
    }
    if (++VAR_17 == VAR_3) {
      VAR_17 = 0;
    }
  }
}
