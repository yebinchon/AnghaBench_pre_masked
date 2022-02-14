
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_topology_mgr {int destroy_connector_work; int work; int lock; int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_dp_mst_topology_mgr *VAR_3)
{
 FUNC_2(&VAR_3->lock);
 FUNC_0(VAR_3->aux, VAR_0,
      VAR_1 | VAR_2);
 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_3->work);
 FUNC_1(&VAR_3->destroy_connector_work);
}
