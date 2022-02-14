
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int vram_is_ddr; int vram_width; scalar_t__ gtt_base_align; int igp_sideport_enabled; int aper_size; int visible_vram_size; int real_vram_size; int mc_vram_size; int aper_base; } ;
struct radeon_device {TYPE_1__ mc; int pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_2)
{
 u64 VAR_3;

 VAR_2->mc.aper_base = FUNC_4(VAR_2->pdev, 0);
 VAR_2->mc.aper_size = FUNC_3(VAR_2->pdev, 0);
 VAR_2->mc.vram_is_ddr = 1;
 VAR_2->mc.vram_width = 128;
 VAR_2->mc.real_vram_size = FUNC_1(VAR_0);
 VAR_2->mc.mc_vram_size = VAR_2->mc.real_vram_size;
 VAR_2->mc.visible_vram_size = VAR_2->mc.aper_size;
 VAR_2->mc.igp_sideport_enabled = FUNC_5(VAR_2);
 VAR_3 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_3) << 16;
 FUNC_8(VAR_2, &VAR_2->mc, VAR_3);
 VAR_2->mc.gtt_base_align = 0;
 FUNC_6(VAR_2, &VAR_2->mc);
 FUNC_7(VAR_2);
}
