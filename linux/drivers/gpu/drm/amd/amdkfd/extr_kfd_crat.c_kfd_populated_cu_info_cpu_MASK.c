
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capability; int cpu_core_id_base; int cpu_cores_count; } ;
struct kfd_topology_device {TYPE_1__ node_props; } ;
struct crat_subtype_computeunit {int hsa_capability; int processor_id_low; int num_cpu_cores; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct kfd_topology_device *VAR_2,
  struct crat_subtype_computeunit *VAR_3)
{
 VAR_2->node_props.cpu_cores_count = VAR_3->num_cpu_cores;
 VAR_2->node_props.cpu_core_id_base = VAR_3->processor_id_low;
 if (VAR_3->hsa_capability & VAR_0)
  VAR_2->node_props.capability |= VAR_1;

 FUNC_0("CU CPU: cores=%d id_base=%d\n", VAR_3->num_cpu_cores,
   VAR_3->processor_id_low);
}
