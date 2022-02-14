
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_topology_mgr {int lock; int mst_primary; } ;
struct drm_dp_mst_port {int port_num; struct drm_dp_mst_branch* parent; } ;
struct drm_dp_mst_branch {int dummy; } ;


 struct drm_dp_mst_port* FUNC_0 (struct drm_dp_mst_branch*) ;
 scalar_t__ FUNC_1 (struct drm_dp_mst_branch*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct drm_dp_mst_branch *
FUNC_4(struct drm_dp_mst_topology_mgr *VAR_0,
     struct drm_dp_mst_branch *VAR_1,
     int *VAR_2)
{
 struct drm_dp_mst_branch *VAR_3 = ((void*)0);
 struct drm_dp_mst_port *VAR_4;

 FUNC_2(&VAR_0->lock);
 if (!VAR_0->mst_primary)
  goto out;

 do {
  VAR_4 = FUNC_0(VAR_1);
  if (!VAR_4)
   break;

  if (FUNC_1(VAR_4->parent)) {
   VAR_3 = VAR_4->parent;
   *VAR_2 = VAR_4->port_num;
  } else {

   VAR_1 = VAR_4->parent;
  }
 } while (!VAR_3);
out:
 FUNC_3(&VAR_0->lock);
 return VAR_3;
}
