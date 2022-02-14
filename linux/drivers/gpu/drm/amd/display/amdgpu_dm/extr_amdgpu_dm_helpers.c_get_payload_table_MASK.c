
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int max_payloads; int payload_lock; TYPE_3__** proposed_vcpis; TYPE_2__* payloads; } ;
struct dp_mst_stream_allocation_table {size_t stream_count; struct dp_mst_stream_allocation* stream_allocations; } ;
struct dp_mst_stream_allocation {scalar_t__ slot_count; int vcp_id; } ;
struct amdgpu_dm_connector {TYPE_1__* mst_port; } ;
struct TYPE_6__ {int vcpi; } ;
struct TYPE_5__ {scalar_t__ num_slots; scalar_t__ payload_state; } ;
struct TYPE_4__ {struct drm_dp_mst_topology_mgr mst_mgr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  struct amdgpu_dm_connector *VAR_3,
  struct dp_mst_stream_allocation_table *VAR_4)
{
 int VAR_5;
 struct drm_dp_mst_topology_mgr *VAR_6 =
   &VAR_3->mst_port->mst_mgr;

 FUNC_1(&VAR_6->payload_lock);

 VAR_4->stream_count = 0;


 for (VAR_5 = 0; VAR_5 < VAR_6->max_payloads; VAR_5++) {
  if (VAR_6->payloads[VAR_5].num_slots == 0)
   break;

  FUNC_0(VAR_6->payloads[VAR_5].payload_state !=
    VAR_0);

  if (VAR_6->payloads[VAR_5].payload_state == VAR_1 ||
   VAR_6->payloads[VAR_5].payload_state ==
     VAR_2) {

   struct dp_mst_stream_allocation *VAR_7 =
     &VAR_4->stream_allocations[
      VAR_4->stream_count];

   VAR_7->slot_count = VAR_6->payloads[VAR_5].num_slots;
   VAR_7->vcp_id = VAR_6->proposed_vcpis[VAR_5]->vcpi;
   VAR_4->stream_count++;
  }
 }

 FUNC_2(&VAR_6->payload_lock);
}
