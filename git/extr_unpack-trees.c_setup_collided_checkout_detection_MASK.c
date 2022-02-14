
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct checkout {int clone; } ;
struct TYPE_2__ {int ce_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct checkout *VAR_1,
           struct index_state *VAR_2)
{
 int VAR_3;

 VAR_1->clone = 1;
 for (VAR_3 = 0; VAR_3 < VAR_2->cache_nr; VAR_3++)
  VAR_2->cache[VAR_3]->ce_flags &= ~VAR_0;
}
