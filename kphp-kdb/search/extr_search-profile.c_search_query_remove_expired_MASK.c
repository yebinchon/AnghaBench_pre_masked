
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int expiration_time; scalar_t__ cpu_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2 (void) {
  static int VAR_3 = 0;
  if (VAR_2 > VAR_3) {
    VAR_3 = VAR_2 + 60;
  } else {
    return;
  }
  int VAR_4;
  for (VAR_4 = 1; VAR_4 <= VAR_1; ) {
    if (VAR_0[VAR_4].expiration_time < VAR_2) {
      VAR_1--;
      search_query_heap_en_t *VAR_5 = VAR_0 + VAR_1;
      if (VAR_4 != VAR_1) {
        if (VAR_0[VAR_4].cpu_time < VAR_5->cpu_time) {
          FUNC_1 (VAR_5, VAR_4);
        } else {
          FUNC_0 (VAR_5, VAR_4);
        }
      }
    } else {
      VAR_4++;
    }
  }
}
