
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {TYPE_2__* asic; } ;
struct TYPE_3__ {scalar_t__ blit; scalar_t__ dma; } ;
struct TYPE_4__ {TYPE_1__ copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int ) ;

void FUNC_1(struct radeon_device *VAR_2)
{
 if (VAR_2->asic->copy.dma)
  FUNC_0(VAR_2, VAR_1);
 if (VAR_2->asic->copy.blit)
  FUNC_0(VAR_2, VAR_0);
}
