
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 size_t FUNC_0 (char*) ;

void FUNC_1 (u8 *VAR_0, const u8 *VAR_1, const size_t VAR_2)
{
  const size_t VAR_3 = FUNC_0 ((char *) VAR_0);

  const u8 *VAR_4 = VAR_1;

  u8 *VAR_5 = VAR_0 + VAR_3;

  for (size_t VAR_6 = 0; VAR_6 < VAR_2 && *VAR_4 != 0; VAR_6++)
  {
    *VAR_5++ = *VAR_4++;
  }

  *VAR_5 = 0;
}
