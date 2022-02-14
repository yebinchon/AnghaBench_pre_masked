
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static void
FUNC_0(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;
 uint8_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2++)
  VAR_3 += VAR_0[VAR_2];
 VAR_0[VAR_1 - 1] = 0x100 - VAR_3;
}
