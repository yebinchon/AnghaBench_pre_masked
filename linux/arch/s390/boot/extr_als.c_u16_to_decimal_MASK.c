
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(char *VAR_0, u16 VAR_1)
{
 int VAR_2 = 1;

 while (VAR_2 * 10 <= VAR_1)
  VAR_2 *= 10;
 while (VAR_2) {
  *VAR_0++ = '0' + VAR_1 / VAR_2;
  VAR_1 %= VAR_2;
  VAR_2 /= 10;
 }
 *VAR_0 = '\0';
}
