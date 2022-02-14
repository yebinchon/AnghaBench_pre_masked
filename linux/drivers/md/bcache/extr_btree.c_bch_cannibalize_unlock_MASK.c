
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int btree_cache_wait; int * btree_cache_alloc_lock; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cache_set *VAR_1)
{
 if (VAR_1->btree_cache_alloc_lock == VAR_0) {
  VAR_1->btree_cache_alloc_lock = ((void*)0);
  FUNC_0(&VAR_1->btree_cache_wait);
 }
}
