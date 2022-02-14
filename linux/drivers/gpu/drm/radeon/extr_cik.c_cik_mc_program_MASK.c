
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vram_start; int vram_end; } ;
struct TYPE_3__ {int gpu_addr; } ;
struct radeon_device {int dev; TYPE_2__ mc; TYPE_1__ vram_scratch; } ;
struct evergreen_mc_save {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct radeon_device*,struct evergreen_mc_save*) ;
 int FUNC_3 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_13)
{
 struct evergreen_mc_save VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17;


 for (VAR_16 = 0, VAR_17 = 0; VAR_16 < 32; VAR_16++, VAR_17 += 0x18) {
  FUNC_0((0x2c14 + VAR_17), 0x00000000);
  FUNC_0((0x2c18 + VAR_17), 0x00000000);
  FUNC_0((0x2c1c + VAR_17), 0x00000000);
  FUNC_0((0x2c20 + VAR_17), 0x00000000);
  FUNC_0((0x2c24 + VAR_17), 0x00000000);
 }
 FUNC_0(VAR_3, 0);

 FUNC_3(VAR_13, &VAR_14);
 if (FUNC_4(VAR_13)) {
  FUNC_1(VAR_13->dev, "Wait for MC idle timedout !\n");
 }

 FUNC_0(VAR_11, VAR_12);

 FUNC_0(VAR_10,
        VAR_13->mc.vram_start >> 12);
 FUNC_0(VAR_9,
        VAR_13->mc.vram_end >> 12);
 FUNC_0(VAR_8,
        VAR_13->vram_scratch.gpu_addr >> 12);
 VAR_15 = ((VAR_13->mc.vram_end >> 24) & 0xFFFF) << 16;
 VAR_15 |= ((VAR_13->mc.vram_start >> 24) & 0xFFFF);
 FUNC_0(VAR_7, VAR_15);

 FUNC_0(VAR_0, (VAR_13->mc.vram_start >> 8));
 FUNC_0(VAR_1, (2 << 7) | (1 << 30));
 FUNC_0(VAR_2, 0x3FFFFFFF);
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_6, 0x0FFFFFFF);
 FUNC_0(VAR_5, 0x0FFFFFFF);
 if (FUNC_4(VAR_13)) {
  FUNC_1(VAR_13->dev, "Wait for MC idle timedout !\n");
 }
 FUNC_2(VAR_13, &VAR_14);


 FUNC_5(VAR_13);
}
