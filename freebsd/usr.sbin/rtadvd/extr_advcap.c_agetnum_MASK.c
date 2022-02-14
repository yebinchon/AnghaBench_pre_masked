
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int ) ;
 char* VAR_0 ;
 char* FUNC_3 (char*) ;

int64_t
FUNC_4(char *VAR_1)
{
 int64_t VAR_2;
 int VAR_3;
 char *VAR_4 = VAR_0;

 for (;;) {
  VAR_4 = FUNC_3(VAR_4);
  if (*VAR_4 == 0)
   return (-1);
  if (FUNC_2(VAR_4, VAR_1, FUNC_1(VAR_1)) != 0)
   continue;
  VAR_4 += FUNC_1(VAR_1);
  if (*VAR_4 == '@')
   return (-1);
  if (*VAR_4 != '#')
   continue;
  VAR_4++;
  VAR_3 = 10;
  if (*VAR_4 == '0')
   VAR_3 = 8;
  VAR_2 = 0;
  while (FUNC_0(*VAR_4))
   VAR_2 *= VAR_3, VAR_2 += *VAR_4++ - '0';
  return (VAR_2);
 }
}
