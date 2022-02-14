
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ta_xgmi_shared_memory {int cmd_id; } ;
struct TYPE_6__ {scalar_t__ xgmi_shared_buf; int initialized; } ;
struct psp_context {TYPE_3__ xgmi_context; TYPE_2__* adev; } ;
struct TYPE_4__ {int ta_fw; } ;
struct TYPE_5__ {TYPE_1__ psp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ta_xgmi_shared_memory*,int ,int) ;
 int FUNC_1 (struct psp_context*) ;
 int FUNC_2 (struct psp_context*,int ) ;
 int FUNC_3 (struct psp_context*) ;

__attribute__((used)) static int FUNC_4(struct psp_context *VAR_2)
{
 struct ta_xgmi_shared_memory *VAR_3;
 int VAR_4;

 if (!VAR_2->adev->psp.ta_fw)
  return -VAR_0;

 if (!VAR_2->xgmi_context.initialized) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   return VAR_4;
 }


 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_3 = (struct ta_xgmi_shared_memory *)(VAR_2->xgmi_context.xgmi_shared_buf);
 FUNC_0(VAR_3, 0, sizeof(struct ta_xgmi_shared_memory));
 VAR_3->cmd_id = VAR_1;

 VAR_4 = FUNC_2(VAR_2, VAR_3->cmd_id);

 return VAR_4;
}
