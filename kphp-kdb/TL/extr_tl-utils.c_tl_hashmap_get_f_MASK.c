
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_hashmap {int size; scalar_t__ filled; scalar_t__ n; void** h; int (* compare ) (void*,void*) ;int (* compute_hash ) (struct tl_hashmap*,void*,int*,int*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tl_hashmap*,void*,int*,int*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (struct tl_hashmap**) ;

void *FUNC_4 (struct tl_hashmap **VAR_0, void *VAR_1, int VAR_2) {
  FUNC_0 (VAR_2 >= 0);
  int VAR_3, VAR_4;
  struct tl_hashmap *VAR_5 = *VAR_0;
  VAR_5->compute_hash (VAR_5, VAR_1, &VAR_3, &VAR_4);
  void *VAR_6;
  while ((VAR_6 = VAR_5->h[VAR_3]) != ((void*)0)) {
    if (!VAR_5->compare (VAR_6, VAR_1)) {
      return VAR_6;
    }
    VAR_3 += VAR_4;
    if (VAR_3 >= VAR_5->size) { VAR_3 -= VAR_5->size; }
  }
  if (!VAR_2) {
    return ((void*)0);
  }
  if (VAR_5->filled == VAR_5->n) {
    FUNC_3 (VAR_0);
    return FUNC_4 (VAR_0, VAR_1, VAR_2);
  }
  VAR_5->filled++;
  VAR_5->h[VAR_3] = VAR_1;
  return VAR_1;
}
