
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mc_vram_size; int vram_width; scalar_t__ vram_is_ddr; scalar_t__ aper_size; int aper_base; int vram_mtrr; } ;
struct radeon_device {TYPE_1__ mc; int fastfb_working; } ;


 int FUNC_0 (char*,int,char) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct radeon_device*) ;

int FUNC_4(struct radeon_device *VAR_0)
{

 FUNC_1(VAR_0->mc.aper_base,
       VAR_0->mc.aper_size);


 if (!VAR_0->fastfb_working) {
  VAR_0->mc.vram_mtrr = FUNC_2(VAR_0->mc.aper_base,
            VAR_0->mc.aper_size);
 }
 FUNC_0("Detected VRAM RAM=%lluM, BAR=%lluM\n",
  VAR_0->mc.mc_vram_size >> 20,
  (unsigned long long)VAR_0->mc.aper_size >> 20);
 FUNC_0("RAM width %dbits %cDR\n",
   VAR_0->mc.vram_width, VAR_0->mc.vram_is_ddr ? 'D' : 'S');
 return FUNC_3(VAR_0);
}
