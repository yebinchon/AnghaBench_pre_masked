
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_payload {scalar_t__ payload_state; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_dp_mst_topology_mgr*,int,struct drm_dp_payload*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_mst_topology_mgr *VAR_1,
           int VAR_2,
           struct drm_dp_payload *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  VAR_3->payload_state = 0;
  return VAR_4;
 }
 VAR_3->payload_state = VAR_0;
 return 0;
}
