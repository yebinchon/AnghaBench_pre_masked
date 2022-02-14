
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct untracked_cache_dir {int dirs_nr; TYPE_1__** dirs; scalar_t__ untracked_nr; scalar_t__ valid; } ;
struct untracked_cache {int dir_invalidated; } ;
struct TYPE_2__ {scalar_t__ recurse; } ;



__attribute__((used)) static void FUNC_0(struct untracked_cache *VAR_0,
     struct untracked_cache_dir *VAR_1)
{
 int VAR_2;







 if (VAR_1->valid)
  VAR_0->dir_invalidated++;

 VAR_1->valid = 0;
 VAR_1->untracked_nr = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->dirs_nr; VAR_2++)
  VAR_1->dirs[VAR_2]->recurse = 0;
}
