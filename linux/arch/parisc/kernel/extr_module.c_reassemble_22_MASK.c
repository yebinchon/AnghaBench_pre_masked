
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 return (((VAR_0 & 0x200000) >> 21) |
  ((VAR_0 & 0x1f0000) << 5) |
  ((VAR_0 & 0x00f800) << 5) |
  ((VAR_0 & 0x000400) >> 8) |
  ((VAR_0 & 0x0003ff) << 3));
}
