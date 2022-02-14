
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_crtc {int pending_needs_vblank; int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtk_drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct mtk_drm_crtc *VAR_0)
{
 FUNC_0(&VAR_0->base);
 if (VAR_0->pending_needs_vblank) {
  FUNC_1(VAR_0);
  VAR_0->pending_needs_vblank = 0;
 }
}
