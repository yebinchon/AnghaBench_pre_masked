
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long long FUNC_0(unsigned long long VAR_0, unsigned long long VAR_1)
{
 long long VAR_2;
 int VAR_3;

 if (VAR_0 < 0x0010000000000000LL)
  return VAR_0 - VAR_1;

 VAR_3 = (VAR_0 & 0x7ff0000000000000LL) >> 52;
 if (VAR_3 - 1 > 63)
  return VAR_0;
 VAR_1 >>= VAR_3 - 1;
 if (VAR_1 == 0)
  return VAR_0;

 VAR_2 = (VAR_0 & 0x000fffffffffffffLL) | 0x0010000000000000LL;
 VAR_2 -= VAR_1;
 while (VAR_2 < 0x0010000000000000LL) {
  if (--VAR_3 == 0)
   return VAR_2;
  VAR_2 <<= 1;
 }

 return ((long long)VAR_3 << 52) | (VAR_2 & 0x000fffffffffffffLL);
}
