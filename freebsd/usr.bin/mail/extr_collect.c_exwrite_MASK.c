
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,int *) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(char VAR_3[], FILE *VAR_4, int VAR_5)
{
 FILE *VAR_6;
 int VAR_7, VAR_8;
 long VAR_9;
 struct stat VAR_10;

 if (VAR_5) {
  FUNC_7("\"%s\" ", VAR_3);
  (void)FUNC_4(VAR_2);
 }
 if (FUNC_9(VAR_3, &VAR_10) >= 0 && FUNC_2(VAR_10.st_mode)) {
  if (!VAR_5)
   FUNC_5(VAR_1, "%s: ", VAR_3);
  FUNC_5(VAR_1, "File exists\n");
  return (-1);
 }
 if ((VAR_6 = FUNC_1(VAR_3, "w")) == ((void*)0)) {
  FUNC_10((char *)((void*)0));
  return (-1);
 }
 VAR_8 = 0;
 VAR_9 = 0;
 while ((VAR_7 = FUNC_6(VAR_4)) != VAR_0) {
  VAR_9++;
  if (VAR_7 == '\n')
   VAR_8++;
  (void)FUNC_8(VAR_7, VAR_6);
  if (FUNC_3(VAR_6)) {
   FUNC_11("%s", VAR_3);
   (void)FUNC_0(VAR_6);
   return (-1);
  }
 }
 (void)FUNC_0(VAR_6);
 FUNC_7("%d/%ld\n", VAR_8, VAR_9);
 (void)FUNC_4(VAR_2);
 return (0);
}
