
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_port {int dummy; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_dm_connector {struct drm_dp_mst_port* port; } ;


 int FUNC_0 (struct drm_connector*,struct drm_dp_mst_port*) ;
 struct amdgpu_dm_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_2(struct drm_connector *VAR_0)
{
 struct amdgpu_dm_connector *VAR_1 =
  FUNC_1(VAR_0);
 struct drm_dp_mst_port *VAR_2 = VAR_1->port;

 return FUNC_0(VAR_0, VAR_2);
}
