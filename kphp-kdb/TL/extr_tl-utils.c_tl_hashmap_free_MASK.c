
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_hashmap {int size; int h; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct tl_hashmap*,int) ;

void FUNC_2 (struct tl_hashmap **VAR_0) {
  struct tl_hashmap *VAR_1 = *VAR_0;
  if (VAR_1 == ((void*)0)) {
    return;
  }
  FUNC_0 (VAR_1->h, (VAR_1->size * sizeof (void *)));
  FUNC_1 (VAR_1, sizeof (struct tl_hashmap));
  *VAR_0 = ((void*)0);
}
