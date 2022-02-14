
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;
 uint32_t VAR_3 = 0;

 if (VAR_1 > 4)
  VAR_1 = 4;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 |= ((uint32_t) VAR_0[VAR_2]) << ((3-VAR_2) * 8);
 return VAR_3;
}
