
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_scheme_object {int dummy; } ;
struct tl_compiler {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct tl_compiler*,char const* const) ;
 struct tl_scheme_object* FUNC_2 (struct tl_compiler*,char*) ;

struct tl_scheme_object *FUNC_3 (struct tl_compiler *VAR_0, const char *const VAR_1) {
  char *VAR_2 = FUNC_1 (VAR_0, VAR_1);
  if (VAR_2 == ((void*)0)) {
    return ((void*)0);
  }
  struct tl_scheme_object *VAR_3 = FUNC_2 (VAR_0, VAR_2);
  FUNC_0 (VAR_2);
  return VAR_3;
}
