
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {int base; struct edid* edid; int port; int mst_mgr; struct radeon_connector* mst_port; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*,struct edid*) ;
 int FUNC_1 (int *,struct edid*) ;
 int FUNC_2 (int *,struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*,int *,int ) ;
 struct radeon_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_4(VAR_0);
 struct radeon_connector *VAR_2 = VAR_1->mst_port;
 struct edid *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_3(VAR_0, &VAR_2->mst_mgr, VAR_1->port);
 VAR_1->edid = VAR_3;
 FUNC_0("edid retrieved %p\n", VAR_3);
 if (VAR_1->edid) {
  FUNC_2(&VAR_1->base, VAR_1->edid);
  VAR_4 = FUNC_1(&VAR_1->base, VAR_1->edid);
  return VAR_4;
 }
 FUNC_2(&VAR_1->base, ((void*)0));

 return VAR_4;
}
