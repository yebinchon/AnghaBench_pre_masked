
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_sideband_msg_tx {int state; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct drm_dp_mst_topology_mgr *VAR_2,
         struct drm_dp_sideband_msg_tx *VAR_3)
{
 unsigned int VAR_4;






 VAR_4 = FUNC_0(VAR_3->state);
 return (VAR_4 == VAR_0 ||
  VAR_4 == VAR_1);
}
