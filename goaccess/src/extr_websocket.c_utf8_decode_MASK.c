
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_0 (uint32_t * VAR_2, uint32_t * VAR_3, uint32_t VAR_4)
{
  uint32_t VAR_5 = VAR_1[(uint8_t) VAR_4];

  *VAR_3 = (*VAR_2 != VAR_0) ? (VAR_4 & 0x3fu) | (*VAR_3 << 6) : (0xff >> VAR_5) & (VAR_4);
  *VAR_2 = VAR_1[256 + *VAR_2 * 16 + VAR_5];

  return *VAR_2;
}
