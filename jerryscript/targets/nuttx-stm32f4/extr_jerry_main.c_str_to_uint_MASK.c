
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2 (const char *VAR_1,
             char **VAR_2)
{
  FUNC_0 (FUNC_1 (VAR_0));

  uint32_t VAR_3 = 0;

  while (*VAR_1 >= '0' && *VAR_1 <= '9')
  {
    VAR_3 *= 10;
    VAR_3 += (uint32_t) (*VAR_1 - '0');
    VAR_1++;
  }

  if (VAR_2 != ((void*)0))
  {
    *VAR_2 = VAR_1;
  }

  return VAR_3;
}
