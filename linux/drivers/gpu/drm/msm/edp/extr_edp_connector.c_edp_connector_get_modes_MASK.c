
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_edp {int ctrl; } ;
struct edp_connector {struct msm_edp* edp; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (int ,struct drm_connector*,struct edid**) ;
 struct edp_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct edp_connector *VAR_1 = FUNC_4(VAR_0);
 struct msm_edp *VAR_2 = VAR_1->edp;

 struct edid *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_0("");
 VAR_4 = FUNC_3(VAR_2->ctrl, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_0, VAR_3);
 if (VAR_3)
  VAR_4 = FUNC_1(VAR_0, VAR_3);

 return VAR_4;
}
