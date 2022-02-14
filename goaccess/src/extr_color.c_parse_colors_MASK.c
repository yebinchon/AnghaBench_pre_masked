
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_0[], size_t VAR_1)
{
  char *VAR_2;
  size_t VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
    VAR_2 = FUNC_3 (VAR_0[VAR_3]);

    if (FUNC_2 (VAR_2, ':') == ((void*)0)) {
      FUNC_0 (VAR_2);
      continue;
    }
    FUNC_1 (VAR_2);
  }
}
