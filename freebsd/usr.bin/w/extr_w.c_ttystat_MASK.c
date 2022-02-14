
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttybuf ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* VAR_1 ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

__attribute__((used)) static struct stat *
FUNC_3(char *VAR_2)
{
 static struct stat VAR_3;
 char VAR_4[VAR_0];

 (void)FUNC_1(VAR_4, sizeof(VAR_4), "%s%s", VAR_1, VAR_2);
 if (FUNC_2(VAR_4, &VAR_3) == 0 && FUNC_0(VAR_3.st_mode)) {
  return (&VAR_3);
 } else
  return (((void*)0));
}
