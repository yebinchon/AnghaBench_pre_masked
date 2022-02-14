
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mc_vram_size; int vram_width; size_t vram_type; scalar_t__ aper_size; int aper_base; int vram_mtrr; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int FUNC_0 (char*,int,unsigned long long) ;
 int FUNC_1 (struct amdgpu_device*) ;
 unsigned long long* VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct amdgpu_device *VAR_1)
{

 FUNC_2(VAR_1->gmc.aper_base,
       VAR_1->gmc.aper_size);


 VAR_1->gmc.vram_mtrr = FUNC_3(VAR_1->gmc.aper_base,
           VAR_1->gmc.aper_size);
 FUNC_0("Detected VRAM RAM=%lluM, BAR=%lluM\n",
   VAR_1->gmc.mc_vram_size >> 20,
   (unsigned long long)VAR_1->gmc.aper_size >> 20);
 FUNC_0("RAM width %dbits %s\n",
   VAR_1->gmc.vram_width, VAR_0[VAR_1->gmc.vram_type]);
 return FUNC_1(VAR_1);
}
