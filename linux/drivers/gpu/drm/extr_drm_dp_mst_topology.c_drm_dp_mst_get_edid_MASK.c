
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_2__ {int ddc; } ;
struct drm_dp_mst_port {int has_audio; TYPE_1__ aux; scalar_t__ cached_edid; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct edid*) ;
 struct drm_dp_mst_port* FUNC_1 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_2 (struct drm_dp_mst_port*) ;
 struct edid* FUNC_3 (scalar_t__) ;
 struct edid* FUNC_4 (struct drm_connector*,int *) ;

struct edid *FUNC_5(struct drm_connector *VAR_0, struct drm_dp_mst_topology_mgr *VAR_1, struct drm_dp_mst_port *VAR_2)
{
 struct edid *VAR_3 = ((void*)0);


 VAR_2 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_2)
  return ((void*)0);

 if (VAR_2->cached_edid)
  VAR_3 = FUNC_3(VAR_2->cached_edid);
 else {
  VAR_3 = FUNC_4(VAR_0, &VAR_2->aux.ddc);
 }
 VAR_2->has_audio = FUNC_0(VAR_3);
 FUNC_2(VAR_2);
 return VAR_3;
}
