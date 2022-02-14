
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {scalar_t__ untracked_nr; scalar_t__ valid; } ;
struct untracked_cache {int dir_invalidated; } ;



__attribute__((used)) static void FUNC_0(struct untracked_cache *VAR_0,
         struct untracked_cache_dir *VAR_1)
{
 VAR_0->dir_invalidated++;
 VAR_1->valid = 0;
 VAR_1->untracked_nr = 0;
}
