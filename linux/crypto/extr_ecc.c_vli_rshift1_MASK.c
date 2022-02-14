
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, unsigned int VAR_1)
{
 u64 *VAR_2 = VAR_0;
 u64 VAR_3 = 0;

 VAR_0 += VAR_1;

 while (VAR_0-- > VAR_2) {
  u64 VAR_4 = *VAR_0;
  *VAR_0 = (VAR_4 >> 1) | VAR_3;
  VAR_3 = VAR_4 << 63;
 }
}
