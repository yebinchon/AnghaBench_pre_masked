
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int mst_mgr; } ;
struct intel_connector {int port; struct intel_dp* mst_port; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_connector*) ;
 struct edid* FUNC_1 (struct drm_connector*,int *,int ) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct edid*) ;
 struct intel_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct intel_connector *VAR_1 = FUNC_4(VAR_0);
 struct intel_dp *VAR_2 = VAR_1->mst_port;
 struct edid *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_0))
  return FUNC_2(VAR_0, ((void*)0));

 VAR_3 = FUNC_1(VAR_0, &VAR_2->mst_mgr, VAR_1->port);
 VAR_4 = FUNC_2(VAR_0, VAR_3);
 FUNC_3(VAR_3);

 return VAR_4;
}
