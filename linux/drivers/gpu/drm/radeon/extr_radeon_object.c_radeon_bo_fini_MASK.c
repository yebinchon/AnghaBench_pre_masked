
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aper_size; int aper_base; int vram_mtrr; } ;
struct radeon_device {TYPE_1__ mc; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;

void FUNC_3(struct radeon_device *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mc.vram_mtrr);
 FUNC_0(VAR_0->mc.aper_base, VAR_0->mc.aper_size);
}
