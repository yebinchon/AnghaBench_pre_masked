
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int query; int expiration_time; int res; int cpu_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1 (search_query_heap_en_t *VAR_0, search_query_heap_en_t *VAR_1) {
  VAR_0->cpu_time = VAR_1->cpu_time;
  VAR_0->res = VAR_1->res;
  VAR_0->expiration_time = VAR_1->expiration_time;
  FUNC_0 (VAR_0->query, VAR_1->query);
}
