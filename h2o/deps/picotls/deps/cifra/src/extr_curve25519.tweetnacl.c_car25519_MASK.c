
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef long long* gf ;



__attribute__((used)) static void FUNC_0(gf VAR_0)
{
  int64_t VAR_1;
  size_t VAR_2;

  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  {
    VAR_0[VAR_2] += (1LL << 16);
    VAR_1 = VAR_0[VAR_2] >> 16;
    VAR_0[(VAR_2 + 1) * (VAR_2 < 15)] += VAR_1 - 1 + 37 * (VAR_1 - 1) * (VAR_2 == 15);
    VAR_0[VAR_2] -= VAR_1 << 16;
  }
}
