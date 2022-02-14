
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cpu_time; int res; scalar_t__ expiration_time; } ;
typedef TYPE_1__ search_query_heap_en_t ;
struct TYPE_8__ {scalar_t__ cpu_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (search_query_heap_en_t *VAR_5, int VAR_6, void *VAR_7, void (*VAR_8) (search_query_heap_en_t *, void *)) {
  VAR_5->cpu_time += FUNC_0 ();
  if (VAR_3 < VAR_1 || VAR_2[1].cpu_time < VAR_5->cpu_time) {
    VAR_8 (VAR_5, VAR_7);
    VAR_5->res = VAR_6;
    VAR_5->expiration_time = VAR_4 + VAR_0;
    FUNC_1 (VAR_5);
  }
}
