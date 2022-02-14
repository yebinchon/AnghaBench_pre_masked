
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_crtc {int vblank_enable; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rcar_du_crtc*,int ,int ) ;
 struct rcar_du_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_2)
{
 struct rcar_du_crtc *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3, VAR_0, VAR_1);
 VAR_3->vblank_enable = 0;
}
