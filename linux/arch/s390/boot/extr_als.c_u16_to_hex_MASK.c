
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(char *VAR_0, u16 VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 1; VAR_2 <= 4; VAR_2++) {
  VAR_3 = (VAR_1 >> (16 - 4 * VAR_2)) & 0xf;
  if (VAR_3 >= 10)
   VAR_3 += 7;
  *VAR_0++ = '0' + VAR_3;
 }
 *VAR_0 = '\0';
}
