
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_sideband_msg_tx {int seqno; struct drm_dp_mst_branch* dst; } ;
struct drm_dp_mst_topology_mgr {int qlock; } ;
struct drm_dp_mst_branch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_sideband_msg_tx*,int) ;
 int FUNC_1 (struct drm_dp_sideband_msg_tx*) ;
 struct drm_dp_sideband_msg_tx* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_6(struct drm_dp_mst_topology_mgr *VAR_2,
        struct drm_dp_mst_branch *VAR_3,
        int VAR_4, int VAR_5, bool VAR_6)
{
 struct drm_dp_sideband_msg_tx *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dst = VAR_3;
 VAR_7->seqno = VAR_5;
 FUNC_0(VAR_7, VAR_4);

 FUNC_3(&VAR_2->qlock);

 FUNC_5(VAR_2, VAR_7);

 FUNC_4(&VAR_2->qlock);

 FUNC_1(VAR_7);
 return 0;
}
