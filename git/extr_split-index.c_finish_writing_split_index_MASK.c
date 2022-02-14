
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_index {int saved_cache_nr; int saved_cache; int * replace_bitmap; int * delete_bitmap; } ;
struct index_state {int cache_nr; int cache; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct split_index* FUNC_2 (struct index_state*) ;

void FUNC_3(struct index_state *VAR_0)
{
 struct split_index *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->delete_bitmap);
 FUNC_0(VAR_1->replace_bitmap);
 VAR_1->delete_bitmap = ((void*)0);
 VAR_1->replace_bitmap = ((void*)0);
 FUNC_1(VAR_0->cache);
 VAR_0->cache = VAR_1->saved_cache;
 VAR_0->cache_nr = VAR_1->saved_cache_nr;
}
