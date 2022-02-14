
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int * cache_tree; int * untracked; } ;



void FUNC_0(struct index_state *VAR_0, struct index_state *VAR_1)
{
 VAR_0->untracked = VAR_1->untracked;
 VAR_1->untracked = ((void*)0);
 VAR_0->cache_tree = VAR_1->cache_tree;
 VAR_1->cache_tree = ((void*)0);
}
