
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t *VAR_0, size_t VAR_1)
{
 union {
  uint8_t c[4];
  uint32_t w;
 } VAR_2;
 uint8_t *VAR_3;
 int VAR_4;

 VAR_3 = (uint8_t *) VAR_0;
 VAR_2.w = 0;

 for (VAR_4 = 0, VAR_2.w = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_2.c[VAR_4] = *VAR_3++;

 return (VAR_2.w);
}
