
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_2__ {int ddc; } ;
struct drm_dp_mst_port {int pdt; int port_num; int ldps; TYPE_1__ aux; int cached_edid; int ddps; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;






 int VAR_0 ;
 int VAR_1 ;
 struct drm_dp_mst_port* FUNC_0 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_1 (struct drm_dp_mst_port*) ;
 int FUNC_2 (struct drm_connector*,int *) ;

enum drm_connector_status FUNC_3(struct drm_connector *VAR_2,
       struct drm_dp_mst_topology_mgr *VAR_3, struct drm_dp_mst_port *VAR_4)
{
 enum drm_connector_status VAR_5 = VAR_1;


 VAR_4 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_4)
  return VAR_1;

 if (!VAR_4->ddps)
  goto out;

 switch (VAR_4->pdt) {
 case 129:
 case 130:
  break;

 case 128:
  VAR_5 = VAR_0;

  if (VAR_4->port_num >= 8 && !VAR_4->cached_edid) {
   VAR_4->cached_edid = FUNC_2(VAR_2, &VAR_4->aux.ddc);
  }
  break;
 case 131:
  if (VAR_4->ldps)
   VAR_5 = VAR_0;
  break;
 }
out:
 FUNC_1(VAR_4);
 return VAR_5;
}
