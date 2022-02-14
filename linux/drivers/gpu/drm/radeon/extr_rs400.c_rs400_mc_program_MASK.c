
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vram_start; int vram_end; } ;
struct radeon_device {TYPE_1__ mc; int dev; } ;
struct r100_mc_save {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*,struct r100_mc_save*) ;
 int FUNC_5 (struct radeon_device*,struct r100_mc_save*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_1)
{
 struct r100_mc_save VAR_2;


 FUNC_5(VAR_1, &VAR_2);


 if (FUNC_6(VAR_1))
  FUNC_3(VAR_1->dev, "rs400: Wait MC idle timeout before updating MC.\n");
 FUNC_2(VAR_0,
  FUNC_0(VAR_1->mc.vram_start >> 16) |
  FUNC_1(VAR_1->mc.vram_end >> 16));

 FUNC_4(VAR_1, &VAR_2);
}
