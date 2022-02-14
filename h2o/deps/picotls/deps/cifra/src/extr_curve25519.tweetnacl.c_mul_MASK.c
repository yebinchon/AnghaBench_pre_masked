
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int* gf ;


 int FUNC_0 (int*) ;

__attribute__((used)) static void FUNC_1(gf VAR_0, const gf VAR_1, const gf VAR_2)
{
  int64_t VAR_3[31];
  size_t VAR_4, VAR_5;

  for (VAR_4 = 0; VAR_4 < 31; VAR_4++)
    VAR_3[VAR_4] = 0;

  for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
    for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
      VAR_3[VAR_4 + VAR_5] += VAR_1[VAR_4] * VAR_2[VAR_5];

  for (VAR_4 = 0; VAR_4 < 15; VAR_4++)
    VAR_3[VAR_4] += 38 * VAR_3[VAR_4 + 16];

  for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
    VAR_0[VAR_4] = VAR_3[VAR_4];

  FUNC_0(VAR_0);
  FUNC_0(VAR_0);
}
