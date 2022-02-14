
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_0 (uint32_t * VAR_2, const char *VAR_3, int VAR_4)
{
  int VAR_5;
  uint32_t VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
    VAR_6 = VAR_1[(uint8_t) VAR_3[VAR_5]];
    *VAR_2 = VAR_1[256 + (*VAR_2) * 16 + VAR_6];

    if (*VAR_2 == VAR_0)
      break;
  }

  return *VAR_2;
}
