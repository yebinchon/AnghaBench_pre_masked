
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int cec_dev; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 struct mtk_hdmi* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_0)
{
 struct mtk_hdmi *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->cec_dev, ((void*)0), ((void*)0));

 FUNC_0(VAR_0);
}
