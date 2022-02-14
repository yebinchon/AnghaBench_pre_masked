
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttybuf ;
struct stat {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2)
{
 struct stat VAR_3;
 char VAR_4[VAR_0];

 (void)FUNC_0(VAR_4, sizeof(VAR_4), "%s%s", VAR_1, VAR_2);
 if (FUNC_1(VAR_4, &VAR_3) == 0) {
  return (0);
 } else
  return (-1);
}
