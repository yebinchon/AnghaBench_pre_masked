
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bundle*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char**,int ,int ) ;
 int VAR_2 ;
 int * FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char const*,char*,char const*) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int FUNC_7 (int ,char*,int ,int) ;
 int FUNC_8 (char**,char,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*,char) ;

int
FUNC_13(struct bundle *VAR_5, const char *VAR_6, const char *VAR_7)
{


  FILE *VAR_8;
  int VAR_9, VAR_10;
  char *VAR_11[5], VAR_12[VAR_0];
  const char *VAR_13;

  VAR_8 = FUNC_3(VAR_4);
again:
  VAR_10 = 0;
  if (VAR_8 != ((void*)0)) {
    while (FUNC_6(VAR_12, sizeof VAR_12, VAR_8)) {
      VAR_10++;
      if (VAR_12[0] == '#')
        continue;
      VAR_12[FUNC_11(VAR_12) - 1] = 0;
      FUNC_8(VAR_11, '\0', sizeof VAR_11);
      if ((VAR_9 = FUNC_2(VAR_12, VAR_11, FUNC_4(VAR_11), VAR_3)) < 0)
        FUNC_7(VAR_1, "%s: %d: Invalid line\n", VAR_4, VAR_10);
      if (VAR_9 < 2)
        continue;
      if (FUNC_10(VAR_11[0], VAR_6) == 0) {
        FUNC_0(VAR_8);
        return FUNC_5(VAR_6, VAR_11[1], VAR_7);
      }
    }
  }

  if ((VAR_13 = FUNC_12(VAR_6, '\\')) != ((void*)0) && VAR_13[1]) {

    VAR_6 = VAR_13 + 1;
    if (VAR_8 != ((void*)0)) {
      FUNC_9(VAR_8);
      goto again;
    }
  }

  if (VAR_8 != ((void*)0))
    FUNC_0(VAR_8);


  if (FUNC_1(VAR_5, VAR_2))
    return FUNC_5(VAR_6, "*", VAR_7);


  return 0;
}
