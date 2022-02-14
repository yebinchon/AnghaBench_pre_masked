
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


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_11)
{
 int VAR_12, VAR_13;


 for (VAR_12 = 0, VAR_13 = 0; VAR_12 < 32; VAR_12++, VAR_13 += 0x6) {
  FUNC_1((0xb05 + VAR_13), 0x00000000);
  FUNC_1((0xb06 + VAR_13), 0x00000000);
  FUNC_1((0xb07 + VAR_13), 0x00000000);
  FUNC_1((0xb08 + VAR_13), 0x00000000);
  FUNC_1((0xb09 + VAR_13), 0x00000000);
 }
 FUNC_1(VAR_2, 0);

 if (FUNC_3((void *)VAR_11)) {
  FUNC_2(VAR_11->dev, "Wait for MC idle timedout !\n");
 }

 if (VAR_11->mode_info.num_crtc) {
  u32 VAR_14;


  VAR_14 = FUNC_0(VAR_9);
  VAR_14 |= VAR_0;
  FUNC_1(VAR_9, VAR_14);


  VAR_14 = FUNC_0(VAR_10);
  VAR_14 &= ~VAR_1;
  FUNC_1(VAR_10, VAR_14);
 }

 FUNC_1(VAR_8,
        VAR_11->gmc.vram_start >> 12);
 FUNC_1(VAR_7,
        VAR_11->gmc.vram_end >> 12);
 FUNC_1(VAR_6,
        VAR_11->vram_scratch.gpu_addr >> 12);
 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_5, 0x0FFFFFFF);
 FUNC_1(VAR_4, 0x0FFFFFFF);

 if (FUNC_3((void *)VAR_11)) {
  FUNC_2(VAR_11->dev, "Wait for MC idle timedout !\n");
 }
}
