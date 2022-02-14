
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint32_t ;
typedef int u64 ;
struct TYPE_3__ {int vram_is_ddr; int vram_width; int real_vram_size; int mc_vram_size; unsigned long long aper_size; unsigned long long visible_vram_size; int igp_sideport_enabled; scalar_t__ gtt_size; scalar_t__ gtt_base_align; scalar_t__ aper_base; } ;
struct radeon_device {int fastfb_working; TYPE_1__ mc; int pdev; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (char*,unsigned long long,unsigned long long) ;
 unsigned long long FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int VAR_4 ;
 int FUNC_8 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_13(struct radeon_device *VAR_5)
{
 u64 VAR_6;
 uint32_t VAR_7, VAR_8;
 unsigned long long VAR_9;

 FUNC_11(VAR_5);
 VAR_5->mc.vram_is_ddr = 1;
 VAR_5->mc.vram_width = 128;
 VAR_5->mc.real_vram_size = FUNC_3(VAR_0);
 VAR_5->mc.mc_vram_size = VAR_5->mc.real_vram_size;
 VAR_5->mc.aper_base = FUNC_6(VAR_5->pdev, 0);
 VAR_5->mc.aper_size = FUNC_5(VAR_5->pdev, 0);
 VAR_5->mc.visible_vram_size = VAR_5->mc.aper_size;
 VAR_6 = FUNC_4(VAR_3);
 VAR_6 = FUNC_2(VAR_6) << 16;
 VAR_5->mc.igp_sideport_enabled = FUNC_7(VAR_5);




 if (VAR_5->mc.igp_sideport_enabled &&
     (VAR_5->mc.real_vram_size == (384 * 1024 * 1024))) {
  VAR_6 += 128 * 1024 * 1024;
  VAR_5->mc.real_vram_size -= 128 * 1024 * 1024;
  VAR_5->mc.mc_vram_size = VAR_5->mc.real_vram_size;
 }


 VAR_5->fastfb_working = 0;
 VAR_7 = FUNC_1(FUNC_4(VAR_2));
 VAR_8 = FUNC_4(VAR_1);
 VAR_9 = ((unsigned long long)VAR_7) << 32 | VAR_8;



 {



  if (VAR_5->mc.igp_sideport_enabled == 0 && VAR_4 == 1) {
   FUNC_0("Direct mapping: aper base at 0x%llx, replaced by direct mapping base 0x%llx.\n",
     (unsigned long long)VAR_5->mc.aper_base, VAR_9);
   VAR_5->mc.aper_base = (resource_size_t)VAR_9;
   VAR_5->fastfb_working = 1;
  }
 }

 FUNC_12(VAR_5);
 FUNC_10(VAR_5, &VAR_5->mc, VAR_6);
 VAR_5->mc.gtt_base_align = VAR_5->mc.gtt_size - 1;
 FUNC_8(VAR_5, &VAR_5->mc);
 FUNC_9(VAR_5);
}
