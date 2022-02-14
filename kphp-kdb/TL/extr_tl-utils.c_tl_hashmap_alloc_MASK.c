
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_hashmap {int size; int n; int h; scalar_t__ filled; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct tl_hashmap* FUNC_3 (int) ;

struct tl_hashmap *FUNC_4 (int VAR_1) {
  FUNC_0 (VAR_1 >= VAR_0);
  struct tl_hashmap *VAR_2 = FUNC_3 (sizeof (struct tl_hashmap));
  VAR_2->size = FUNC_1 (VAR_1);
  VAR_2->filled = 0;
  VAR_2->n = VAR_1;
  VAR_2->h = FUNC_2 (VAR_2->size * sizeof (void *));
  return VAR_2;
}
