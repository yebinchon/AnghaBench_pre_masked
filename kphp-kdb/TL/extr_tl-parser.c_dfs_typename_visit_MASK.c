
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {struct tl_expression* rnext; } ;
struct tl_compiler {int dummy; } ;


 int FUNC_0 (struct tl_compiler*,struct tl_expression*) ;
 struct tl_expression* FUNC_1 (struct tl_compiler*,char*) ;

__attribute__((used)) static void FUNC_2 (struct tl_compiler *VAR_0, char *VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }
  struct tl_expression *VAR_2 = FUNC_1 (VAR_0, VAR_1);
  while (VAR_2 != ((void*)0)) {
    FUNC_0 (VAR_0, VAR_2);
    VAR_2 = VAR_2->rnext;
  }
}
