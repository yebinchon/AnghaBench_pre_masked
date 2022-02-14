
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vram_is_ddr; int vram_width; int mc_vram_size; int real_vram_size; int aper_size; int visible_vram_size; int aper_base; } ;
struct radeon_device {TYPE_1__ mc; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_7)
{
 u32 VAR_8;
 int VAR_9, VAR_10;


 VAR_7->mc.vram_is_ddr = 1;
 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 & VAR_1) {
  VAR_9 = 16;
 } else if (VAR_8 & VAR_0) {
  VAR_9 = 64;
 } else {
  VAR_9 = 32;
 }
 VAR_8 = FUNC_1(VAR_4);
 switch ((VAR_8 & VAR_5) >> VAR_6) {
 case 0:
 default:
  VAR_10 = 1;
  break;
 case 1:
  VAR_10 = 2;
  break;
 case 2:
  VAR_10 = 4;
  break;
 case 3:
  VAR_10 = 8;
  break;
 case 4:
  VAR_10 = 3;
  break;
 case 5:
  VAR_10 = 6;
  break;
 case 6:
  VAR_10 = 10;
  break;
 case 7:
  VAR_10 = 12;
  break;
 case 8:
  VAR_10 = 16;
  break;
 }
 VAR_7->mc.vram_width = VAR_10 * VAR_9;

 VAR_7->mc.aper_base = FUNC_3(VAR_7->pdev, 0);
 VAR_7->mc.aper_size = FUNC_2(VAR_7->pdev, 0);

 VAR_8 = FUNC_1(VAR_2);

 if (VAR_8 & 0xffff0000) {
  FUNC_0("Probable bad vram size: 0x%08x\n", VAR_8);
  if (VAR_8 & 0xffff)
   VAR_8 &= 0xffff;
 }
 VAR_7->mc.mc_vram_size = VAR_8 * 1024ULL * 1024ULL;
 VAR_7->mc.real_vram_size = VAR_7->mc.mc_vram_size;
 VAR_7->mc.visible_vram_size = VAR_7->mc.aper_size;
 FUNC_5(VAR_7, &VAR_7->mc);
 FUNC_4(VAR_7);

 return 0;
}
