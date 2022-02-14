
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_mst_topology_mgr {int lock; scalar_t__ mst_primary; int aux; int * dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_dp_mst_topology_mgr *VAR_7)
{
 int VAR_8 = 0;

 FUNC_4(&VAR_7->lock);

 if (VAR_7->mst_primary) {
  int VAR_9;
  u8 VAR_10[16];

  VAR_9 = FUNC_2(VAR_7->aux, VAR_0, VAR_7->dpcd, VAR_4);
  if (VAR_9 != VAR_4) {
   FUNC_0("dpcd read failed - undocked during suspend?\n");
   VAR_8 = -1;
   goto out_unlock;
  }

  VAR_8 = FUNC_3(VAR_7->aux, VAR_2,
      VAR_3 | VAR_6 | VAR_5);
  if (VAR_8 < 0) {
   FUNC_0("mst write failed - undocked during suspend?\n");
   VAR_8 = -1;
   goto out_unlock;
  }


  VAR_9 = FUNC_2(VAR_7->aux, VAR_1, VAR_10, 16);
  if (VAR_9 != 16) {
   FUNC_0("dpcd read failed - undocked during suspend?\n");
   VAR_8 = -1;
   goto out_unlock;
  }
  FUNC_1(VAR_7->mst_primary, VAR_10);

  VAR_8 = 0;
 } else
  VAR_8 = -1;

out_unlock:
 FUNC_5(&VAR_7->lock);
 return VAR_8;
}
