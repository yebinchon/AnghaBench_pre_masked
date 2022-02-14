
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int dompath ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 char* VAR_2 ;

int
FUNC_7(const char *VAR_3)
{
 struct stat VAR_4;
 char VAR_5[VAR_0 + 2];

 if (VAR_3 == ((void*)0) || FUNC_6(VAR_3, "binding") ||
     !FUNC_4(VAR_3, ".") || !FUNC_4(VAR_3, "..") ||
     FUNC_3(VAR_3, '/') || FUNC_5(VAR_3) > VAR_1)
  return(1);

 FUNC_1(VAR_5, sizeof(VAR_5), "%s/%s", VAR_2, VAR_3);

 if (FUNC_2(VAR_5, &VAR_4) < 0 || !FUNC_0(VAR_4.st_mode))
  return(1);


 return(0);
}
