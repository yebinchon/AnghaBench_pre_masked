
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {int port; int mst_mgr; struct radeon_connector* mst_port; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (struct drm_connector*,int *,int ) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_0, bool VAR_1)
{
 struct radeon_connector *VAR_2 = FUNC_1(VAR_0);
 struct radeon_connector *VAR_3 = VAR_2->mst_port;

 return FUNC_0(VAR_0, &VAR_3->mst_mgr, VAR_2->port);
}
