
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpu_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const search_query_heap_en_t *VAR_2 = *((const search_query_heap_en_t **) VAR_0);
  const search_query_heap_en_t *VAR_3 = *((const search_query_heap_en_t **) VAR_1);
  if (VAR_2->cpu_time < VAR_3->cpu_time) { return -1; }
  if (VAR_2->cpu_time > VAR_3->cpu_time) { return 1; }
  return 0;
}
