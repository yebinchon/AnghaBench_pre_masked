
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash_initialized; int cache_nr; int * cache; int dir_hash; int name_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int) ;
 scalar_t__ FUNC_4 (struct index_state*) ;
 int FUNC_5 (struct index_state*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct index_state *VAR_2)
{

 if (VAR_2->name_hash_initialized)
  return;
 FUNC_6();
 FUNC_3(&VAR_2->name_hash, VAR_0, ((void*)0), VAR_2->cache_nr);
 FUNC_3(&VAR_2->dir_hash, VAR_1, ((void*)0), VAR_2->cache_nr);

 if (FUNC_4(VAR_2)) {






  FUNC_1(&VAR_2->dir_hash);
  FUNC_5(VAR_2);
  FUNC_2(&VAR_2->dir_hash);
 } else {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2->cache_nr; VAR_3++)
   FUNC_0(VAR_2, VAR_2->cache[VAR_3]);
 }

 VAR_2->name_hash_initialized = 1;
 FUNC_7("initialize name hash");
}
