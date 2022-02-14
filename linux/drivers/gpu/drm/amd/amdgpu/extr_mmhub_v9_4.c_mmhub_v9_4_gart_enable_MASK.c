
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vram_start; int vram_end; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;

int FUNC_10(struct amdgpu_device *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_1(VAR_5)) {





   FUNC_0(VAR_0, 0,
         VAR_3,
         VAR_6 * VAR_1,
         VAR_5->gmc.vram_start >> 24);
   FUNC_0(VAR_0, 0,
         VAR_4,
         VAR_6 * VAR_1,
         VAR_5->gmc.vram_end >> 24);
  }


  FUNC_5(VAR_5, VAR_6);
  FUNC_6(VAR_5, VAR_6);
  FUNC_7(VAR_5, VAR_6);
  FUNC_4(VAR_5, VAR_6);

  FUNC_3(VAR_5, VAR_6);
  FUNC_2(VAR_5, VAR_6);
  FUNC_9(VAR_5, VAR_6);
  FUNC_8(VAR_5, VAR_6);
 }

 return 0;
}
