
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int,char**,char**,char**,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ FUNC_7 (int,char**) ;
 int VAR_0 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;

int
FUNC_10(int VAR_1, char **VAR_2)
{
    char *VAR_3 = ((void*)0);
    int VAR_4 = -1;
    int VAR_5;
    int VAR_6;

    if (FUNC_7(VAR_1, VAR_2) < 0)
 goto out;
    if ((VAR_4 = FUNC_1(&VAR_3)) < 0)
 goto out;
    if ((VAR_5 = FUNC_5(VAR_4)) < 0)
 goto out;
    if (VAR_0 == 0) {
 FUNC_6("%d\n", VAR_5);
    } else {
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
     if ((VAR_0 & (1 << VAR_6))) {
  char *VAR_7;
  char *VAR_8;
  char *VAR_9;
  int VAR_10;

  if (FUNC_4(VAR_4, VAR_6, &VAR_7, &VAR_8, &VAR_9,
      &VAR_10) < 0)
      goto out;
  if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
      goto out;
  FUNC_6("%d~%s~%s~%s~%s\n",
         VAR_6, VAR_7, VAR_8, VAR_9, FUNC_8(VAR_10));
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
     }
 }
    }
  out:
    if (VAR_3) {
 FUNC_9(VAR_3);
 FUNC_3(VAR_3);
    }
    if (VAR_4 >= 0)
 FUNC_0(VAR_4);
    FUNC_2(0);
}
