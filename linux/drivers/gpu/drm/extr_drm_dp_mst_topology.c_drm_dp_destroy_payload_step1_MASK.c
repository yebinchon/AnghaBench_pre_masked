
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_payload {int payload_state; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_dp_mst_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_dp_mst_topology_mgr*,int,struct drm_dp_payload*) ;
 int FUNC_2 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_dp_mst_topology_mgr *VAR_1,
     struct drm_dp_mst_port *VAR_2,
     int VAR_3,
     struct drm_dp_payload *VAR_4)
{
 FUNC_0("\n");

 if (VAR_2) {
  FUNC_2(VAR_1, VAR_2, VAR_3, 0);
 }

 FUNC_1(VAR_1, VAR_3, VAR_4);
 VAR_4->payload_state = VAR_0;
 return 0;
}
