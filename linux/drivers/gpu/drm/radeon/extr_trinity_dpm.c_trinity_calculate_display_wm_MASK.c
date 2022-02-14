
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct trinity_ps {int num_levels; TYPE_1__* levels; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int sclk; } ;



__attribute__((used)) static u8 FUNC_0(struct radeon_device *VAR_0,
           struct trinity_ps *VAR_1, u32 VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_1->num_levels <= 1)
  return 0;
 else if (VAR_1->num_levels == 2) {
  if (VAR_2 == 0)
   return 0;
  else
   return 1;
 } else {
  if (VAR_2 == 0)
   return 0;
  else if (VAR_1->levels[VAR_2].sclk < 30000)
   return 0;
  else
   return 1;
 }
}
