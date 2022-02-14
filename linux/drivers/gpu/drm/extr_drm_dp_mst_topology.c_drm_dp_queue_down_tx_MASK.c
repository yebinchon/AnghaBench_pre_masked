
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_sideband_msg_tx {int next; } ;
struct drm_dp_mst_topology_mgr {int qlock; int tx_msg_downq; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*) ;

__attribute__((used)) static void FUNC_5(struct drm_dp_mst_topology_mgr *VAR_0,
     struct drm_dp_sideband_msg_tx *VAR_1)
{
 FUNC_2(&VAR_0->qlock);
 FUNC_0(&VAR_1->next, &VAR_0->tx_msg_downq);
 if (FUNC_1(&VAR_0->tx_msg_downq))
  FUNC_4(VAR_0);
 FUNC_3(&VAR_0->qlock);
}
