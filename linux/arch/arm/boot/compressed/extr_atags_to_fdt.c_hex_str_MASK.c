
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(char *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
  VAR_2 = VAR_1 >> 28;
  VAR_1 <<= 4;
  VAR_2 &= 0xf;
  if (VAR_2 < 10)
   VAR_2 += '0';
  else
   VAR_2 += 'A'-10;
  *VAR_0++ = VAR_2;
 }
 *VAR_0 = '\0';
}
