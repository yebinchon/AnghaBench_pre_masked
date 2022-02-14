
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache {char* exclude_per_dir; int dir_flags; int ident; } ;
struct index_state {int cache_changed; struct untracked_cache* untracked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct untracked_cache*) ;
 int FUNC_1 (int *,int) ;
 struct untracked_cache* FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct index_state *VAR_3)
{
 struct untracked_cache *VAR_4 = FUNC_2(1, sizeof(*VAR_4));
 FUNC_1(&VAR_4->ident, 100);
 VAR_4->exclude_per_dir = ".gitignore";

 VAR_4->dir_flags = VAR_1 | VAR_0;
 FUNC_0(VAR_4);
 VAR_3->untracked = VAR_4;
 VAR_3->cache_changed |= VAR_2;
}
