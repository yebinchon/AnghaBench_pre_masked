
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int
FUNC_0 (long VAR_0)
{
  if ((VAR_0 & 0x14) == 0)
    return 1;
  else if ((VAR_0 & 0x14) == 0x4)
    return (VAR_0 & 0x2) == 0;
  else if ((VAR_0 & 0x14) == 0x10)
    return (VAR_0 & 0x8) == 0;
  else
    return VAR_0 == 0x14;
}
