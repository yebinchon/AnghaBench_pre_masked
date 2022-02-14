
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u8 *VAR_1, int VAR_2)
{
 while (--VAR_2 >= 0) {
  *VAR_1 ^= *VAR_0;
  *VAR_0++ ^= *VAR_1++;
 }
}
