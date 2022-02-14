
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(const char *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 const unsigned char *VAR_3;

 VAR_1 = 0;
 VAR_3 = (const unsigned char *)VAR_0;
 while (*VAR_3 != '\0') {
  VAR_1 = (VAR_1 << 4) + *VAR_3++;
  if ((VAR_2 = VAR_1 & 0xf0000000) != 0)
   VAR_1 ^= VAR_2 >> 24;
  VAR_1 &= ~VAR_2;
 }
 return (VAR_1);
}
