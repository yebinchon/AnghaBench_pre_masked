
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 unsigned long long VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_2 = VAR_0 & 0x7fffffff;
 VAR_3 = VAR_1 & 0x7fffffff;
 if (VAR_3 < 0x00800000 || VAR_2 == 0)
  return ((VAR_0 ^ VAR_1) & 0x80000000);

 VAR_6 = (VAR_3 & 0x7f800000) >> 23;
 VAR_2 &= 0x007fffff;
 VAR_3 = (VAR_3 & 0x007fffff) | 0x00800000;
 VAR_4 = (unsigned long long)VAR_2 * VAR_3;
 VAR_5 = VAR_4;
 VAR_7 = -1;
 while (VAR_5) { VAR_5 >>= 1; VAR_7++; }


 VAR_6 += VAR_7 - 126 - 46;
 if (VAR_6 > 0)
  VAR_2 = ((int) (VAR_4 >> (VAR_7 - 23)) & 0x007fffff) | (VAR_6 << 23);
 else if (VAR_6 + 22 >= 0)
  VAR_2 = (int) (VAR_4 >> (VAR_7 - 22 - VAR_6)) & 0x007fffff;
 else
  VAR_2 = 0;

 VAR_2 |= (VAR_0 ^ VAR_1) & 0x80000000;
 return VAR_2;
}
