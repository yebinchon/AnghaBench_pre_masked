
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rv515_mc_save {int dummy; } ;
struct TYPE_4__ {int vram_start; int gtt_start; int gtt_end; int vram_end; int agp_base; } ;
struct TYPE_3__ {int gpu_addr; } ;
struct radeon_device {int flags; int dev; TYPE_2__ mc; TYPE_1__ vram_scratch; } ;


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
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_5 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_14)
{
 struct rv515_mc_save VAR_15;
 u32 VAR_16;
 int VAR_17, VAR_18;


 for (VAR_17 = 0, VAR_18 = 0; VAR_17 < 32; VAR_17++, VAR_18 += 0x18) {
  FUNC_1((0x2c14 + VAR_18), 0x00000000);
  FUNC_1((0x2c18 + VAR_18), 0x00000000);
  FUNC_1((0x2c1c + VAR_18), 0x00000000);
  FUNC_1((0x2c20 + VAR_18), 0x00000000);
  FUNC_1((0x2c24 + VAR_18), 0x00000000);
 }



 VAR_16 = FUNC_0(VAR_0);

 FUNC_5(VAR_14, &VAR_15);
 if (FUNC_3(VAR_14)) {
  FUNC_2(VAR_14->dev, "Wait for MC idle timedout !\n");
 }

 FUNC_1(VAR_12, VAR_13);

 if (VAR_14->flags & VAR_11) {
  if (VAR_14->mc.vram_start < VAR_14->mc.gtt_start) {

   FUNC_1(VAR_10,
    VAR_14->mc.vram_start >> 12);
   FUNC_1(VAR_9,
    VAR_14->mc.gtt_end >> 12);
  } else {

   FUNC_1(VAR_10,
    VAR_14->mc.gtt_start >> 12);
   FUNC_1(VAR_9,
    VAR_14->mc.vram_end >> 12);
  }
 } else {
  FUNC_1(VAR_10,
   VAR_14->mc.vram_start >> 12);
  FUNC_1(VAR_9,
   VAR_14->mc.vram_end >> 12);
 }
 FUNC_1(VAR_8, VAR_14->vram_scratch.gpu_addr >> 12);
 VAR_16 = ((VAR_14->mc.vram_end >> 24) & 0xFFFF) << 16;
 VAR_16 |= ((VAR_14->mc.vram_start >> 24) & 0xFFFF);
 FUNC_1(VAR_7, VAR_16);
 FUNC_1(VAR_1, (VAR_14->mc.vram_start >> 8));
 FUNC_1(VAR_2, (2 << 7));
 FUNC_1(VAR_3, 0x3FFFFFFF);
 if (VAR_14->flags & VAR_11) {
  FUNC_1(VAR_6, VAR_14->mc.gtt_end >> 16);
  FUNC_1(VAR_5, VAR_14->mc.gtt_start >> 16);
  FUNC_1(VAR_4, VAR_14->mc.agp_base >> 22);
 } else {
  FUNC_1(VAR_4, 0);
  FUNC_1(VAR_6, 0x0FFFFFFF);
  FUNC_1(VAR_5, 0x0FFFFFFF);
 }
 if (FUNC_3(VAR_14)) {
  FUNC_2(VAR_14->dev, "Wait for MC idle timedout !\n");
 }
 FUNC_4(VAR_14, &VAR_15);


 FUNC_6(VAR_14);
}
