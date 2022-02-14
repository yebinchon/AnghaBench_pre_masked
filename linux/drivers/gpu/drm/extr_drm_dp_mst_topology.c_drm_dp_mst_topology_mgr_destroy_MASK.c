
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_topology_mgr {int * funcs; int base; int * aux; int * dev; int payload_lock; int * proposed_vcpis; int * payloads; int destroy_connector_work; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_dp_mst_topology_mgr*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_dp_mst_topology_mgr *VAR_0)
{
 FUNC_1(VAR_0, 0);
 FUNC_2(&VAR_0->work);
 FUNC_2(&VAR_0->destroy_connector_work);
 FUNC_4(&VAR_0->payload_lock);
 FUNC_3(VAR_0->payloads);
 VAR_0->payloads = ((void*)0);
 FUNC_3(VAR_0->proposed_vcpis);
 VAR_0->proposed_vcpis = ((void*)0);
 FUNC_5(&VAR_0->payload_lock);
 VAR_0->dev = ((void*)0);
 VAR_0->aux = ((void*)0);
 FUNC_0(&VAR_0->base);
 VAR_0->funcs = ((void*)0);
}
