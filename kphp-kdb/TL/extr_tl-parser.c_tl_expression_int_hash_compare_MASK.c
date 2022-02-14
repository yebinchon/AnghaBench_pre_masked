
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {scalar_t__ magic; } ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct tl_expression *VAR_2 = VAR_0, *VAR_3 = VAR_1;
  return (VAR_2->magic < VAR_3->magic) ? -1 : ((VAR_2->magic > VAR_3->magic) ? 1 : 0);
}
