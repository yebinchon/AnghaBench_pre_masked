
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int magic; } ;
struct tl_compiler {int * hm_magic; } ;


 struct tl_expression* FUNC_0 (int *,struct tl_expression*,int ) ;

struct tl_expression *FUNC_1 (struct tl_compiler *VAR_0, int VAR_1) {
  int VAR_2;
  struct tl_expression VAR_3;
  VAR_3.magic = VAR_1;
  for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
    struct tl_expression *VAR_4 = FUNC_0 (&VAR_0->hm_magic[VAR_2], &VAR_3, 0);
    if (VAR_4) {
      return VAR_4;
    }
  }
  return ((void*)0);
}
