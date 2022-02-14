
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capability; int max_slots_scratch_cu; int simd_per_cu; int cu_per_simd_array; int array_count; int wave_front_size; int max_waves_per_simd; int lds_size_in_kb; int simd_count; int simd_id_base; } ;
struct kfd_topology_device {TYPE_1__ node_props; } ;
struct crat_subtype_computeunit {int hsa_capability; int processor_id_low; int max_slots_scatch_cu; int num_simd_per_cu; int num_cu_per_array; int array_count; int wave_front_size; int max_waves_simd; int lds_size_in_kb; int num_simd_cores; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct kfd_topology_device *VAR_2,
  struct crat_subtype_computeunit *VAR_3)
{
 VAR_2->node_props.simd_id_base = VAR_3->processor_id_low;
 VAR_2->node_props.simd_count = VAR_3->num_simd_cores;
 VAR_2->node_props.lds_size_in_kb = VAR_3->lds_size_in_kb;
 VAR_2->node_props.max_waves_per_simd = VAR_3->max_waves_simd;
 VAR_2->node_props.wave_front_size = VAR_3->wave_front_size;
 VAR_2->node_props.array_count = VAR_3->array_count;
 VAR_2->node_props.cu_per_simd_array = VAR_3->num_cu_per_array;
 VAR_2->node_props.simd_per_cu = VAR_3->num_simd_per_cu;
 VAR_2->node_props.max_slots_scratch_cu = VAR_3->max_slots_scatch_cu;
 if (VAR_3->hsa_capability & VAR_0)
  VAR_2->node_props.capability |= VAR_1;
 FUNC_0("CU GPU: id_base=%d\n", VAR_3->processor_id_low);
}
