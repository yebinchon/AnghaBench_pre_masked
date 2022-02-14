
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {char* right_name; } ;
struct tl_compiler {int hm_composite_typename; } ;


 struct tl_expression* FUNC_0 (int *,struct tl_expression*,int ) ;

struct tl_expression *FUNC_1 (struct tl_compiler *VAR_0, char *VAR_1) {
  struct tl_expression VAR_2 = { .right_name = VAR_1 };
  return FUNC_0 (&VAR_0->hm_composite_typename, &VAR_2, 0);
}
