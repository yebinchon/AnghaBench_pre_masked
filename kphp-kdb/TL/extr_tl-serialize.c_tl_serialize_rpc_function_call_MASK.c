
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cdr; } ;
struct TYPE_6__ {TYPE_1__ p; } ;
struct tl_scheme_object {TYPE_2__ u; } ;
struct tl_compiler {TYPE_3__* serialized_first_function_expr; } ;
struct TYPE_7__ {struct TYPE_7__* right_name; } ;


 int FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (struct tl_compiler*) ;
 int FUNC_3 (struct tl_compiler*,char*) ;
 int FUNC_4 (struct tl_scheme_object*) ;
 struct tl_scheme_object* FUNC_5 (struct tl_compiler*,char const* const) ;
 int FUNC_6 (struct tl_compiler*,struct tl_scheme_object*,int*,int) ;

int FUNC_7 (struct tl_compiler *VAR_1, const char *const VAR_2, int *VAR_3, int VAR_4, char **VAR_5) {
  struct tl_scheme_object *VAR_6 = FUNC_5 (VAR_1, VAR_2);
  *VAR_5 = ((void*)0);
  if (VAR_6 == ((void*)0)) {
    return -1;
  }
  if (VAR_6->u.p.cdr != &VAR_0) {
    FUNC_2 (VAR_1);
    FUNC_4 (VAR_6);
    return FUNC_3 (VAR_1, "expected single rpc call");
  }

  int VAR_7 = FUNC_6 (VAR_1, VAR_6, VAR_3, VAR_4);
  if (VAR_7 >= 0 && VAR_5 != ((void*)0)) {
    FUNC_0 (VAR_1->serialized_first_function_expr);
    FUNC_0 (VAR_1->serialized_first_function_expr->right_name);
    *VAR_5 = FUNC_1 (VAR_1->serialized_first_function_expr->right_name);
  }
  return VAR_7;
}
