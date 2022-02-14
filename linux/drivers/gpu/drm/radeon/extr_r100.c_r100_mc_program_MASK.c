
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gtt_start; int gtt_end; int vram_start; int vram_end; int agp_base; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_1__ mc; int dev; } ;
struct r100_mc_save {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*,struct r100_mc_save*) ;
 int FUNC_8 (struct radeon_device*,struct r100_mc_save*) ;
 scalar_t__ FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct radeon_device *VAR_6)
{
 struct r100_mc_save VAR_7;


 FUNC_8(VAR_6, &VAR_7);
 if (VAR_6->flags & VAR_1) {
  FUNC_4(VAR_3,
   FUNC_2(VAR_6->mc.gtt_start >> 16) |
   FUNC_3(VAR_6->mc.gtt_end >> 16));
  FUNC_4(VAR_5, FUNC_6(VAR_6->mc.agp_base));
  if (VAR_6->family > VAR_0)
   FUNC_4(VAR_4,
    FUNC_10(VAR_6->mc.agp_base) & 0xff);
 } else {
  FUNC_4(VAR_3, 0x0FFFFFFF);
  FUNC_4(VAR_5, 0);
  if (VAR_6->family > VAR_0)
   FUNC_4(VAR_4, 0);
 }

 if (FUNC_9(VAR_6))
  FUNC_5(VAR_6->dev, "Wait for MC idle timeout.\n");

 FUNC_4(VAR_2,
  FUNC_0(VAR_6->mc.vram_start >> 16) |
  FUNC_1(VAR_6->mc.vram_end >> 16));
 FUNC_7(VAR_6, &VAR_7);
}
