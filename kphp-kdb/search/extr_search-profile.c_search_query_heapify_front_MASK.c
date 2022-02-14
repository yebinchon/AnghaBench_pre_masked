
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cpu_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (search_query_heap_en_t *VAR_2, int VAR_3) {
  while (1) {
    int VAR_4 = VAR_3 << 1;
    if (VAR_4 > VAR_1) { break; }
    if (VAR_4 < VAR_1 && VAR_0[VAR_4].cpu_time > VAR_0[VAR_4+1].cpu_time) { VAR_4++; }
    if (VAR_2->cpu_time <= VAR_0[VAR_4].cpu_time) { break; }
    FUNC_0 (VAR_0 + VAR_3, VAR_0 + VAR_4);
    VAR_3 = VAR_4;
  }
  FUNC_0 (VAR_0 + VAR_3, VAR_2);
}
