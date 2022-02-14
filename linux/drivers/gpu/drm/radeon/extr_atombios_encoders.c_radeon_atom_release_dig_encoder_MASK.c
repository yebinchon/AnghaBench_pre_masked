
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active_encoders; } ;
struct radeon_device {TYPE_1__ mode_info; } ;



void FUNC_0(struct radeon_device *VAR_0, int VAR_1)
{
 if (VAR_1 < 0)
  return;
 VAR_0->mode_info.active_encoders &= ~(1 << VAR_1);
}
