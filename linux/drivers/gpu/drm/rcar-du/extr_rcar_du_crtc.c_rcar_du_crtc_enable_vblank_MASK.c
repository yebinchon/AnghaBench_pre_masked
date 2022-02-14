
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_crtc {int vblank_enable; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rcar_du_crtc*,int ,int ) ;
 int FUNC_1 (struct rcar_du_crtc*,int ,int ) ;
 struct rcar_du_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_4)
{
 struct rcar_du_crtc *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_5, VAR_2, VAR_3);
 FUNC_0(VAR_5, VAR_0, VAR_1);
 VAR_5->vblank_enable = 1;

 return 0;
}
