
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int node_id; } ;
struct TYPE_6__ {TYPE_2__ get_node_id; } ;
struct ta_xgmi_shared_memory {TYPE_3__ xgmi_out_message; int cmd_id; } ;
struct TYPE_4__ {scalar_t__ xgmi_shared_buf; } ;
struct psp_context {TYPE_1__ xgmi_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct ta_xgmi_shared_memory*,int ,int) ;
 int FUNC_1 (struct psp_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_1, uint64_t *VAR_2)
{
 struct ta_xgmi_shared_memory *VAR_3;
 int VAR_4;

 VAR_3 = (struct ta_xgmi_shared_memory*)VAR_1->xgmi_context.xgmi_shared_buf;
 FUNC_0(VAR_3, 0, sizeof(struct ta_xgmi_shared_memory));

 VAR_3->cmd_id = VAR_0;


 VAR_4 = FUNC_1(VAR_1, VAR_3->cmd_id);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3->xgmi_out_message.get_node_id.node_id;

 return 0;
}
