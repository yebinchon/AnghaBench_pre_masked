
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ta_xgmi_cmd_get_topology_info_input {int num_nodes; TYPE_3__* nodes; } ;
struct TYPE_6__ {struct ta_xgmi_cmd_get_topology_info_input get_topology_info; } ;
struct ta_xgmi_shared_memory {int cmd_id; TYPE_2__ xgmi_in_message; } ;
struct psp_xgmi_topology_info {scalar_t__ num_nodes; TYPE_4__* nodes; } ;
struct TYPE_5__ {scalar_t__ xgmi_shared_buf; } ;
struct psp_context {TYPE_1__ xgmi_context; } ;
struct TYPE_8__ {int sdma_engine; int num_hops; int node_id; } ;
struct TYPE_7__ {int is_sharing_enabled; int sdma_engine; int num_hops; int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ta_xgmi_shared_memory*,int ,int) ;
 int FUNC_1 (struct psp_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_3,
 int VAR_4, struct psp_xgmi_topology_info *VAR_5)
{
 struct ta_xgmi_shared_memory *VAR_6;
 struct ta_xgmi_cmd_get_topology_info_input *VAR_7;
 int VAR_8;

 if (!VAR_5 || VAR_5->num_nodes > VAR_2)
  return -VAR_0;

 VAR_6 = (struct ta_xgmi_shared_memory*)VAR_3->xgmi_context.xgmi_shared_buf;
 FUNC_0(VAR_6, 0, sizeof(struct ta_xgmi_shared_memory));

 VAR_7 = &VAR_6->xgmi_in_message.get_topology_info;
 VAR_6->cmd_id = VAR_1;
 VAR_7->num_nodes = VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_nodes; VAR_8++) {
  VAR_7->nodes[VAR_8].node_id = VAR_5->nodes[VAR_8].node_id;
  VAR_7->nodes[VAR_8].num_hops = VAR_5->nodes[VAR_8].num_hops;
  VAR_7->nodes[VAR_8].is_sharing_enabled = 1;
  VAR_7->nodes[VAR_8].sdma_engine = VAR_5->nodes[VAR_8].sdma_engine;
 }


 return FUNC_1(VAR_3, VAR_1);
}
