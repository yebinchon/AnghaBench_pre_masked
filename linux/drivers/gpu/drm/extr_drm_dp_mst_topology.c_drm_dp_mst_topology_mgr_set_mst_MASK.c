
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_payload {int num_slots; scalar_t__ start_slot; } ;
struct drm_dp_mst_topology_mgr {int mst_state; int* dpcd; int max_payloads; int lock; scalar_t__ vcpi_mask; scalar_t__ payload_mask; int payloads; int aux; struct drm_dp_mst_branch* mst_primary; int work; int pbn_div; } ;
struct drm_dp_mst_branch {struct drm_dp_mst_topology_mgr* mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct drm_dp_mst_branch*) ;
 struct drm_dp_mst_branch* FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*,int ,struct drm_dp_payload*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int,int,int *) ;
 int FUNC_7 (struct drm_dp_mst_branch*) ;
 int FUNC_8 (struct drm_dp_mst_branch*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,scalar_t__*) ;
 int VAR_9 ;

int FUNC_14(struct drm_dp_mst_topology_mgr *VAR_10, bool VAR_11)
{
 int VAR_12 = 0;
 struct drm_dp_mst_branch *VAR_13 = ((void*)0);

 FUNC_10(&VAR_10->lock);
 if (VAR_11 == VAR_10->mst_state)
  goto out_unlock;

 VAR_10->mst_state = VAR_11;

 if (VAR_11) {
  FUNC_1(VAR_10->mst_primary);


  VAR_12 = FUNC_3(VAR_10->aux, VAR_0, VAR_10->dpcd, VAR_4);
  if (VAR_12 != VAR_4) {
   FUNC_0("failed to read DPCD\n");
   goto out_unlock;
  }

  if (!FUNC_6(VAR_10->dpcd[1],
           VAR_10->dpcd[2] & VAR_1,
           &VAR_10->pbn_div)) {
   VAR_12 = -VAR_7;
   goto out_unlock;
  }


  VAR_13 = FUNC_2(1, ((void*)0));
  if (VAR_13 == ((void*)0)) {
   VAR_12 = -VAR_8;
   goto out_unlock;
  }
  VAR_13->mgr = VAR_10;


  VAR_10->mst_primary = VAR_13;
  FUNC_7(VAR_10->mst_primary);

  VAR_12 = FUNC_5(VAR_10->aux, VAR_2,
        VAR_3 | VAR_6 | VAR_5);
  if (VAR_12 < 0) {
   goto out_unlock;
  }

  {
   struct drm_dp_payload VAR_14;
   VAR_14.start_slot = 0;
   VAR_14.num_slots = 0x3f;
   FUNC_4(VAR_10, 0, &VAR_14);
  }

  FUNC_12(VAR_9, &VAR_10->work);

  VAR_12 = 0;
 } else {

  VAR_13 = VAR_10->mst_primary;
  VAR_10->mst_primary = ((void*)0);

  FUNC_5(VAR_10->aux, VAR_2, 0);
  VAR_12 = 0;
  FUNC_9(VAR_10->payloads, 0, VAR_10->max_payloads * sizeof(struct drm_dp_payload));
  VAR_10->payload_mask = 0;
  FUNC_13(0, &VAR_10->payload_mask);
  VAR_10->vcpi_mask = 0;
 }

out_unlock:
 FUNC_11(&VAR_10->lock);
 if (VAR_13)
  FUNC_8(VAR_13);
 return VAR_12;

}
