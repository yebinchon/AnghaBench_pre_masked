
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cpu_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (search_query_heap_en_t *VAR_1, int VAR_2) {
  while (VAR_2 > 1) {
    int VAR_3 = (VAR_2 >> 1);
    if (VAR_0[VAR_3].cpu_time <= VAR_1->cpu_time) { break; }
    FUNC_0 (VAR_0 + VAR_2, VAR_0 + VAR_3);
    VAR_2 = VAR_3;
  }
  FUNC_0 (VAR_0 + VAR_2, VAR_1);
}
