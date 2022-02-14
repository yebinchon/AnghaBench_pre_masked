
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const) ;

__attribute__((used)) static inline size_t FUNC_3(uint8_t *VAR_0, size_t VAR_1, const char *VAR_2)
{
  size_t VAR_3 = 0;

  FUNC_0(FUNC_1(VAR_2) % 2 == 0);
  FUNC_0(FUNC_1(VAR_2) / 2 <= VAR_1);

  while (*VAR_2)
  {
    FUNC_0(VAR_1);
    *VAR_0 = FUNC_2(VAR_2[0]) << 4 | FUNC_2(VAR_2[1]);
    VAR_0++;
    VAR_3++;
    VAR_2 += 2;
    VAR_1--;
  }

  return VAR_3;
}
