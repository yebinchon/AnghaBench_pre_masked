
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct drm_dp_mst_topology_mgr {int lock; int mst_primary; } ;
struct drm_dp_mst_branch {int dummy; } ;


 int FUNC_0 (struct drm_dp_mst_branch*) ;
 struct drm_dp_mst_branch* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct drm_dp_mst_branch *
FUNC_4(struct drm_dp_mst_topology_mgr *VAR_0,
         uint8_t *VAR_1)
{
 struct drm_dp_mst_branch *VAR_2;
 int VAR_3;


 FUNC_2(&VAR_0->lock);

 VAR_2 = FUNC_1(VAR_0->mst_primary, VAR_1);
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3)
   VAR_2 = ((void*)0);
 }

 FUNC_3(&VAR_0->lock);
 return VAR_2;
}
