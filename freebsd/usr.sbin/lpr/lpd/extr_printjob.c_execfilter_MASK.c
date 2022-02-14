
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int printer; } ;
typedef scalar_t__ pid_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct printer*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,int,int) ;
 int VAR_9 ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (int ,char*,int ,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_14 (int*) ;

__attribute__((used)) static int
FUNC_15(struct printer *VAR_11, char *VAR_12, char *VAR_13[], int VAR_14, int VAR_15)
{
 pid_t VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 FILE *VAR_21;
 char VAR_22[VAR_0], *VAR_23;

 VAR_16 = FUNC_3(VAR_11, VAR_1);
 if (VAR_16 != 0) {





  if (VAR_16 < 0)
   VAR_19 = 100;
  else {
   while ((VAR_17 = FUNC_14(&VAR_20)) > 0 &&
       VAR_17 != VAR_16)
    ;
   if (VAR_17 < 0) {
    VAR_19 = 100;
    FUNC_13(VAR_3,
        "%s: after execv(%s), wait() returned: %m",
        VAR_11->printer, VAR_12);
   } else
    VAR_19 = FUNC_0(VAR_20);
  }





  VAR_21 = FUNC_9(VAR_10, "r");
  if (VAR_21) {
   while (FUNC_8(VAR_22, sizeof(VAR_22), VAR_21))
    FUNC_10(VAR_22, VAR_9);
   FUNC_7(VAR_21);
  }

  return (VAR_19);
 }
 VAR_23 = FUNC_12(VAR_13[0], '/');
 if (VAR_23 != ((void*)0))
  VAR_13[0] = VAR_23 + 1;
 FUNC_4(VAR_14, VAR_7);
 FUNC_4(VAR_15, VAR_8);
 VAR_18 = FUNC_11(VAR_10, VAR_5|VAR_4, 0664);
 if (VAR_18 >= 0)
  FUNC_4(VAR_18, VAR_6);
 FUNC_2();
 FUNC_1(3);
 FUNC_5(VAR_12, VAR_13);
 FUNC_13(VAR_2, "%s: cannot execv(%s): %m", VAR_11->printer, VAR_12);
 FUNC_6(2);

}
