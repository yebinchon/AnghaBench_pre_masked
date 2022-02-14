
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int tempname ;
struct stat {scalar_t__ st_mtime; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,int ,int,int,char*,int *) ;
 int FUNC_13 (char*,int,char*,char*) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 char* VAR_4 ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;

FILE *
FUNC_18(FILE *VAR_5, off_t VAR_6, int VAR_7, int VAR_8)
{
 FILE *VAR_9 = ((void*)0);
 int VAR_10;
 time_t VAR_11;
 char *VAR_12, VAR_13[VAR_1];
 struct stat VAR_14;

 (void)FUNC_13(VAR_13, sizeof(VAR_13),
     "%s/mail.ReXXXXXXXXXX", VAR_4);
 if ((VAR_10 = FUNC_9(VAR_13)) == -1 ||
     (VAR_9 = FUNC_1(VAR_10, "w")) == ((void*)0)) {
  FUNC_16("%s", VAR_13);
  goto out;
 }
 if (VAR_8 && FUNC_3(VAR_10, 0400) == -1) {
  FUNC_16("%s", VAR_13);
  (void)FUNC_11(VAR_13);
  goto out;
 }
 if (VAR_6 >= 0)
  while (--VAR_6 >= 0 && (VAR_10 = FUNC_8(VAR_5)) != VAR_0)
   (void)FUNC_10(VAR_10, VAR_9);
 else
  while ((VAR_10 = FUNC_8(VAR_5)) != VAR_0)
   (void)FUNC_10(VAR_10, VAR_9);
 (void)FUNC_5(VAR_9);
 if (FUNC_7(FUNC_6(VAR_9), &VAR_14) < 0)
  VAR_11 = 0;
 else
  VAR_11 = VAR_14.st_mtime;
 if (FUNC_4(VAR_9)) {
  (void)FUNC_0(VAR_9);
  FUNC_17("%s", VAR_13);
  (void)FUNC_11(VAR_13);
  VAR_9 = ((void*)0);
  goto out;
 }
 if (FUNC_0(VAR_9) < 0) {
  FUNC_16("%s", VAR_13);
  (void)FUNC_11(VAR_13);
  VAR_9 = ((void*)0);
  goto out;
 }
 VAR_9 = ((void*)0);
 if ((VAR_12 = FUNC_15(VAR_7 == 'e' ? "EDITOR" : "VISUAL")) == ((void*)0))
  VAR_12 = VAR_7 == 'e' ? VAR_2 : VAR_3;
 if (FUNC_12(VAR_12, 0, -1, -1, VAR_13, ((void*)0)) < 0) {
  (void)FUNC_11(VAR_13);
  goto out;
 }




 if (VAR_8) {
  (void)FUNC_11(VAR_13);
  goto out;
 }
 if (FUNC_14(VAR_13, &VAR_14) < 0) {
  FUNC_16("%s", VAR_13);
  goto out;
 }
 if (VAR_11 == VAR_14.st_mtime) {
  (void)FUNC_11(VAR_13);
  goto out;
 }



 if ((VAR_9 = FUNC_2(VAR_13, "a+")) == ((void*)0)) {
  FUNC_16("%s", VAR_13);
  (void)FUNC_11(VAR_13);
  goto out;
 }
 (void)FUNC_11(VAR_13);
out:
 return (VAR_9);
}
