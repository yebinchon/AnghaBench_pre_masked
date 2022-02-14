
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reply ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3 (void)
{
 char VAR_2[256], *VAR_3;

 VAR_2[sizeof(VAR_2) - 1] = 0;
 for (;;) {
  FUNC_0(VAR_1);
  if (!FUNC_1 (VAR_2, sizeof(VAR_2) - 1, VAR_0))
   return (0);
  for (VAR_3=VAR_2; *VAR_3==' ' || *VAR_3=='\t'; ++VAR_3)
   continue;
  if (*VAR_3=='y' || *VAR_3=='Y')
   return (1);
  if (*VAR_3=='n' || *VAR_3=='N' || *VAR_3=='\n' || *VAR_3=='\r')
   return (0);
  FUNC_2("Answer `yes' or `no': ");
 }
}
