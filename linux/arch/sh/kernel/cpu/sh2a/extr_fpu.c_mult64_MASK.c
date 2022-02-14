
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long long VAR_0, unsigned long long VAR_1,
  unsigned long long *VAR_2, unsigned long long *VAR_3)
{
 unsigned long long VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long long VAR_8, VAR_9;

 VAR_4 = (VAR_0 >> 32) * (unsigned long) (VAR_1 >> 32);
 VAR_5 = (VAR_0 & 0xffffffffLL) * (unsigned long) (VAR_1 >> 32);
 VAR_6 = (VAR_0 >> 32) * (unsigned long) (VAR_1 & 0xffffffffLL);
 VAR_7 = (VAR_0 & 0xffffffffLL) * (unsigned long) (VAR_1 & 0xffffffffLL);
 VAR_9 = VAR_7;
 VAR_8 = 0LL;
 VAR_7 += (VAR_5 << 32);
 if (VAR_9 > VAR_7)
  VAR_8++;
 VAR_9 = VAR_7;
 VAR_7 += (VAR_6 << 32);
 if (VAR_9 > VAR_7)
  VAR_8++;
 VAR_9 = VAR_7;
 VAR_8 += (VAR_5 >> 32) + (VAR_6 >> 32);
 VAR_8 += VAR_4;
 *VAR_3 = VAR_9;
 *VAR_2 = VAR_8;
}
