
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int mst_mgr; } ;
struct intel_connector {int port; struct intel_dp* mst_port; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,int *,int ) ;
 struct intel_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct drm_connector *VAR_1, bool VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_2(VAR_1);
 struct intel_dp *VAR_4 = VAR_3->mst_port;

 if (FUNC_0(VAR_1))
  return VAR_0;
 return FUNC_1(VAR_1, &VAR_4->mst_mgr,
          VAR_3->port);
}
