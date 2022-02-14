
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_query_heap_en {scalar_t__ cpu_time; int query; } ;


 int VAR_0 ;
 struct search_query_heap_en* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct search_query_heap_en*,struct search_query_heap_en*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3 (struct search_query_heap_en *VAR_3) {
  if (VAR_2 == VAR_0) {
    FUNC_2 (VAR_1[1].query, FUNC_1(VAR_1[1].query)+1);
    int VAR_4 = 1;
    while (1) {
      int VAR_5 = VAR_4 << 1;
      if (VAR_5 > VAR_2) { break; }
      if (VAR_5 < VAR_2 && VAR_1[VAR_5].cpu_time > VAR_1[VAR_5+1].cpu_time) { VAR_5++; }
      if (VAR_3->cpu_time <= VAR_1[VAR_5].cpu_time) { break; }
      FUNC_0 (VAR_1 + VAR_4, VAR_1 + VAR_5, sizeof (*VAR_3));
      VAR_4 = VAR_5;
    }
    FUNC_0 (VAR_1 + VAR_4, VAR_3, sizeof (*VAR_3));
  } else {
    int VAR_6 = ++VAR_2;
    while (VAR_6 > 1) {
      int VAR_7 = (VAR_6 >> 1);
      if (VAR_1[VAR_7].cpu_time <= VAR_3->cpu_time) { break; }
      FUNC_0 (VAR_1 + VAR_6, VAR_1 + VAR_7, sizeof (*VAR_3));
      VAR_6 = VAR_7;
    }
    FUNC_0 (VAR_1 + VAR_6, VAR_3, sizeof (*VAR_3));
  }
}
