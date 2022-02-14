
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int gpu_addr; } ;
struct TYPE_5__ {int vram_start; int vram_end; } ;
struct TYPE_4__ {scalar_t__ num_crtc; } ;
struct amdgpu_device {int dev; TYPE_3__ vram_scratch; TYPE_2__ gmc; TYPE_1__ mode_info; } ;


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
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (void*) ;
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

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_20)
{
 u32 VAR_21;
 int VAR_22, VAR_23;


 for (VAR_22 = 0, VAR_23 = 0; VAR_22 < 32; VAR_22++, VAR_23 += 0x6) {
  FUNC_2((0xb05 + VAR_23), 0x00000000);
  FUNC_2((0xb06 + VAR_23), 0x00000000);
  FUNC_2((0xb07 + VAR_23), 0x00000000);
  FUNC_2((0xb08 + VAR_23), 0x00000000);
  FUNC_2((0xb09 + VAR_23), 0x00000000);
 }
 FUNC_2(VAR_11, 0);

 if (FUNC_4((void *)VAR_20)) {
  FUNC_3(VAR_20->dev, "Wait for MC idle timedout !\n");
 }
 if (VAR_20->mode_info.num_crtc) {

  VAR_21 = FUNC_1(VAR_18);
  VAR_21 = FUNC_0(VAR_21, VAR_4, VAR_5, 1);
  FUNC_2(VAR_18, VAR_21);


  VAR_21 = FUNC_1(VAR_19);
  VAR_21 = FUNC_0(VAR_21, VAR_6, VAR_7, 0);
  FUNC_2(VAR_19, VAR_21);
 }

 FUNC_2(VAR_17,
        VAR_20->gmc.vram_start >> 12);
 FUNC_2(VAR_16,
        VAR_20->gmc.vram_end >> 12);
 FUNC_2(VAR_15,
        VAR_20->vram_scratch.gpu_addr >> 12);
 FUNC_2(VAR_12, 0);
 FUNC_2(VAR_14, 0x0FFFFFFF);
 FUNC_2(VAR_13, 0x0FFFFFFF);
 if (FUNC_4((void *)VAR_20)) {
  FUNC_3(VAR_20->dev, "Wait for MC idle timedout !\n");
 }

 FUNC_2(VAR_8, VAR_0 | VAR_1);

 VAR_21 = FUNC_1(VAR_10);
 VAR_21 = FUNC_0(VAR_21, VAR_3, VAR_2, 0);
 FUNC_2(VAR_10, VAR_21);

 VAR_21 = FUNC_1(VAR_9);
 FUNC_2(VAR_9, VAR_21);
}
