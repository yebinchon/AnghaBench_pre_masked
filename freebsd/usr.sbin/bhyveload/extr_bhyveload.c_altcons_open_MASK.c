
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_6)
{
 struct stat VAR_7;
 int VAR_8;
 int VAR_9;






 if (!FUNC_3(VAR_6, "stdio"))
  return (0);

 VAR_8 = FUNC_2(VAR_6, &VAR_7);
 if (VAR_8 == 0) {
  if (!FUNC_0(VAR_7.st_mode))
   VAR_8 = VAR_0;
  else {
   VAR_9 = FUNC_1(VAR_6, VAR_2 | VAR_1);
   if (VAR_9 < 0)
    VAR_8 = VAR_5;
   else
    VAR_3 = VAR_4 = VAR_9;
  }
 }

 return (VAR_8);
}
