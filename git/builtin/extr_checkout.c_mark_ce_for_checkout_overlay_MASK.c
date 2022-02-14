
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_opts {int pathspec; scalar_t__ source_tree; int ignore_skipworktree; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct cache_entry*,int *,char*) ;
 scalar_t__ FUNC_1 (struct cache_entry*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct cache_entry *VAR_3,
      char *VAR_4,
      const struct checkout_opts *VAR_5)
{
 VAR_3->ce_flags &= ~VAR_0;
 if (!VAR_5->ignore_skipworktree && FUNC_1(VAR_3))
  return;
 if (VAR_5->source_tree && !(VAR_3->ce_flags & VAR_1))







  return;
 if (FUNC_0(&VAR_2, VAR_3, &VAR_5->pathspec, VAR_4))
  VAR_3->ce_flags |= VAR_0;
}
