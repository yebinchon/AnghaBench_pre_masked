
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct split_index {unsigned int saved_cache_nr; unsigned int nr_replacements; int * replace_bitmap; int * delete_bitmap; int ** saved_cache; scalar_t__ nr_deletions; TYPE_1__* base; } ;
struct index_state {unsigned int cache_nr; int ** cache; scalar_t__ cache_alloc; struct split_index* split_index; } ;
struct TYPE_2__ {unsigned int cache_nr; int cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,unsigned int,scalar_t__) ;
 int FUNC_1 (int **,int ,unsigned int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (struct index_state*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int *,int ,struct index_state*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (struct index_state*,int ) ;
 int VAR_4 ;

void FUNC_10(struct index_state *VAR_5)
{
 struct split_index *VAR_6 = VAR_5->split_index;
 unsigned int VAR_7;

 FUNC_8(VAR_6->base);

 VAR_6->saved_cache = VAR_5->cache;
 VAR_6->saved_cache_nr = VAR_5->cache_nr;
 VAR_5->cache_nr = VAR_6->base->cache_nr;
 VAR_5->cache = ((void*)0);
 VAR_5->cache_alloc = 0;
 FUNC_0(VAR_5->cache, VAR_5->cache_nr, VAR_5->cache_alloc);
 FUNC_1(VAR_5->cache, VAR_6->base->cache, VAR_5->cache_nr);

 VAR_6->nr_deletions = 0;
 VAR_6->nr_replacements = 0;
 FUNC_6(VAR_6->replace_bitmap, VAR_4, VAR_5);
 FUNC_6(VAR_6->delete_bitmap, VAR_3, VAR_5);
 if (VAR_6->nr_deletions)
  FUNC_9(VAR_5, 0);

 for (VAR_7 = VAR_6->nr_replacements; VAR_7 < VAR_6->saved_cache_nr; VAR_7++) {
  if (!FUNC_4(VAR_6->saved_cache[VAR_7]))
   FUNC_5("corrupt link extension, entry %d should "
       "have non-zero length name", VAR_7);
  FUNC_3(VAR_5, VAR_6->saved_cache[VAR_7],
    VAR_1 |
    VAR_0 |





    VAR_2);
  VAR_6->saved_cache[VAR_7] = ((void*)0);
 }

 FUNC_7(VAR_6->delete_bitmap);
 FUNC_7(VAR_6->replace_bitmap);
 FUNC_2(VAR_6->saved_cache);
 VAR_6->delete_bitmap = ((void*)0);
 VAR_6->replace_bitmap = ((void*)0);
 VAR_6->saved_cache_nr = 0;
}
