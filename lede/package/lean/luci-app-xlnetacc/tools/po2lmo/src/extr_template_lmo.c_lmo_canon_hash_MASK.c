
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int res ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,int) ;

uint32_t FUNC_2(const char *VAR_0, int VAR_1)
{
 char VAR_2[4096];
 char *VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_0 || VAR_1 >= sizeof(VAR_2))
  return 0;

 for (VAR_4 = ' ', VAR_3 = VAR_2, VAR_5 = 0; VAR_5 < VAR_1; VAR_4 = *VAR_0, VAR_5++, VAR_0++)
 {
  if (FUNC_0(*VAR_0))
  {
   if (!FUNC_0(VAR_4))
    *VAR_3++ = ' ';
  }
  else
  {
   *VAR_3++ = *VAR_0;
  }
 }

 if ((VAR_3 > VAR_2) && FUNC_0(*(VAR_3-1)))
  VAR_3--;

 return FUNC_1(VAR_2, VAR_3 - VAR_2);
}
