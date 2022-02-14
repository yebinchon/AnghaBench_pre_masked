
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; struct TYPE_5__* next_time; } ;
typedef TYPE_1__ wkey ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,TYPE_1__*,int,int) ;
 int FUNC_3 (int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;

void FUNC_4 (int VAR_7) {
  int VAR_8 = FUNC_0 (FUNC_3 (VAR_0));
  wkey *VAR_9 = VAR_6[VAR_3];

  while (VAR_8 - VAR_3 > VAR_1 || VAR_3 - VAR_8 > VAR_2 - VAR_1 ||
         (VAR_7-- && VAR_3 != VAR_8)) {
    if (VAR_9->next_time != VAR_9) {
      if (VAR_4 > 1) {
        FUNC_2 (VAR_5, "del entry %p by time (key = %d) gap = %d\n", VAR_9->next_time, VAR_9->next_time->x, VAR_8 - VAR_3);
      }
      FUNC_1 (VAR_9->next_time);
    } else {
      if (++VAR_3 == VAR_2) {
        VAR_3 = 0;
      }
      VAR_9 = VAR_6[VAR_3];
    }
  }
}
