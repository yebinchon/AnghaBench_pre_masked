
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned long
FUNC_2(unsigned long VAR_0, unsigned long VAR_1, bool VAR_2)
{
 unsigned long VAR_3 = 0xea000000;
 long VAR_4;

 if (VAR_2)
  VAR_3 |= 1 << 24;

 VAR_4 = (long)VAR_1 - (long)(VAR_0 + 8);
 if (FUNC_1(VAR_4 < -33554432 || VAR_4 > 33554428)) {
  FUNC_0(1);
  return 0;
 }

 VAR_4 = (VAR_4 >> 2) & 0x00ffffff;

 return VAR_3 | VAR_4;
}
