
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lazy_entry {TYPE_1__* dir; } ;
struct index_state {int cache_nr; } ;
struct TYPE_2__ {int nr; } ;



__attribute__((used)) static inline void FUNC_0(
 struct index_state *VAR_0,
 struct lazy_entry *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->cache_nr; VAR_2++) {
  if (VAR_1[VAR_2].dir)
   VAR_1[VAR_2].dir->nr++;
 }
}
