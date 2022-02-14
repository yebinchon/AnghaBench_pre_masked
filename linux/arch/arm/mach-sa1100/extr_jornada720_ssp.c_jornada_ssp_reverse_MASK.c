
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



inline u8 FUNC_0(u8 VAR_0)
{
 return
  ((0x80 & VAR_0) >> 7) |
  ((0x40 & VAR_0) >> 5) |
  ((0x20 & VAR_0) >> 3) |
  ((0x10 & VAR_0) >> 1) |
  ((0x08 & VAR_0) << 1) |
  ((0x04 & VAR_0) << 3) |
  ((0x02 & VAR_0) << 5) |
  ((0x01 & VAR_0) << 7);
}
