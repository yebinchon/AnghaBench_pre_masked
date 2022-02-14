
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ta_xgmi_cmd_get_topology_info_output {int num_nodes; TYPE_6__* nodes; } ;
struct TYPE_10__ {struct ta_xgmi_cmd_get_topology_info_output get_topology_info; } ;
struct ta_xgmi_cmd_get_topology_info_input {int num_nodes; TYPE_3__* nodes; } ;
struct TYPE_8__ {struct ta_xgmi_cmd_get_topology_info_input get_topology_info; } ;
struct ta_xgmi_shared_memory {TYPE_4__ xgmi_out_message; int cmd_id; TYPE_2__ xgmi_in_message; } ;
struct psp_xgmi_topology_info {int num_nodes; TYPE_5__* nodes; } ;
struct TYPE_7__ {scalar_t__ xgmi_shared_buf; } ;
struct psp_context {TYPE_1__ xgmi_context; } ;
struct TYPE_12__ {int sdma_engine; int is_sharing_enabled; int num_hops; int node_id; } ;
struct TYPE_11__ {int sdma_engine; int is_sharing_enabled; int num_hops; int node_id; } ;
struct TYPE_9__ {int sdma_engine; int is_sharing_enabled; int num_hops; int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ta_xgmi_shared_memory*,int ,int) ;
 int FUNC_1 (struct psp_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_3,
 int VAR_4, struct psp_xgmi_topology_info *VAR_5)
{
 struct ta_xgmi_shared_memory *VAR_6;
 struct ta_xgmi_cmd_get_topology_info_input *VAR_7;
 struct ta_xgmi_cmd_get_topology_info_output *VAR_8;
 int VAR_9;
 int VAR_10;

 if (!VAR_5 || VAR_5->num_nodes > VAR_2)
  return -VAR_0;

 VAR_6 = (struct ta_xgmi_shared_memory*)VAR_3->xgmi_context.xgmi_shared_buf;
 FUNC_0(VAR_6, 0, sizeof(struct ta_xgmi_shared_memory));


 VAR_7 = &VAR_6->xgmi_in_message.get_topology_info;
 VAR_6->cmd_id = VAR_1;
 VAR_7->num_nodes = VAR_4;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_nodes; VAR_9++) {
  VAR_7->nodes[VAR_9].node_id = VAR_5->nodes[VAR_9].node_id;
  VAR_7->nodes[VAR_9].num_hops = VAR_5->nodes[VAR_9].num_hops;
  VAR_7->nodes[VAR_9].is_sharing_enabled = VAR_5->nodes[VAR_9].is_sharing_enabled;
  VAR_7->nodes[VAR_9].sdma_engine = VAR_5->nodes[VAR_9].sdma_engine;
 }


 VAR_10 = FUNC_1(VAR_3, VAR_1);
 if (VAR_10)
  return VAR_10;


 VAR_8 = &VAR_6->xgmi_out_message.get_topology_info;
 VAR_5->num_nodes = VAR_6->xgmi_out_message.get_topology_info.num_nodes;
 for (VAR_9 = 0; VAR_9 < VAR_5->num_nodes; VAR_9++) {
  VAR_5->nodes[VAR_9].node_id = VAR_8->nodes[VAR_9].node_id;
  VAR_5->nodes[VAR_9].num_hops = VAR_8->nodes[VAR_9].num_hops;
  VAR_5->nodes[VAR_9].is_sharing_enabled = VAR_8->nodes[VAR_9].is_sharing_enabled;
  VAR_5->nodes[VAR_9].sdma_engine = VAR_8->nodes[VAR_9].sdma_engine;
 }

 return 0;
}
