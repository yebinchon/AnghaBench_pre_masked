
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct psp_xgmi_topology_info {int num_nodes; TYPE_5__* nodes; } ;
struct TYPE_8__ {scalar_t__ node_id; } ;
struct TYPE_9__ {TYPE_3__ xgmi; } ;
struct TYPE_6__ {struct psp_xgmi_topology_info top_info; } ;
struct TYPE_7__ {TYPE_1__ xgmi_context; } ;
struct amdgpu_device {TYPE_4__ gmc; TYPE_2__ psp; } ;
struct TYPE_10__ {scalar_t__ node_id; int num_hops; } ;


 int VAR_0 ;

int FUNC_0(struct amdgpu_device *VAR_1,
  struct amdgpu_device *VAR_2)
{
 struct psp_xgmi_topology_info *VAR_3 = &VAR_1->psp.xgmi_context.top_info;
 int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < VAR_3->num_nodes; ++VAR_4)
  if (VAR_3->nodes[VAR_4].node_id == VAR_2->gmc.xgmi.node_id)
   return VAR_3->nodes[VAR_4].num_hops;
 return -VAR_0;
}
