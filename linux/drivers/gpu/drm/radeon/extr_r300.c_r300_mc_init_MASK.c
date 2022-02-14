
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int vram_is_ddr; int vram_width; int aper_base; scalar_t__ gtt_base_align; } ;
struct radeon_device {int flags; TYPE_1__ mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,TYPE_1__*,int) ;

void FUNC_5(struct radeon_device *VAR_5)
{
 u64 VAR_6;
 u32 VAR_7;


 VAR_5->mc.vram_is_ddr = 1;
 VAR_7 = FUNC_0(VAR_3);
 VAR_7 &= VAR_0;
 switch (VAR_7) {
 case 0: VAR_5->mc.vram_width = 64; break;
 case 1: VAR_5->mc.vram_width = 128; break;
 case 2: VAR_5->mc.vram_width = 256; break;
 default: VAR_5->mc.vram_width = 128; break;
 }
 FUNC_1(VAR_5);
 VAR_6 = VAR_5->mc.aper_base;
 if (VAR_5->flags & VAR_2)
  VAR_6 = (FUNC_0(VAR_4) & 0xffff) << 16;
 FUNC_4(VAR_5, &VAR_5->mc, VAR_6);
 VAR_5->mc.gtt_base_align = 0;
 if (!(VAR_5->flags & VAR_1))
  FUNC_2(VAR_5, &VAR_5->mc);
 FUNC_3(VAR_5);
}
