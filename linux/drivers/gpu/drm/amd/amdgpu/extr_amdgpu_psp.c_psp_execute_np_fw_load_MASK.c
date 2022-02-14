
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {int fence_buf_mc_addr; int cmd; } ;
struct amdgpu_firmware_info {int dummy; } ;


 int FUNC_0 (struct psp_context*,struct amdgpu_firmware_info*,int ,int ) ;
 int FUNC_1 (struct amdgpu_firmware_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_0,
          struct amdgpu_firmware_info *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1, VAR_0->cmd);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_0->cmd,
     VAR_0->fence_buf_mc_addr);

 return VAR_2;
}
