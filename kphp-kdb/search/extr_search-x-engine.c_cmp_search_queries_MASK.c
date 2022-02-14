
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_query_heap_en {scalar_t__ cpu_time; } ;



int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct search_query_heap_en *VAR_2 = (const struct search_query_heap_en *) VAR_0;
  const struct search_query_heap_en *VAR_3 = (const struct search_query_heap_en *) VAR_1;
  if (VAR_2->cpu_time < VAR_3->cpu_time) { return -1; }
  if (VAR_2->cpu_time > VAR_3->cpu_time) { return 1; }
  return 0;
}
