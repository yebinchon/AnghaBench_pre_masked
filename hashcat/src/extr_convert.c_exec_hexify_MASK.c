
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 size_t const VAR_0 ;
 int FUNC_0 (scalar_t__ const,scalar_t__*) ;

void FUNC_1 (const u8 *VAR_1, const size_t VAR_2, u8 *VAR_3)
{
  const size_t VAR_4 = (VAR_2 > VAR_0) ? VAR_0 : VAR_2;

  for (int VAR_5 = (int) VAR_4 - 1, VAR_6 = VAR_5 * 2; VAR_5 >= 0; VAR_5 -= 1, VAR_6 -= 2)
  {
    FUNC_0 (VAR_1[VAR_5], VAR_3 + VAR_6);
  }

  VAR_3[VAR_4 * 2] = 0;
}
