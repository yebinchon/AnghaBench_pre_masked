
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next_time; char* key; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (size_t) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,int,char*,int) ;
 int FUNC_3 (int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_4 (int VAR_8) {
  int VAR_9 = FUNC_0 (FUNC_3 (VAR_0)), VAR_10 = VAR_6[VAR_4];

  while (VAR_9 - VAR_4 > VAR_1 || VAR_4 - VAR_9 > VAR_2 - VAR_1 ||
         (VAR_8-- && VAR_4 != VAR_9)) {
    if (VAR_3[VAR_10].next_time != VAR_10) {
      if (VAR_7 > 0) {
        FUNC_2 (VAR_5, "del entry %d by time (key = %s) gap = %d\n", VAR_3[VAR_10].next_time, VAR_3[VAR_3[VAR_10].next_time].key, VAR_9 - VAR_4);
      }
      FUNC_1 (VAR_3[VAR_10].next_time);
    } else {
      if (++VAR_4 == VAR_2) {
        VAR_4 = 0;
      }
      VAR_10 = VAR_6[VAR_4];
    }
  }
}
