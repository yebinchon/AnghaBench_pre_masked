
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;



u32 FUNC_0(struct radeon_device *VAR_0, u32 VAR_1)
{
 if (VAR_1 <= 0x10)
  return 0x4B;
 if (VAR_1 <= 0x19)
  return 0x5B;
 if (VAR_1 <= 0x21)
  return 0x2B;
 if (VAR_1 <= 0x27)
  return 0x6C;
 if (VAR_1 <= 0x31)
  return 0x9D;
 return 0xC6;
}
