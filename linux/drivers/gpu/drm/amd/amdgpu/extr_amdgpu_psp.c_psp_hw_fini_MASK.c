
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int initialized; } ;
struct psp_context {void* fw_pri_buf; void* fence_buf; void* asd_shared_buf; int * cmd; int cmd_buf_mem; int cmd_buf_mc_addr; int cmd_buf_bo; int asd_shared_mc_addr; int asd_shared_bo; int fence_buf_mc_addr; int fence_buf_bo; int fw_pri_mc_addr; int fw_pri_bo; int tmr_mc_addr; int tmr_bo; TYPE_5__* adev; TYPE_3__ xgmi_context; } ;
struct TYPE_6__ {int num_physical_nodes; } ;
struct TYPE_7__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; struct psp_context psp; } ;
struct TYPE_9__ {scalar_t__ ta_fw; } ;
struct TYPE_10__ {TYPE_4__ psp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,void**) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct psp_context*) ;
 int FUNC_4 (struct psp_context*,int ) ;
 int FUNC_5 (struct psp_context*) ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct psp_context *VAR_3 = &VAR_2->psp;
 void *VAR_4;
 void **VAR_5;

 if (VAR_2->gmc.xgmi.num_physical_nodes > 1 &&
     VAR_3->xgmi_context.initialized == 1)
                FUNC_5(VAR_3);

 if (VAR_3->adev->psp.ta_fw)
  FUNC_3(VAR_3);

 FUNC_4(VAR_3, VAR_0);

 VAR_5 = FUNC_1(VAR_3->adev) ? &VAR_4 : ((void*)0);
 FUNC_0(&VAR_3->tmr_bo, &VAR_3->tmr_mc_addr, VAR_5);
 FUNC_0(&VAR_3->fw_pri_bo,
         &VAR_3->fw_pri_mc_addr, &VAR_3->fw_pri_buf);
 FUNC_0(&VAR_3->fence_buf_bo,
         &VAR_3->fence_buf_mc_addr, &VAR_3->fence_buf);
 FUNC_0(&VAR_3->asd_shared_bo, &VAR_3->asd_shared_mc_addr,
         &VAR_3->asd_shared_buf);
 FUNC_0(&VAR_3->cmd_buf_bo, &VAR_3->cmd_buf_mc_addr,
         (void **)&VAR_3->cmd_buf_mem);

 FUNC_2(VAR_3->cmd);
 VAR_3->cmd = ((void*)0);

 return 0;
}
