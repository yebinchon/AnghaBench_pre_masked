
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int ) ;

int
FUNC_8(char *VAR_4)
{
 struct stat VAR_5;
 char *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_4;

 while (!VAR_7) {
  VAR_6 += FUNC_5(VAR_6, "/");
  VAR_6 += FUNC_3(VAR_6, "/");

  VAR_7 = (*VAR_6 == '\0');
  *VAR_6 = '\0';

  if (FUNC_2(VAR_4, &VAR_5)) {
   if (VAR_3 != VAR_1 || (FUNC_1(VAR_4, 0777) &&
       VAR_3 != VAR_0)) {
    FUNC_6("%s", VAR_4);
    return (-1);
   }
  } else if (!FUNC_0(VAR_5.st_mode)) {
   FUNC_7("%s: %s", VAR_4, FUNC_4(VAR_2));
   return (-1);
  }

  *VAR_6 = '/';
 }

 return (0);
}
