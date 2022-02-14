
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_hashmap {unsigned int size; } ;
struct tl_expression {scalar_t__ magic; } ;



__attribute__((used)) static void FUNC_0 (struct tl_hashmap *VAR_0, void *VAR_1, int *VAR_2, int *VAR_3) {
  const struct tl_expression *VAR_4 = VAR_1;
  *VAR_2 = ((unsigned) VAR_4->magic) % VAR_0->size;
  *VAR_3 = 1 + (((unsigned) VAR_4->magic) % (VAR_0->size - 1));
}
