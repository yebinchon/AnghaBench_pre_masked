
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ mpll; } ;
struct radeon_device {TYPE_2__ clock; } ;



u32 FUNC_0(struct radeon_device *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->clock.mpll.reference_freq;
 u32 VAR_3 = VAR_1 * VAR_2;


 if (VAR_2 == 10000) {
  if (VAR_3 > 500000)
   return 0xC6;
  if (VAR_3 > 400000)
   return 0x9D;
  if (VAR_3 > 330000)
   return 0x6C;
  if (VAR_3 > 250000)
   return 0x2B;
  if (VAR_3 > 160000)
   return 0x5B;
  if (VAR_3 > 120000)
   return 0x0A;
  return 0x4B;
 }


 if (VAR_3 > 250000)
  return 0x8B;
 if (VAR_3 > 200000)
  return 0xCC;
 if (VAR_3 > 150000)
  return 0x9B;
 return 0x6B;
}
