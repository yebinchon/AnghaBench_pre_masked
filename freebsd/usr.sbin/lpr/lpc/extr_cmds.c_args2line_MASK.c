
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char* FUNC_0 (char*) ;

__attribute__((used)) static char *
FUNC_1(int VAR_0, char **VAR_1)
{
 char *VAR_2, *VAR_3;
 const char *VAR_4;
 char VAR_5[1024];

 if (VAR_0 <= 0)
  return FUNC_0("\n");

 VAR_2 = VAR_5;
 VAR_3 = VAR_5 + sizeof(VAR_5) - 1;
 while (--VAR_0 >= 0) {
  VAR_4 = *VAR_1++;
  while ((VAR_2 < VAR_3) && (*VAR_2++ = *VAR_4++))
   ;
  VAR_2[-1] = ' ';
 }
 VAR_2[-1] = '\n';
 *VAR_2 = '\0';
 return FUNC_0(VAR_5);
}
