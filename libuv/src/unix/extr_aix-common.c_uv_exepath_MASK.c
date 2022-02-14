
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trypath ;
struct procsinfo {int pi_pid; } ;
typedef int pi ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct procsinfo*,int,char*,int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,size_t) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int * FUNC_8 (char*,char) ;
 size_t FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;

int FUNC_13(char* VAR_5, size_t* VAR_6) {
  int VAR_7;
  char VAR_8[VAR_0];
  char VAR_9[VAR_0];
  size_t VAR_10;
  struct procsinfo VAR_11;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || *VAR_6 == 0)
    return VAR_1;

  VAR_11.pi_pid = FUNC_4();
  VAR_7 = FUNC_2(&VAR_11, sizeof(VAR_11), VAR_8, sizeof(VAR_8));
  if (VAR_7 < 0)
    return VAR_1;
  if (FUNC_8(VAR_8, '/') != ((void*)0)) {
    if (FUNC_6(VAR_8, VAR_9) != VAR_9)
      return FUNC_0(VAR_4);

    VAR_10 = FUNC_9(VAR_9);

    *VAR_6 -= 1;
    if (*VAR_6 > VAR_10)
      *VAR_6 = VAR_10;

    FUNC_5(VAR_5, VAR_9, *VAR_6);
    VAR_5[*VAR_6] = '\0';

    return 0;
  } else {

    char VAR_12[VAR_0];
    char *VAR_13 = ((void*)0);
    char *VAR_14 = ((void*)0);
    char *VAR_15 = FUNC_3("PATH");

    if (VAR_15 == ((void*)0))
      return VAR_1;

    VAR_13 = FUNC_12(VAR_15);
    if (VAR_13 == ((void*)0))
      return VAR_2;

    VAR_14 = FUNC_10(VAR_13, ":");
    while (VAR_14 != ((void*)0)) {
      FUNC_7(VAR_12, sizeof(VAR_12) - 1, "%s/%s", VAR_14, VAR_8);
      if (FUNC_6(VAR_12, VAR_9) == VAR_9) {

        if (FUNC_1(VAR_9, VAR_3) == 0) {
          VAR_10 = FUNC_9(VAR_9);

          *VAR_6 -= 1;
          if (*VAR_6 > VAR_10)
            *VAR_6 = VAR_10;

          FUNC_5(VAR_5, VAR_9, *VAR_6);
          VAR_5[*VAR_6] = '\0';

          FUNC_11(VAR_13);
          return 0;
        }
      }
      VAR_14 = FUNC_10(((void*)0), ":");
    }
    FUNC_11(VAR_13);


    return VAR_1;
  }
}
