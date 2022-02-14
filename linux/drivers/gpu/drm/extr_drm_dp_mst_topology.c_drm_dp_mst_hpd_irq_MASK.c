
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_mst_topology_mgr {int sink_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_mst_topology_mgr*) ;
 int FUNC_1 (struct drm_dp_mst_topology_mgr*) ;
 int FUNC_2 (struct drm_dp_mst_topology_mgr*) ;

int FUNC_3(struct drm_dp_mst_topology_mgr *VAR_2, u8 *VAR_3, bool *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 *VAR_4 = 0;
 VAR_6 = VAR_3[0] & 0x3f;

 if (VAR_6 != VAR_2->sink_count) {
  VAR_2->sink_count = VAR_6;
  *VAR_4 = 1;
 }

 if (VAR_3[1] & VAR_0) {
  VAR_5 = FUNC_0(VAR_2);
  *VAR_4 = 1;
 }

 if (VAR_3[1] & VAR_1) {
  VAR_5 |= FUNC_1(VAR_2);
  *VAR_4 = 1;
 }

 FUNC_2(VAR_2);
 return VAR_5;
}
