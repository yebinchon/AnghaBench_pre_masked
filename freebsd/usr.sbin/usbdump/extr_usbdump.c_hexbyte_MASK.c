
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void
FUNC_0(char *VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2;
 uint8_t VAR_3;

 VAR_2 = VAR_1 & 0xF;
 VAR_3 = VAR_1 >> 4;

 if (VAR_3 < 10)
  VAR_0[0] = '0' + VAR_3;
 else
  VAR_0[0] = 'A' + VAR_3 - 10;

 if (VAR_2 < 10)
  VAR_0[1] = '0' + VAR_2;
 else
  VAR_0[1] = 'A' + VAR_2 - 10;
}
