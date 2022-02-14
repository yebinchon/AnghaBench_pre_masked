
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,size_t const) ;

size_t FUNC_2 (const u8 *VAR_0, const size_t VAR_1, u8 *VAR_2, const size_t VAR_3)
{
  size_t VAR_4, VAR_5;

  for (VAR_4 = 0, VAR_5 = 5; VAR_5 < VAR_1 - 1; VAR_4 += 1, VAR_5 += 2)
  {
    const u8 VAR_6 = FUNC_0 (&VAR_0[VAR_5]);

    VAR_2[VAR_4] = VAR_6;
  }

  FUNC_1 (VAR_2 + VAR_4, 0, VAR_3 - VAR_4);

  return (VAR_4);
}
