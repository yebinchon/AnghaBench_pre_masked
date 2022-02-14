
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct TYPE_2__ {int index; } ;



__attribute__((used)) static void FUNC_0(struct index_state *VAR_0)
{
 int VAR_1;







 for (VAR_1 = 0; VAR_1 < VAR_0->cache_nr; VAR_1++)
  VAR_0->cache[VAR_1]->index = VAR_1 + 1;
}
