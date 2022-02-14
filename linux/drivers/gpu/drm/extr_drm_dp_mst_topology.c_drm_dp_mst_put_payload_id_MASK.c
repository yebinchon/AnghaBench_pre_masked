
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int max_payloads; int payload_lock; int payload_mask; TYPE_1__** proposed_vcpis; int vcpi_mask; } ;
struct TYPE_2__ {int vcpi; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_dp_mst_topology_mgr *VAR_0,
          int VAR_1)
{
 int VAR_2;
 if (VAR_1 == 0)
  return;

 FUNC_2(&VAR_0->payload_lock);
 FUNC_0("putting payload %d\n", VAR_1);
 FUNC_1(VAR_1 - 1, &VAR_0->vcpi_mask);

 for (VAR_2 = 0; VAR_2 < VAR_0->max_payloads; VAR_2++) {
  if (VAR_0->proposed_vcpis[VAR_2])
   if (VAR_0->proposed_vcpis[VAR_2]->vcpi == VAR_1) {
    VAR_0->proposed_vcpis[VAR_2] = ((void*)0);
    FUNC_1(VAR_2 + 1, &VAR_0->payload_mask);
   }
 }
 FUNC_3(&VAR_0->payload_lock);
}
