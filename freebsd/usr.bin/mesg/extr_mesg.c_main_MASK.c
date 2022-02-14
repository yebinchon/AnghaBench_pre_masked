
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_5, char *VAR_6[])
{
 struct stat VAR_7;
 char *VAR_8;
 int VAR_9;

 while ((VAR_9 = FUNC_3(VAR_5, VAR_6, "")) != -1)
  switch (VAR_9) {
  case '?':
  default:
   FUNC_7();
  }
 VAR_5 -= VAR_4;
 VAR_6 += VAR_4;

 if ((VAR_8 = FUNC_6(VAR_1)) == ((void*)0) &&
     (VAR_8 = FUNC_6(VAR_2)) == ((void*)0) &&
     (VAR_8 = FUNC_6(VAR_0)) == ((void*)0))
  FUNC_1(2, "ttyname");
 if (FUNC_5(VAR_8, &VAR_7) < 0)
  FUNC_1(2, "%s", VAR_8);

 if (*VAR_6 == ((void*)0)) {
  if (VAR_7.st_mode & VAR_3) {
   (void)FUNC_4("is y");
   FUNC_2(0);
  }
  (void)FUNC_4("is n");
  FUNC_2(1);
 }

 switch (*VAR_6[0]) {
 case 'y':
  if (FUNC_0(VAR_8, VAR_7.st_mode | VAR_3) < 0)
   FUNC_1(2, "%s", VAR_8);
  FUNC_2(0);
 case 'n':
  if (FUNC_0(VAR_8, VAR_7.st_mode & ~VAR_3) < 0)
   FUNC_1(2, "%s", VAR_8);
  FUNC_2(1);
 }

 FUNC_7();
 return(0);
}
