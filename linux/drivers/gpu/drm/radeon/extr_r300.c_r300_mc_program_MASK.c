
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gtt_start; int gtt_end; int vram_start; int vram_end; int agp_base; } ;
struct radeon_device {int flags; TYPE_1__ mc; int dev; } ;
struct r100_mc_save {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,struct r100_mc_save*) ;
 int FUNC_10 (struct radeon_device*,struct r100_mc_save*) ;
 scalar_t__ FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct radeon_device *VAR_5)
{
 struct r100_mc_save VAR_6;
 int VAR_7;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_5->dev, "Failed to create r100_mc debugfs file.\n");
 }


 FUNC_10(VAR_5, &VAR_6);
 if (VAR_5->flags & VAR_0) {
  FUNC_5(VAR_2,
   FUNC_3(VAR_5->mc.gtt_start >> 16) |
   FUNC_4(VAR_5->mc.gtt_end >> 16));
  FUNC_5(VAR_4, FUNC_7(VAR_5->mc.agp_base));
  FUNC_5(VAR_3,
   FUNC_12(VAR_5->mc.agp_base) & 0xff);
 } else {
  FUNC_5(VAR_2, 0x0FFFFFFF);
  FUNC_5(VAR_4, 0);
  FUNC_5(VAR_3, 0);
 }

 if (FUNC_11(VAR_5))
  FUNC_0("Failed to wait MC idle before programming MC.\n");

 FUNC_5(VAR_1,
  FUNC_1(VAR_5->mc.vram_start >> 16) |
  FUNC_2(VAR_5->mc.vram_end >> 16));
 FUNC_9(VAR_5, &VAR_6);
}
