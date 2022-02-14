
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_crtc {int mutex; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ) ;
 struct mtk_drm_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0)
{
 struct mtk_drm_crtc *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->mutex);

 FUNC_0(VAR_0);
}
