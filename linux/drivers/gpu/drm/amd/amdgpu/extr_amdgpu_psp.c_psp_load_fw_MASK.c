
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_gfx_cmd_resp {int dummy; } ;
struct psp_context {void* fw_pri_buf; void* fence_buf; int cmd_buf_mem; int cmd_buf_mc_addr; int cmd_buf_bo; int fence_buf_mc_addr; int fence_buf_bo; int fw_pri_mc_addr; int fw_pri_bo; struct amdgpu_device* adev; int cmd; } ;
struct amdgpu_device {scalar_t__ in_gpu_reset; struct psp_context psp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int ,int *,int *,void**) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (struct psp_context*) ;
 int FUNC_6 (struct psp_context*) ;
 int FUNC_7 (struct psp_context*,int ) ;
 int FUNC_8 (struct psp_context*,int ) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_9)
{
 int VAR_10;
 struct psp_context *VAR_11 = &VAR_9->psp;

 if (FUNC_2(VAR_9) && VAR_9->in_gpu_reset) {
  FUNC_8(VAR_11, VAR_8);
  goto skip_memalloc;
 }

 VAR_11->cmd = FUNC_3(sizeof(struct psp_gfx_cmd_resp), VAR_3);
 if (!VAR_11->cmd)
  return -VAR_2;


 if (!FUNC_2(VAR_11->adev)) {
  VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_5,
           VAR_0,
           &VAR_11->fw_pri_bo,
           &VAR_11->fw_pri_mc_addr,
           &VAR_11->fw_pri_buf);
  if (VAR_10)
   goto failed;
 }

 VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_4,
     VAR_1,
     &VAR_11->fence_buf_bo,
     &VAR_11->fence_buf_mc_addr,
     &VAR_11->fence_buf);
 if (VAR_10)
  goto failed;

 VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_4,
          VAR_1,
          &VAR_11->cmd_buf_bo, &VAR_11->cmd_buf_mc_addr,
          (void **)&VAR_11->cmd_buf_mem);
 if (VAR_10)
  goto failed;

 FUNC_4(VAR_11->fence_buf, 0, VAR_7);

 VAR_10 = FUNC_7(VAR_11, VAR_8);
 if (VAR_10) {
  FUNC_0("PSP ring init failed!\n");
  goto failed;
 }

skip_memalloc:
 VAR_10 = FUNC_5(VAR_11);
 if (VAR_10)
  goto failed;

 VAR_10 = FUNC_6(VAR_11);
 if (VAR_10)
  goto failed;

 return 0;

failed:





 return VAR_10;
}
