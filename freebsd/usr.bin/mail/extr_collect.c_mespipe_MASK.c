
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tempname ;
typedef int sig_t ;
typedef int off_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int ,int ,int ,char*,char*,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int VAR_6 ;
 char* VAR_7 ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;

void
FUNC_13(FILE *VAR_8, char VAR_9[])
{
 FILE *VAR_10;
 int VAR_11;
 sig_t VAR_12 = FUNC_9(VAR_2, VAR_3);
 char *VAR_13, VAR_14[VAR_0];

 (void)FUNC_10(VAR_14, sizeof(VAR_14),
     "%s/mail.ReXXXXXXXXXX", VAR_7);
 if ((VAR_11 = FUNC_6(VAR_14)) == -1 ||
     (VAR_10 = FUNC_1(VAR_11, "w+")) == ((void*)0)) {
  FUNC_12("%s", VAR_14);
  goto out;
 }
 (void)FUNC_7(VAR_14);




 if ((VAR_13 = FUNC_11("SHELL")) == ((void*)0))
  VAR_13 = VAR_4;
 if (FUNC_8(VAR_13,
     0, FUNC_2(VAR_8), FUNC_2(VAR_10), "-c", VAR_9, ((void*)0)) < 0) {
  (void)FUNC_0(VAR_10);
  goto out;
 }
 if (FUNC_5(VAR_10) == 0) {
  FUNC_3(VAR_6, "No bytes from \"%s\" !?\n", VAR_9);
  (void)FUNC_0(VAR_10);
  goto out;
 }



 (void)FUNC_4(VAR_10, (off_t)0, VAR_1);
 VAR_5 = VAR_10;
 (void)FUNC_0(VAR_8);
out:
 (void)FUNC_9(VAR_2, VAR_12);
}
