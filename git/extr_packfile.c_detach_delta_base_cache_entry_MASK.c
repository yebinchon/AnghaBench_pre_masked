
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_base_cache_entry {scalar_t__ size; int lru; int key; int ent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delta_base_cache_entry*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct delta_base_cache_entry *VAR_2)
{
 FUNC_1(&VAR_0, &VAR_2->ent, &VAR_2->key);
 FUNC_2(&VAR_2->lru);
 VAR_1 -= VAR_2->size;
 FUNC_0(VAR_2);
}
