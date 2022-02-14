
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_hashmap {unsigned int size; } ;



__attribute__((used)) static inline void FUNC_0 (struct tl_hashmap *VAR_0, const char *VAR_1, int *VAR_2, int *VAR_3) {
  unsigned int VAR_4 = 0, VAR_5 = 0;
  while (*VAR_1) {
    VAR_4 = 239 * VAR_4 + (*VAR_1);
    VAR_5 = 3 * VAR_5 + (*VAR_1);
    VAR_1++;
  }
  *VAR_2 = VAR_4 % VAR_0->size;
  *VAR_3 = 1 + (VAR_5 % (VAR_0->size - 1));
}
