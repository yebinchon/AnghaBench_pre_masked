
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {scalar_t__ untracked_nr; int * untracked; int untracked_alloc; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct untracked_cache_dir *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->untracked, VAR_0->untracked_nr + 1,
     VAR_0->untracked_alloc);
 VAR_0->untracked[VAR_0->untracked_nr++] = FUNC_1(VAR_1);
}
