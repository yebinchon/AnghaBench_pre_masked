
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int vram_width; int vram_is_ddr; } ;
struct radeon_device {TYPE_1__ mc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_2)
{
 uint32_t VAR_3;

 VAR_2->mc.vram_width = 128;
 VAR_2->mc.vram_is_ddr = 1;
 VAR_3 = FUNC_0(VAR_1) & VAR_0;
 switch (VAR_3) {
 case 0:
  VAR_2->mc.vram_width = 64;
  break;
 case 1:
  VAR_2->mc.vram_width = 128;
  break;
 default:
  VAR_2->mc.vram_width = 128;
  break;
 }
}
