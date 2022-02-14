
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct index_state {int cache_changed; int cache_tree; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct repository*,int ,struct tree*) ;

void FUNC_3(struct repository *VAR_1,
        struct index_state *VAR_2,
        struct tree *VAR_3)
{
 FUNC_1(&VAR_2->cache_tree);
 VAR_2->cache_tree = FUNC_0();
 FUNC_2(VAR_1, VAR_2->cache_tree, VAR_3);
 VAR_2->cache_changed |= VAR_0;
}
