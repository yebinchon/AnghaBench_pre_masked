
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aper_size; int aper_base; int vram_mtrr; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct amdgpu_device *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->gmc.vram_mtrr);
 FUNC_1(VAR_0->gmc.aper_base, VAR_0->gmc.aper_size);
}
