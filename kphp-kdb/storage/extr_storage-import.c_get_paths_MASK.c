
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3 (const char *VAR_1, char *VAR_2[VAR_0]) {
  char *VAR_3 = FUNC_1 (VAR_1), *VAR_4;
  int VAR_5 = 0;
  for (VAR_4 = FUNC_2 (VAR_3, ":"); VAR_4 != ((void*)0); VAR_4 = FUNC_2 (((void*)0), ":")) {
    if (VAR_5 >= VAR_0) {
      FUNC_0 (VAR_3);
      return -1;
    }
    VAR_2[VAR_5++] = VAR_4;
  }
  return VAR_5;
}
