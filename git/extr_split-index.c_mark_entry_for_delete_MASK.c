
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {size_t cache_nr; TYPE_2__* split_index; TYPE_1__** cache; } ;
struct TYPE_4__ {int nr_deletions; } ;
struct TYPE_3__ {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,size_t) ;

__attribute__((used)) static void FUNC_1(size_t VAR_1, void *VAR_2)
{
 struct index_state *VAR_3 = VAR_2;
 if (VAR_1 >= VAR_3->cache_nr)
  FUNC_0("position for delete %d exceeds base index size %d",
      (int)VAR_1, VAR_3->cache_nr);
 VAR_3->cache[VAR_1]->ce_flags |= VAR_0;
 VAR_3->split_index->nr_deletions++;
}
