
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_port {struct drm_dp_mst_branch* parent; struct drm_dp_mst_branch* mstb; } ;
struct drm_dp_mst_branch {struct drm_dp_mst_port* port_parent; } ;



__attribute__((used)) static struct drm_dp_mst_port *FUNC_0(struct drm_dp_mst_branch *VAR_0)
{
 if (!VAR_0->port_parent)
  return ((void*)0);

 if (VAR_0->port_parent->mstb != VAR_0)
  return VAR_0->port_parent;

 return FUNC_0(VAR_0->port_parent->parent);
}
