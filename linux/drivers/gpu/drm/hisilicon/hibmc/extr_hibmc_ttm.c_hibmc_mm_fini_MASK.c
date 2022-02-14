
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hibmc_drm_private {TYPE_1__* dev; } ;
struct TYPE_2__ {int vram_mm; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct hibmc_drm_private *VAR_0)
{
 if (!VAR_0->dev->vram_mm)
  return;

 FUNC_0(VAR_0->dev);
}
