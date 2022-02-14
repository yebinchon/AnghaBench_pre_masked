
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1)
{
 ssize_t VAR_2;
 char VAR_3[VAR_0];

 if ((VAR_2 = FUNC_1(VAR_1, VAR_3, VAR_0 - 1)) == -1) {
  FUNC_2("%s", VAR_1);
  return;
 }
 VAR_3[VAR_2] = '\0';
 (void)FUNC_0(" -> %s", VAR_3);
}
