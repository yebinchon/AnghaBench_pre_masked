
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_sideband_msg_tx {scalar_t__ state; size_t seqno; int next; } ;
struct drm_dp_mst_topology_mgr {int qlock; int tx_waitq; } ;
struct drm_dp_mst_branch {int ** tx_slots; struct drm_dp_mst_topology_mgr* mgr; } ;


 int FUNC_0 (char*,struct drm_dp_sideband_msg_tx*,scalar_t__,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct drm_dp_mst_branch *VAR_6,
        struct drm_dp_sideband_msg_tx *VAR_7)
{
 struct drm_dp_mst_topology_mgr *VAR_8 = VAR_6->mgr;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_8->tx_waitq,
     FUNC_1(VAR_8, VAR_7),
     (4 * VAR_5));
 FUNC_3(&VAR_6->mgr->qlock);
 if (VAR_9 > 0) {
  if (VAR_7->state == VAR_3) {
   VAR_9 = -VAR_4;
   goto out;
  }
 } else {
  FUNC_0("timedout msg send %p %d %d\n", VAR_7, VAR_7->state, VAR_7->seqno);


  VAR_9 = -VAR_4;


  if (VAR_7->state == VAR_0 ||
      VAR_7->state == VAR_2) {
   FUNC_2(&VAR_7->next);
  }

  if (VAR_7->state == VAR_2 ||
      VAR_7->state == VAR_1) {
   VAR_6->tx_slots[VAR_7->seqno] = ((void*)0);
  }
 }
out:
 FUNC_4(&VAR_8->qlock);

 return VAR_9;
}
