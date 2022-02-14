
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64
FUNC_0 (u64 VAR_0)
{
 u64 *VAR_1 = (u64 *) (VAR_0 & -16);

 return ( (VAR_1[1] & 0x0800000000000000UL) << 4) |
  ((VAR_1[1] & 0x00000000007fffffUL) << 40) |
  ((VAR_1[0] & 0xffffc00000000000UL) >> 24) |
  ((VAR_1[1] & 0x0000100000000000UL) >> 23) |
  ((VAR_1[1] & 0x0003e00000000000UL) >> 29) |
  ((VAR_1[1] & 0x07fc000000000000UL) >> 43) |
  ((VAR_1[1] & 0x000007f000000000UL) >> 36);
}
