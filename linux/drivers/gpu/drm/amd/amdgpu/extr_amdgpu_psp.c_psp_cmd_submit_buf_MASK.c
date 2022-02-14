
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int session_id; } ;
struct psp_gfx_cmd_resp {TYPE_1__ resp; } ;
struct psp_context {int mutex; TYPE_3__* cmd_buf_mem; scalar_t__ fence_buf; int fence_value; int cmd_buf_mc_addr; } ;
struct amdgpu_firmware_info {int ucode_id; int tmr_mc_addr_hi; int tmr_mc_addr_lo; } ;
struct TYPE_6__ {int status; int fw_addr_hi; int fw_addr_lo; int session_id; } ;
struct TYPE_7__ {TYPE_2__ resp; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,struct psp_gfx_cmd_resp*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct psp_context*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct psp_context *VAR_3,
     struct amdgpu_firmware_info *VAR_4,
     struct psp_gfx_cmd_resp *VAR_5, uint64_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9 = 2000;

 FUNC_6(&VAR_3->mutex);

 FUNC_4(VAR_3->cmd_buf_mem, 0, VAR_2);

 FUNC_3(VAR_3->cmd_buf_mem, VAR_5, sizeof(struct psp_gfx_cmd_resp));

 VAR_8 = FUNC_2(&VAR_3->fence_value);
 VAR_7 = FUNC_8(VAR_3, VAR_3->cmd_buf_mc_addr, VAR_6, VAR_8);
 if (VAR_7) {
  FUNC_1(&VAR_3->fence_value);
  FUNC_7(&VAR_3->mutex);
  return VAR_7;
 }

 while (*((unsigned int *)VAR_3->fence_buf) != VAR_8) {
  if (--VAR_9 == 0)
   break;
  FUNC_5(1);
 }
 if (VAR_3->cmd_buf_mem->resp.status || !VAR_9) {
  if (VAR_4)
   FUNC_0("failed to load ucode id (%d) ",
      VAR_4->ucode_id);
  FUNC_0("psp command failed and response status is (0x%X)\n",
     VAR_3->cmd_buf_mem->resp.status & VAR_1);
  if (!VAR_9) {
   FUNC_7(&VAR_3->mutex);
   return -VAR_0;
  }
 }


 VAR_5->resp.session_id = VAR_3->cmd_buf_mem->resp.session_id;

 if (VAR_4) {
  VAR_4->tmr_mc_addr_lo = VAR_3->cmd_buf_mem->resp.fw_addr_lo;
  VAR_4->tmr_mc_addr_hi = VAR_3->cmd_buf_mem->resp.fw_addr_hi;
 }
 FUNC_7(&VAR_3->mutex);

 return VAR_7;
}
