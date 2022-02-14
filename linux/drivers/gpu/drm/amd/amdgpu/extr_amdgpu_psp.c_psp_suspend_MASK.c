
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int initialized; } ;
struct psp_context {TYPE_2__* adev; TYPE_5__ xgmi_context; } ;
struct TYPE_8__ {int num_physical_nodes; } ;
struct TYPE_9__ {TYPE_3__ xgmi; } ;
struct amdgpu_device {TYPE_4__ gmc; struct psp_context psp; } ;
struct TYPE_6__ {scalar_t__ ta_fw; } ;
struct TYPE_7__ {TYPE_1__ psp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct psp_context*) ;
 int FUNC_2 (struct psp_context*,int ) ;
 int FUNC_3 (struct psp_context*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;
 struct psp_context *VAR_4 = &VAR_3->psp;

 if (VAR_3->gmc.xgmi.num_physical_nodes > 1 &&
     VAR_4->xgmi_context.initialized == 1) {
  VAR_2 = FUNC_3(VAR_4);
  if (VAR_2) {
   FUNC_0("Failed to terminate xgmi ta\n");
   return VAR_2;
  }
 }

 if (VAR_4->adev->psp.ta_fw) {
  VAR_2 = FUNC_1(VAR_4);
  if (VAR_2) {
   FUNC_0("Failed to terminate ras ta\n");
   return VAR_2;
  }
 }

 VAR_2 = FUNC_2(VAR_4, VAR_0);
 if (VAR_2) {
  FUNC_0("PSP ring stop failed\n");
  return VAR_2;
 }

 return 0;
}
