
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_connector*) ;
 struct msm_dsi* FUNC_2 (int) ;
 struct drm_encoder* FUNC_3 (struct msm_dsi*) ;

__attribute__((used)) static struct drm_encoder *
FUNC_4(struct drm_connector *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 struct msm_dsi *VAR_2 = FUNC_2(VAR_1);

 FUNC_0("");
 return FUNC_3(VAR_2);
}
