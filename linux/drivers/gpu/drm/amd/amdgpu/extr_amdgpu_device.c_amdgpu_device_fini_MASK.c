
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * gpu_info_fw; } ;
struct TYPE_3__ {scalar_t__ mode_config_initialized; } ;
struct amdgpu_device {int shutdown; int accel_working; int flags; scalar_t__ asic_type; int dev; int * rmmio; int * rio_mem; int pdev; int * bios; int delayed_init_work; TYPE_2__ firmware; int ddev; TYPE_1__ mode_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (struct amdgpu_device*) ;
 int VAR_4 ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (struct amdgpu_device*) ;
 int FUNC_16 (struct amdgpu_device*) ;
 scalar_t__ FUNC_17 (struct amdgpu_device*) ;
 int FUNC_18 (struct amdgpu_device*) ;
 int FUNC_19 (int *) ;
 int VAR_5 ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,int *,int *,int *) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;

void FUNC_31(struct amdgpu_device *VAR_6)
{
 int VAR_7;

 FUNC_0("amdgpu: finishing device.\n");
 VAR_6->shutdown = 1;

 FUNC_13(VAR_6);
 if (VAR_6->mode_info.mode_config_initialized){
  if (!FUNC_7(VAR_6))
   FUNC_22(VAR_6->ddev);
  else
   FUNC_21(VAR_6->ddev);
 }
 FUNC_11(VAR_6);
 FUNC_14(VAR_6);
 FUNC_10(VAR_6);
 VAR_7 = FUNC_8(VAR_6);
 if (VAR_6->firmware.gpu_info_fw) {
  FUNC_27(VAR_6->firmware.gpu_info_fw);
  VAR_6->firmware.gpu_info_fw = ((void*)0);
 }
 VAR_6->accel_working = 0;
 FUNC_19(&VAR_6->delayed_init_work);

 if (!FUNC_7(VAR_6))
  FUNC_12(VAR_6);

 if (VAR_4 != 1)
  FUNC_3(VAR_6);

 FUNC_24(VAR_6->bios);
 VAR_6->bios = ((void*)0);
 if (!FUNC_26(VAR_6->pdev))
  FUNC_30(VAR_6->pdev);
 if (VAR_6->flags & VAR_0)
  FUNC_29(VAR_6->dev);
 FUNC_28(VAR_6->pdev, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_6->rio_mem)
  FUNC_25(VAR_6->pdev, VAR_6->rio_mem);
 VAR_6->rio_mem = ((void*)0);
 FUNC_23(VAR_6->rmmio);
 VAR_6->rmmio = ((void*)0);
 FUNC_6(VAR_6);
 if (FUNC_17(VAR_6) && FUNC_2(VAR_6))
  FUNC_15(VAR_6);

 FUNC_5(VAR_6);
 FUNC_20(VAR_6->dev, &VAR_5);
 FUNC_18(VAR_6);
 if (FUNC_1(VAR_2))
  FUNC_16(VAR_6);
 FUNC_4(VAR_6);
 if (VAR_3 && VAR_6->asic_type >= VAR_1)
  FUNC_9(VAR_6);
}
