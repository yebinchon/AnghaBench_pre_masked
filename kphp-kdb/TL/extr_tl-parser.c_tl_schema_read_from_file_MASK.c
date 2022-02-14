
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tl_compiler*) ;
 char* FUNC_2 (struct tl_compiler*,char const* const) ;
 int FUNC_3 (struct tl_compiler*,char*) ;

int FUNC_4 (struct tl_compiler *VAR_0, const char *const VAR_1) {
  FUNC_1 (VAR_0);
  char *VAR_2 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_2 == ((void*)0)) {
    return -1;
  }
  int VAR_3 = FUNC_3 (VAR_0, VAR_2);
  FUNC_0 (VAR_2);

  return VAR_3;
}
