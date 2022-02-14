
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int idx; } ;
struct radeon_device {int dummy; } ;






bool FUNC_0(struct radeon_device *VAR_0,
          struct radeon_ring *VAR_1)
{
 switch (VAR_1->idx) {
 case 128:
 case 130:
 case 129:
  return 1;
 default:
  return 0;
 }
}
