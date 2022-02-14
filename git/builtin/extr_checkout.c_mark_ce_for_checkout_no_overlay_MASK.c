
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_opts {scalar_t__ source_tree; int pathspec; int ignore_skipworktree; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,struct cache_entry*,int *,char*) ;
 scalar_t__ FUNC_1 (struct cache_entry*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct cache_entry *VAR_5,
         char *VAR_6,
         const struct checkout_opts *VAR_7)
{
 VAR_5->ce_flags &= ~VAR_0;
 if (!VAR_7->ignore_skipworktree && FUNC_1(VAR_5))
  return;
 if (FUNC_0(&VAR_4, VAR_5, &VAR_7->pathspec, VAR_6)) {
  VAR_5->ce_flags |= VAR_0;
  if (VAR_7->source_tree && !(VAR_5->ce_flags & VAR_2))





   VAR_5->ce_flags |= VAR_1 | VAR_3;
 }
}
