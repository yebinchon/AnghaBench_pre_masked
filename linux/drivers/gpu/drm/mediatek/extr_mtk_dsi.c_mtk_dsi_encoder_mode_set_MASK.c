
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dsi {int vm; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct drm_display_mode*,int *) ;
 struct mtk_dsi* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0,
         struct drm_display_mode *VAR_1,
         struct drm_display_mode *VAR_2)
{
 struct mtk_dsi *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, &VAR_3->vm);
}
