
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct radeon_mc {int vram_start; int mc_vram_size; int real_vram_size; int aper_size; scalar_t__ vram_end; scalar_t__ gtt_start; scalar_t__ gtt_end; } ;
struct TYPE_2__ {int mc_mask; } ;
struct radeon_device {int flags; int dev; TYPE_1__ mc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;

void FUNC_2(struct radeon_device *VAR_2, struct radeon_mc *VAR_3, u64 VAR_4)
{
 uint64_t VAR_5 = (uint64_t)VAR_1 << 20;

 VAR_3->vram_start = VAR_4;
 if (VAR_3->mc_vram_size > (VAR_2->mc.mc_mask - VAR_4 + 1)) {
  FUNC_1(VAR_2->dev, "limiting VRAM to PCI aperture size\n");
  VAR_3->real_vram_size = VAR_3->aper_size;
  VAR_3->mc_vram_size = VAR_3->aper_size;
 }
 VAR_3->vram_end = VAR_3->vram_start + VAR_3->mc_vram_size - 1;
 if (VAR_2->flags & VAR_0 && VAR_3->vram_end > VAR_3->gtt_start && VAR_3->vram_start <= VAR_3->gtt_end) {
  FUNC_1(VAR_2->dev, "limiting VRAM to PCI aperture size\n");
  VAR_3->real_vram_size = VAR_3->aper_size;
  VAR_3->mc_vram_size = VAR_3->aper_size;
 }
 VAR_3->vram_end = VAR_3->vram_start + VAR_3->mc_vram_size - 1;
 if (VAR_5 && VAR_5 < VAR_3->real_vram_size)
  VAR_3->real_vram_size = VAR_5;
 FUNC_0(VAR_2->dev, "VRAM: %lluM 0x%016llX - 0x%016llX (%lluM used)\n",
   VAR_3->mc_vram_size >> 20, VAR_3->vram_start,
   VAR_3->vram_end, VAR_3->real_vram_size >> 20);
}
