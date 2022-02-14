
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* query; scalar_t__ expiration_time; int res; int cpu_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;
typedef int A ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__** FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__**,int,int,int ) ;
 int FUNC_2 (char*,char*,char*,int ,int ,scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4 (char *VAR_4, int VAR_5) {
  int VAR_6;
  search_query_heap_en_t **VAR_7 = FUNC_0 (VAR_2 * sizeof (VAR_7[0]));
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    VAR_7[VAR_6] = VAR_1 + VAR_6 + 1;
  }
  FUNC_1 (VAR_7, VAR_2, sizeof (VAR_7[0]), VAR_3);
  char *VAR_8 = VAR_4;
  for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--) {
    if (FUNC_3 (VAR_7[VAR_6]->query) + 30 > VAR_5) { break; }
    int VAR_9 = FUNC_2 (VAR_8, "%s\t%.6lf\t%d\t%d\n", VAR_7[VAR_6]->query, VAR_7[VAR_6]->cpu_time, VAR_7[VAR_6]->res, VAR_7[VAR_6]->expiration_time - VAR_0);
    VAR_8 += VAR_9;
    VAR_5 -= VAR_9;
  }
  return VAR_8 - VAR_4;
}
