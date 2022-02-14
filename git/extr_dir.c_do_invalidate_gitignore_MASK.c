
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int dirs_nr; struct untracked_cache_dir** dirs; scalar_t__ untracked_nr; scalar_t__ valid; } ;



__attribute__((used)) static void FUNC_0(struct untracked_cache_dir *VAR_0)
{
 int VAR_1;
 VAR_0->valid = 0;
 VAR_0->untracked_nr = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->dirs_nr; VAR_1++)
  FUNC_0(VAR_0->dirs[VAR_1]);
}
