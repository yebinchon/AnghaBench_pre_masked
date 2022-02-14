
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 unsigned int FUNC_3 (char const*) ;

unsigned long long FUNC_4(const char *VAR_0, char **VAR_1,
       unsigned int VAR_2)
{
 unsigned long long VAR_3 = 0;

 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_0);

 if (VAR_2 == 16 && VAR_0[0] == '0' && FUNC_0(VAR_0[1]) == 'x')
  VAR_0 += 2;

 while (FUNC_2(*VAR_0)) {
  unsigned int VAR_4;

  VAR_4 = FUNC_1(*VAR_0) ? *VAR_0 - '0' : FUNC_0(*VAR_0) - 'a' + 10;
  if (VAR_4 >= VAR_2)
   break;
  VAR_3 = VAR_3 * VAR_2 + VAR_4;
  VAR_0++;
 }
 if (VAR_1)
  *VAR_1 = (char *)VAR_0;

 return VAR_3;
}
