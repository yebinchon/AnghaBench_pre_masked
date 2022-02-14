
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_payload {scalar_t__ payload_state; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct drm_dp_mst_topology_mgr *VAR_0,
     int VAR_1,
     struct drm_dp_payload *VAR_2)
{
 VAR_2->payload_state = 0;
 return 0;
}
