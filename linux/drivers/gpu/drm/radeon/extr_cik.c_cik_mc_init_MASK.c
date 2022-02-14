
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vram_is_ddr; int vram_width; unsigned long long mc_vram_size; unsigned long long real_vram_size; int aper_size; int visible_vram_size; int aper_base; } ;
struct radeon_device {TYPE_1__ mc; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_6)
{
 u32 VAR_7;
 int VAR_8, VAR_9;


 VAR_6->mc.vram_is_ddr = 1;
 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7 & VAR_0) {
  VAR_8 = 64;
 } else {
  VAR_8 = 32;
 }
 VAR_7 = FUNC_0(VAR_3);
 switch ((VAR_7 & VAR_4) >> VAR_5) {
 case 0:
 default:
  VAR_9 = 1;
  break;
 case 1:
  VAR_9 = 2;
  break;
 case 2:
  VAR_9 = 4;
  break;
 case 3:
  VAR_9 = 8;
  break;
 case 4:
  VAR_9 = 3;
  break;
 case 5:
  VAR_9 = 6;
  break;
 case 6:
  VAR_9 = 10;
  break;
 case 7:
  VAR_9 = 12;
  break;
 case 8:
  VAR_9 = 16;
  break;
 }
 VAR_6->mc.vram_width = VAR_9 * VAR_8;

 VAR_6->mc.aper_base = FUNC_2(VAR_6->pdev, 0);
 VAR_6->mc.aper_size = FUNC_1(VAR_6->pdev, 0);

 VAR_6->mc.mc_vram_size = FUNC_0(VAR_1) * 1024ULL * 1024ULL;
 VAR_6->mc.real_vram_size = FUNC_0(VAR_1) * 1024ULL * 1024ULL;
 VAR_6->mc.visible_vram_size = VAR_6->mc.aper_size;
 FUNC_4(VAR_6, &VAR_6->mc);
 FUNC_3(VAR_6);

 return 0;
}
