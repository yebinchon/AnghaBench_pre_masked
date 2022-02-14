
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int vram_is_ddr; int vram_width; scalar_t__ gtt_size; scalar_t__ gtt_base_align; int igp_sideport_enabled; } ;
struct radeon_device {TYPE_1__ mc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_1)
{
 u64 VAR_2;

 FUNC_6(VAR_1);
 VAR_1->mc.igp_sideport_enabled = FUNC_2(VAR_1);

 VAR_1->mc.vram_is_ddr = 1;
 VAR_1->mc.vram_width = 128;
 FUNC_1(VAR_1);
 VAR_2 = (FUNC_0(VAR_0) & 0xffff) << 16;
 FUNC_5(VAR_1, &VAR_1->mc, VAR_2);
 VAR_1->mc.gtt_base_align = VAR_1->mc.gtt_size - 1;
 FUNC_3(VAR_1, &VAR_1->mc);
 FUNC_4(VAR_1);
}
