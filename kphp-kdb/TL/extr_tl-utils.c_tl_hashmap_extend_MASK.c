
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_hashmap {int size; int n; int ** h; int compute_hash; int compare; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 struct tl_hashmap* FUNC_1 (int) ;
 int FUNC_2 (struct tl_hashmap**) ;
 int FUNC_3 (struct tl_hashmap**,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4 (struct tl_hashmap **VAR_2) {
  if (VAR_1 >= 4) {
    FUNC_0 (VAR_0, "tl_hashmap_extend: old hash size is %d.\n", (*VAR_2)->size);
  }
  int VAR_3;
  struct tl_hashmap *VAR_4 = FUNC_1 ((*VAR_2)->n * 2);
  VAR_4->compare = (*VAR_2)->compare;
  VAR_4->compute_hash = (*VAR_2)->compute_hash;
  for (VAR_3 = 0; VAR_3 < (*VAR_2)->size; VAR_3++) {
    if ((*VAR_2)->h[VAR_3] != ((void*)0)) {
      FUNC_3 (&VAR_4, (*VAR_2)->h[VAR_3], 1);
    }
  }
  FUNC_2 (VAR_2);
  *VAR_2 = VAR_4;
}
