
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_2(unsigned long VAR_0, unsigned long VAR_1, bool VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;
 long VAR_12;

 VAR_12 = (long)VAR_1 - (long)(VAR_0 + 4);
 if (VAR_12 < -16777216 || VAR_12 > 16777214) {
  FUNC_0(1);
  return 0;
 }

 VAR_3 = (VAR_12 >> 24) & 0x1;
 VAR_6 = (VAR_12 >> 23) & 0x1;
 VAR_7 = (VAR_12 >> 22) & 0x1;
 VAR_8 = (VAR_12 >> 12) & 0x3ff;
 VAR_9 = (VAR_12 >> 1) & 0x7ff;

 VAR_4 = (!VAR_6) ^ VAR_3;
 VAR_5 = (!VAR_7) ^ VAR_3;

 VAR_10 = 0xf000 | (VAR_3 << 10) | VAR_8;
 VAR_11 = 0x9000 | (VAR_4 << 13) | (VAR_5 << 11) | VAR_9;
 if (VAR_2)
  VAR_11 |= 1 << 14;

 return FUNC_1(VAR_10, VAR_11);
}
