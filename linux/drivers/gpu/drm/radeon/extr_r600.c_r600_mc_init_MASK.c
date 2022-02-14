
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int vram_is_ddr; int vram_width; unsigned long long aper_size; unsigned long long visible_vram_size; int igp_sideport_enabled; scalar_t__ aper_base; void* real_vram_size; void* mc_vram_size; } ;
struct radeon_device {int flags; scalar_t__ family; int fastfb_working; TYPE_1__ mc; int pdev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int ) ;
 unsigned long long FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long long FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_7 (struct radeon_device*) ;
 int VAR_12 ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_13)
{
 u32 VAR_14;
 int VAR_15, VAR_16;
 uint32_t VAR_17, VAR_18;
 unsigned long long VAR_19;


 VAR_13->mc.vram_is_ddr = 1;
 VAR_14 = FUNC_2(VAR_9);
 if (VAR_14 & VAR_1) {
  VAR_15 = 16;
 } else if (VAR_14 & VAR_0) {
  VAR_15 = 64;
 } else {
  VAR_15 = 32;
 }
 VAR_14 = FUNC_2(VAR_4);
 switch ((VAR_14 & VAR_6) >> VAR_7) {
 case 0:
 default:
  VAR_16 = 1;
  break;
 case 1:
  VAR_16 = 2;
  break;
 case 2:
  VAR_16 = 4;
  break;
 case 3:
  VAR_16 = 8;
  break;
 }
 VAR_13->mc.vram_width = VAR_16 * VAR_15;

 VAR_13->mc.aper_base = FUNC_5(VAR_13->pdev, 0);
 VAR_13->mc.aper_size = FUNC_4(VAR_13->pdev, 0);

 VAR_13->mc.mc_vram_size = FUNC_2(VAR_5);
 VAR_13->mc.real_vram_size = FUNC_2(VAR_5);
 VAR_13->mc.visible_vram_size = VAR_13->mc.aper_size;
 FUNC_6(VAR_13, &VAR_13->mc);

 if (VAR_13->flags & VAR_8) {
  FUNC_9(VAR_13);
  VAR_13->mc.igp_sideport_enabled = FUNC_7(VAR_13);

  if (VAR_13->family == VAR_2 || VAR_13->family == VAR_3) {

   VAR_13->fastfb_working = 0;
   VAR_17 = FUNC_1(FUNC_3(VAR_11));
   VAR_18 = FUNC_3(VAR_10);
   VAR_19 = ((unsigned long long)VAR_17) << 32 | VAR_18;



   {



    if (VAR_13->mc.igp_sideport_enabled == 0 && VAR_12 == 1) {
     FUNC_0("Direct mapping: aper base at 0x%llx, replaced by direct mapping base 0x%llx.\n",
      (unsigned long long)VAR_13->mc.aper_base, VAR_19);
     VAR_13->mc.aper_base = (resource_size_t)VAR_19;
     VAR_13->fastfb_working = 1;
    }
   }
  }
 }

 FUNC_8(VAR_13);
 return 0;
}
