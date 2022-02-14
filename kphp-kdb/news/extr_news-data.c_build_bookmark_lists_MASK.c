
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int next; int y; long long value; } ;
struct TYPE_3__ {int user_id; int offset; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 () ;

void FUNC_2 (void) {
  int VAR_5 = VAR_2, VAR_6, VAR_7 = 0, VAR_8;
  long long VAR_9;
  FUNC_0 (!VAR_4 && VAR_2 <= 0);
  while (VAR_5 < 0) {
    FUNC_0 (VAR_4 < VAR_0);
    VAR_6 = VAR_1[VAR_5].next;
    if (!VAR_7) {
      VAR_8 = FUNC_1 ();
    } else {
      VAR_8 = VAR_7;
      VAR_7 = VAR_1[VAR_7].next;
    }
    VAR_3[VAR_4].user_id = VAR_6;
    VAR_3[VAR_4].offset = VAR_8;
    VAR_4++;
    do {
      VAR_1[VAR_8].next = VAR_5;
      VAR_1[VAR_5].y &= 1;
      VAR_8 = VAR_5;
      VAR_9 = VAR_1[VAR_5++].value;
      while (VAR_5 < 0 && VAR_1[VAR_5].value == VAR_9 && VAR_1[VAR_5].next == VAR_6) {
        VAR_1[VAR_5].next = VAR_7;
        VAR_7 = VAR_5++;
      }
    } while (VAR_5 < 0 && VAR_1[VAR_5].next == VAR_6);
    VAR_1[VAR_8].next = 0;
  }
}
