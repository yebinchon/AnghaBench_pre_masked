
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char**,int ,int ) ;
 int * FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (char**,char,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char const*,char) ;

int
FUNC_12(const char *VAR_4, char *VAR_5, int VAR_6)
{
  FILE *VAR_7;
  int VAR_8, VAR_9;
  char *VAR_10[6], VAR_11[VAR_0];
  const char *VAR_12;

  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 != ((void*)0)) {
again:
    VAR_9 = 0;
    while (FUNC_4(VAR_11, sizeof VAR_11, VAR_7)) {
      VAR_9++;
      if (VAR_11[0] == '#')
        continue;
      VAR_11[FUNC_9(VAR_11) - 1] = '\0';
      FUNC_6(VAR_10, '\0', sizeof VAR_10);
      if ((VAR_8 = FUNC_1(VAR_11, VAR_10, FUNC_3(VAR_10), VAR_2)) < 0)
        FUNC_5(VAR_1, "%s: %d: Invalid line\n", VAR_3, VAR_9);
      if (VAR_8 < 5)
        continue;
      if (FUNC_8(VAR_10[0], VAR_4) == 0) {
        FUNC_0(VAR_7);
        if (*VAR_10[4] == '\0')
          return 0;
        FUNC_10(VAR_5, VAR_10[4], VAR_6 - 1);
        VAR_5[VAR_6 - 1] = '\0';
        return 1;
      }
    }

    if ((VAR_12 = FUNC_11(VAR_4, '\\')) != ((void*)0) && VAR_12[1]) {

      VAR_4 = VAR_12 + 1;
      FUNC_7(VAR_7);
      goto again;
    }

    FUNC_0(VAR_7);
  }
  *VAR_5 = '\0';
  return 0;
}
