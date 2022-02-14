
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int FUNC_0 (char const*) ;

void FUNC_1 (const char *VAR_1, char *VAR_2)
{
 const char *VAR_3;

 VAR_3 = VAR_1 + FUNC_0(VAR_1) - 1;




 while (VAR_3 != VAR_1 && *(VAR_3-1) != VAR_0)
  VAR_3--;

 while (*VAR_3 && *VAR_3 != '.')
 {
  *VAR_2++ = *VAR_3++;
 }
 *VAR_2 = 0;
}
