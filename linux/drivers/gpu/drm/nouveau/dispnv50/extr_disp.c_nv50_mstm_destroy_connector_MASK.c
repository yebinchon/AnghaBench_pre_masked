
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_mstc {int connector; } ;
struct nouveau_drm {TYPE_1__* fbcon; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_connector {int dev; } ;
struct TYPE_2__ {int helper; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct nouveau_drm* FUNC_3 (int ) ;
 struct nv50_mstc* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_5(struct drm_dp_mst_topology_mgr *VAR_0,
       struct drm_connector *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_3(VAR_1->dev);
 struct nv50_mstc *VAR_3 = FUNC_4(VAR_1);

 FUNC_1(&VAR_3->connector);

 FUNC_2(&VAR_2->fbcon->helper, &VAR_3->connector);

 FUNC_0(&VAR_3->connector);
}
