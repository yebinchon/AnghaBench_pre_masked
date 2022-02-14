
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, u64 *VAR_1, int VAR_2)
{
 u64 VAR_3;

 if (VAR_2 >= 128) {
  *VAR_1 = *VAR_0 != 0 || *VAR_1 != 0;
  *VAR_0 = 0;
 } else if (VAR_2 >= 64) {
  if (VAR_2 == 64) {
   *VAR_1 = *VAR_0 | (*VAR_1 != 0);
  } else {
   VAR_3 = *VAR_1;
   *VAR_1 = *VAR_0 >> (VAR_2 - 64);
   *VAR_1 |= (*VAR_0 << (128 - VAR_2)) != 0 || VAR_3 != 0;
  }
  *VAR_0 = 0;
 } else {
  VAR_3 = *VAR_1;
  *VAR_1 = VAR_3 >> VAR_2 | *VAR_0 << (64 - VAR_2);
  *VAR_1 |= (VAR_3 << (64 - VAR_2)) != 0;
  *VAR_0 = *VAR_0 >> VAR_2;
 }
}
