
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int vram_start; int vram_end; } ;
struct TYPE_5__ {int gpu_addr; } ;
struct TYPE_4__ {scalar_t__ num_crtc; } ;
struct amdgpu_device {int dev; TYPE_3__ gmc; TYPE_2__ vram_scratch; TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_24)
{
 u32 VAR_25;
 int VAR_26, VAR_27;


 for (VAR_26 = 0, VAR_27 = 0; VAR_26 < 32; VAR_26++, VAR_27 += 0x6) {
  FUNC_2((0xb05 + VAR_27), 0x00000000);
  FUNC_2((0xb06 + VAR_27), 0x00000000);
  FUNC_2((0xb07 + VAR_27), 0x00000000);
  FUNC_2((0xb08 + VAR_27), 0x00000000);
  FUNC_2((0xb09 + VAR_27), 0x00000000);
 }
 FUNC_2(VAR_14, 0);

 if (FUNC_5((void *)VAR_24)) {
  FUNC_4(VAR_24->dev, "Wait for MC idle timedout !\n");
 }
 if (VAR_24->mode_info.num_crtc) {

  VAR_25 = FUNC_1(VAR_22);
  VAR_25 = FUNC_0(VAR_25, VAR_4, VAR_5, 1);
  FUNC_2(VAR_22, VAR_25);


  VAR_25 = FUNC_1(VAR_23);
  VAR_25 = FUNC_0(VAR_25, VAR_6, VAR_7, 0);
  FUNC_2(VAR_23, VAR_25);
 }

 FUNC_2(VAR_21,
        VAR_24->gmc.vram_start >> 12);
 FUNC_2(VAR_20,
        VAR_24->gmc.vram_end >> 12);
 FUNC_2(VAR_19,
        VAR_24->vram_scratch.gpu_addr >> 12);

 if (FUNC_3(VAR_24)) {
  VAR_25 = ((VAR_24->gmc.vram_end >> 24) & 0xFFFF) << 16;
  VAR_25 |= ((VAR_24->gmc.vram_start >> 24) & 0xFFFF);
  FUNC_2(VAR_18, VAR_25);

  FUNC_2(VAR_11, (VAR_24->gmc.vram_start >> 8));
  FUNC_2(VAR_12, (2 << 7) | (1 << 30));
  FUNC_2(VAR_13, 0x3FFFFFFF);
 }

 FUNC_2(VAR_15, 0);
 FUNC_2(VAR_17, 0x0FFFFFFF);
 FUNC_2(VAR_16, 0x0FFFFFFF);
 if (FUNC_5((void *)VAR_24)) {
  FUNC_4(VAR_24->dev, "Wait for MC idle timedout !\n");
 }

 FUNC_2(VAR_8, VAR_0 | VAR_1);

 VAR_25 = FUNC_1(VAR_10);
 VAR_25 = FUNC_0(VAR_25, VAR_3, VAR_2, 0);
 FUNC_2(VAR_10, VAR_25);

 VAR_25 = FUNC_1(VAR_9);
 FUNC_2(VAR_9, VAR_25);
}
