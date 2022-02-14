
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct psp_context {struct amdgpu_device* adev; TYPE_1__* funcs; scalar_t__ kdb_bin_size; } ;
struct TYPE_8__ {scalar_t__ ta_fw; } ;
struct TYPE_6__ {int num_physical_nodes; } ;
struct TYPE_7__ {TYPE_2__ xgmi; } ;
struct amdgpu_device {int dev; TYPE_4__ psp; TYPE_3__ gmc; int in_gpu_reset; } ;
struct TYPE_5__ {int * bootloader_load_kdb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct psp_context*) ;
 int FUNC_4 (struct psp_context*) ;
 int FUNC_5 (struct psp_context*) ;
 int FUNC_6 (struct psp_context*) ;
 int FUNC_7 (struct psp_context*) ;
 int FUNC_8 (struct psp_context*) ;
 int FUNC_9 (struct psp_context*,int ) ;
 int FUNC_10 (struct psp_context*) ;
 int FUNC_11 (struct psp_context*) ;
 int FUNC_12 (struct psp_context*) ;

__attribute__((used)) static int FUNC_13(struct psp_context *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 int VAR_3;

 if (!FUNC_1(VAR_2) || !VAR_2->in_gpu_reset) {
  if (VAR_1->kdb_bin_size &&
      (VAR_1->funcs->bootloader_load_kdb != ((void*)0))) {
   VAR_3 = FUNC_5(VAR_1);
   if (VAR_3) {
    FUNC_0("PSP load kdb failed!\n");
    return VAR_3;
   }
  }

  VAR_3 = FUNC_7(VAR_1);
  if (VAR_3) {
   FUNC_0("PSP load sysdrv failed!\n");
   return VAR_3;
  }

  VAR_3 = FUNC_6(VAR_1);
  if (VAR_3) {
   FUNC_0("PSP load sos failed!\n");
   return VAR_3;
  }
 }

 VAR_3 = FUNC_9(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_0("PSP create ring failed!\n");
  return VAR_3;
 }

 VAR_3 = FUNC_10(VAR_1);
 if (VAR_3) {
  FUNC_0("PSP tmr init failed!\n");
  return VAR_3;
 }

 VAR_3 = FUNC_11(VAR_1);
 if (VAR_3) {
  FUNC_0("PSP load tmr failed!\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_0("PSP asd init failed!\n");
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_0("PSP load asd failed!\n");
  return VAR_3;
 }

 if (VAR_2->gmc.xgmi.num_physical_nodes > 1) {
  VAR_3 = FUNC_12(VAR_1);



  if (VAR_3)
   FUNC_2(VAR_1->adev->dev,
    "XGMI: Failed to initialize XGMI session\n");
 }

 if (VAR_1->adev->psp.ta_fw) {
  VAR_3 = FUNC_8(VAR_1);
  if (VAR_3)
   FUNC_2(VAR_1->adev->dev,
     "RAS: Failed to initialize RAS\n");
 }

 return 0;
}
