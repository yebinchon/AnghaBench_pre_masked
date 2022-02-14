
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_6, char *VAR_7[])
{
 struct stat VAR_8;
 int VAR_9;
 char *VAR_10;


 while ((VAR_9 = FUNC_2(VAR_6, VAR_7, "")) != -1)
  switch(VAR_9) {
  case '?':
  default:
   FUNC_6();
  }
 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;

 if ((VAR_10 = FUNC_5(VAR_1)) == ((void*)0) &&
     (VAR_10 = FUNC_5(VAR_2)) == ((void*)0) &&
     (VAR_10 = FUNC_5(VAR_0)) == ((void*)0))
  FUNC_1(2, "unknown tty");

 if (FUNC_4(VAR_10, &VAR_8))
  FUNC_1(2, "stat");

 if (*VAR_7 == ((void*)0)) {
  (void)FUNC_3("is %s\n",
      VAR_8.st_mode & VAR_4 ? "y" :
      VAR_8.st_mode & VAR_3 ? "b" : "n");
  return (VAR_8.st_mode & (VAR_4 | VAR_3) ? 0 : 1);

 }

 switch (VAR_7[0][0]) {
 case 'n':
  if (FUNC_0(VAR_10, VAR_8.st_mode & ~(VAR_4 | VAR_3)) < 0)
   FUNC_1(2, "%s", VAR_10);
  break;
 case 'y':
  if (FUNC_0(VAR_10, (VAR_8.st_mode & ~(VAR_4 | VAR_3)) | VAR_4)
      < 0)
   FUNC_1(2, "%s", VAR_10);
  break;
 case 'b':
  if (FUNC_0(VAR_10, (VAR_8.st_mode & ~(VAR_4 | VAR_3)) | VAR_3)
      < 0)
   FUNC_1(2, "%s", VAR_10);
  break;
 default:
  FUNC_6();
 }
 return (VAR_8.st_mode & (VAR_4 | VAR_3) ? 0 : 1);
}
