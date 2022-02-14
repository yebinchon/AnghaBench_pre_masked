
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int dummy; } ;
struct untracked_cache {int gitignore_invalidated; } ;


 int FUNC_0 (struct untracked_cache_dir*) ;

__attribute__((used)) static void FUNC_1(struct untracked_cache *VAR_0,
     struct untracked_cache_dir *VAR_1)
{
 VAR_0->gitignore_invalidated++;
 FUNC_0(VAR_1);
}
