
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int * expr; } ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct tl_compiler*,char*,char const* const) ;
 int FUNC_4 (int *,struct tl_compiler*,int *) ;

int FUNC_5 (struct tl_compiler *VAR_2, const char *const VAR_3) {
  FILE *VAR_4 = FUNC_1 (VAR_3, "w");
  if (VAR_4 == ((void*)0)) {
    return FUNC_3 (VAR_2, "fopen (\"%s\", \"w\") fail. %m", VAR_3);
  }
  FUNC_4 (VAR_4, VAR_2, &VAR_2->expr[VAR_1]);
  FUNC_2 (VAR_4, "---functions---\n");
  FUNC_4 (VAR_4, VAR_2, &VAR_2->expr[VAR_0]);
  FUNC_0 (VAR_4);
  return 0;
}
