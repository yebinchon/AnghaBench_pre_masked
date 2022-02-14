
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int flag_reading_builtin_schema; int * expr; } ;


 int FUNC_0 (int) ;
 char const* VAR_0 ;
 int FUNC_1 (struct tl_compiler*) ;
 int FUNC_2 (struct tl_compiler*,int *) ;
 int FUNC_3 (struct tl_compiler*,char const*) ;

int FUNC_4 (struct tl_compiler *VAR_1, const char *VAR_2) {
  FUNC_1 (VAR_1);
  VAR_1->flag_reading_builtin_schema = 1;
  int VAR_3 = FUNC_3 (VAR_1, VAR_0);
  FUNC_0 (!VAR_3);
  VAR_1->flag_reading_builtin_schema = 0;

  VAR_3 = FUNC_3 (VAR_1, VAR_2);
  if (VAR_3 < 0) {
    return VAR_3;
  }

  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
    VAR_3 = FUNC_2 (VAR_1, &VAR_1->expr[VAR_4]);
    if (VAR_3 < 0) {
      return VAR_3;
    }
  }

  return 0;
}
